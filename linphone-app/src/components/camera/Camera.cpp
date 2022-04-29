﻿/*
 * Copyright (c) 2010-2020 Belledonne Communications SARL.
 *
 * This file is part of linphone-desktop
 * (see https://www.linphone.org).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <QOpenGLFramebufferObject>
#include <QQuickWindow>
#include <QThread>
#include <QTimer>

#include "components/call/CallModel.hpp"
#include "components/core/CoreManager.hpp"
#include "components/participant/ParticipantDeviceModel.hpp"

#include "Camera.hpp"
#include "CameraDummy.hpp"

// =============================================================================

using namespace std;

namespace {
constexpr int MaxFps = 30;
}

QMutex Camera::mPreviewCounterMutex;
int Camera::mPreviewCounter;

// =============================================================================
Camera::Camera (QQuickItem *parent) : QQuickFramebufferObject(parent) {
	setTextureFollowsItemSize(true);
	// The fbo content must be y-mirrored because the ms rendering is y-inverted.
	setMirrorVertically(true);
	
	mRefreshTimer = new QTimer(this);
	mRefreshTimer->setInterval(1000 / MaxFps);
	
	QObject::connect(
				mRefreshTimer, &QTimer::timeout,
				this, &QQuickFramebufferObject::update,
				Qt::QueuedConnection
				);
	
	mRefreshTimer->start();
}

Camera::~Camera(){
	if(mIsPreview)
		deactivatePreview();
//	else
	//	resetWindowId();
}

void Camera::resetWindowId() {
	if(mIsPreview)
		CoreManager::getInstance()->getCore()->setNativePreviewWindowId(NULL);
	else if( mCallModel && mCallModel->getCall())
		mCallModel->getCall()->setNativeVideoWindowId(NULL);
	else if(mParticipantDeviceModel){
		if(mParticipantDeviceModel->getDevice())
			mParticipantDeviceModel->getDevice()->setNativeVideoWindowId(NULL);
	}else
		CoreManager::getInstance()->getCore()->setNativeVideoWindowId(NULL);
}

QQuickFramebufferObject::Renderer *Camera::createRenderer () const {
	QQuickFramebufferObject::Renderer * renderer = NULL;
	bool useDefaultWindow = true;
	if(mIsPreview){
		qWarning() << "Setting Camera to Preview";
		renderer = (QQuickFramebufferObject::Renderer *)CoreManager::getInstance()->getCore()->getNativePreviewWindowId();
		if(renderer)
			CoreManager::getInstance()->getCore()->setNativePreviewWindowId(NULL);// Reset
		renderer=(QQuickFramebufferObject::Renderer *)CoreManager::getInstance()->getCore()->createNativePreviewWindowId();
		if(renderer)
			CoreManager::getInstance()->getCore()->setNativePreviewWindowId(renderer);
	}else{
		if(mCallModel){
			auto call = mCallModel->getCall();
			if(call){
				qWarning() << "Setting Camera to CallModel";
				renderer = (QQuickFramebufferObject::Renderer *) call->getNativeVideoWindowId();
				if(renderer)
					call->setNativeVideoWindowId(NULL);// Reset
				renderer = (QQuickFramebufferObject::Renderer *) call->createNativeVideoWindowId();
				if(renderer)
					call->setNativeVideoWindowId(renderer);
				useDefaultWindow = false;
			}
		}else if( mParticipantDeviceModel){
			auto participantDevice = mParticipantDeviceModel->getDevice();
			if(participantDevice){
				qWarning() << "Setting Camera to Participant Device";
				renderer = (QQuickFramebufferObject::Renderer *)participantDevice->getNativeVideoWindowId();
				if(renderer)
					participantDevice->setNativeVideoWindowId(NULL);// Reset
				qWarning() << "Trying to create new window ID for " << participantDevice->getName().c_str() << ", addr=" << participantDevice->getAddress()->asString().c_str();
				renderer = (QQuickFramebufferObject::Renderer *) participantDevice->createNativeVideoWindowId();
				if(renderer)
					participantDevice->setNativeVideoWindowId(renderer);
				useDefaultWindow = false;
			}
		}
		if(useDefaultWindow){
			qWarning() << "Setting Camera to Defaul tWindow";
			renderer = (QQuickFramebufferObject::Renderer *)CoreManager::getInstance()->getCore()->getNativeVideoWindowId();
			if(renderer)
				CoreManager::getInstance()->getCore()->setNativeVideoWindowId(NULL);
			renderer = (QQuickFramebufferObject::Renderer *) CoreManager::getInstance()->getCore()->createNativeVideoWindowId();
			if(renderer)
				CoreManager::getInstance()->getCore()->setNativeVideoWindowId(renderer);
		}
	}
	if( !renderer){
		QTimer::singleShot(1, this, &Camera::isNotReady);// Workaround for const createRenderer
		qWarning() << "Camera stream couldn't start for Rendering. Retrying in 1s";
		renderer = new CameraDummy();
		QTimer::singleShot(1000, this, &Camera::requestNewRenderer);
		
	}else{
		QTimer::singleShot(1, this, &Camera::isReady);// Workaround for const createRenderer
	}
	return renderer;
}

// -----------------------------------------------------------------------------

CallModel *Camera::getCallModel () const {
	return mCallModel;
}

bool Camera::getIsPreview () const {
	return mIsPreview;
}

bool Camera::getIsReady () const {
	return mIsReady;
}

ParticipantDeviceModel * Camera::getParticipantDeviceModel() const{
	return mParticipantDeviceModel;
}

void Camera::setCallModel (CallModel *callModel) {
	if (mCallModel != callModel) {
		mCallModel = callModel;
		update();
		
		emit callChanged(mCallModel);
	}
}

void Camera::setIsPreview (bool status) {
	if (mIsPreview != status) {
		mIsPreview = status;
		if(mIsPreview)
			activatePreview();
		else
			deactivatePreview();
		update();
		
		emit isPreviewChanged(status);
	}
}

void Camera::setIsReady(bool status) {
	if (mIsReady != status) {
		mIsReady = status;
		emit isReadyChanged();
	}
}

void Camera::setParticipantDeviceModel(ParticipantDeviceModel * participantDeviceModel){
if (mParticipantDeviceModel != participantDeviceModel) {
		mParticipantDeviceModel = participantDeviceModel;
		update();
		emit participantDeviceModelChanged(mParticipantDeviceModel);
	}
}

void Camera::isReady(){
	setIsReady(true);
}
void Camera::isNotReady(){
	setIsReady(false);
}

void Camera::activatePreview(){
	mPreviewCounterMutex.lock();
	if (++mPreviewCounter == 1)
		CoreManager::getInstance()->getCore()->enableVideoPreview(true);
	mPreviewCounterMutex.unlock();
}

void Camera::deactivatePreview(){
	auto core = CoreManager::getInstance()->getCore();
	if(core){
		mPreviewCounterMutex.lock();
		if (--mPreviewCounter == 0)
			core->enableVideoPreview(false);
		mPreviewCounterMutex.unlock();
		core->setNativePreviewWindowId(NULL);
	}
}