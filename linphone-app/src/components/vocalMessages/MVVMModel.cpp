/*
 * Copyright (c) 2021 Belledonne Communications SARL.
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

#include <QQmlApplicationEngine>
#include <QFile>

#include "app/App.hpp"
#include "app/paths/Paths.hpp"
#include "components/core/CoreManager.hpp"
#include "components/settings/SettingsModel.hpp"
#include "utils/Utils.hpp"

#include "MVVMModel.hpp"

// =============================================================================

MVVMModel::MVVMModel (  QObject * parent) : QObject(parent) {
	//App::getInstance()->getEngine()->setObjectOwnership(this, QQmlEngine::CppOwnership);// Avoid QML to destroy it when passing by Q_INVOKABLE
	//mRecorder= recorder;
}

MVVMModel::~MVVMModel(){
}

std::shared_ptr<MVVMModel> MVVMModel::create( QObject * parent){
	return std::make_shared<MVVMModel>( parent);
}


std::shared_ptr<linphone::Recorder> MVVMModel::getRecorder(){
	return mRecorder;
}

int MVVMModel::getDuration()const{
	return mRecorder->getDuration();
}

float MVVMModel::getCaptureVolume()const{
	return mRecorder->getCaptureVolume();
}

LinphoneEnums::RecorderState MVVMModel::getState() const{
	return LinphoneEnums::fromLinphone(mRecorder->getState());
}

QString MVVMModel::getFile()const{
	return Utils::coreStringToAppString(mRecorder->getFile());
}

QStringList MVVMModel::splitSavedFilename(const QString& filename){
	QStringList fields = filename.split('_');
	if(fields.size() == 3 && fields[0] == "vocal"  && fields[1].split('-').size() == 3
		 && fields[2].split('-').size() == 4){
		return fields;
	}else
		return QStringList(filename);
}

QDateTime MVVMModel::getDateTimeSavedFilename(const QString& filename){
	auto fields = splitSavedFilename(filename);
	if(fields.size() > 1)
		return QDateTime::fromString(fields[1] + "_" +fields[2], "yyyy-MM-dd_hh-mm-ss-zzz");
	else
		return QDateTime();;
}

void MVVMModel::start(){
	bool soFarSoGood;
	QString filename = QStringLiteral("vocal_%1.mkv")
			.arg(QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss-zzz"));
	const QString safeFilePath = Utils::getSafeFilePath(
				QStringLiteral("%1%2")
				.arg(CoreManager::getInstance()->getSettingsModel()->getSavedCallsFolder())
				.arg(filename),
				&soFarSoGood
				);
	
	if (!soFarSoGood) {
		qWarning() << QStringLiteral("Unable to create safe file path for: %1.").arg(filename);
	}else if(mRecorder->open(Utils::appStringToCoreString(safeFilePath)) < 0)
		qWarning() << QStringLiteral("Unable to open safe file path for: %1.").arg(filename);
	else if( mRecorder->start() < 0)
		qWarning() << QStringLiteral("Unable to start recording to : %1.").arg(filename);
	emit stateChanged();
	emit fileChanged();
}

void MVVMModel::pause(){
	mRecorder->pause();
	emit stateChanged();
}

void MVVMModel::stop(){
	if(mRecorder->getState() == linphone::Recorder::State::Running)	// Remove these tests when the SDK do them.
		mRecorder->pause();
	if(mRecorder->getState() == linphone::Recorder::State::Paused)
		mRecorder->close();
	emit stateChanged();
}

//--------------------------------------------------------------------------------------------------------------------------
