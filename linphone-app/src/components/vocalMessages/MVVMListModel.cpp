/*
 * Copyright (c) 2010-2023 Belledonne Communications SARL.
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
 
#include "app/App.hpp"
#include "components/core/CoreManager.hpp"
#include "components/file/FileMediaModel.hpp"
#include "components/settings/AccountSettingsModel.hpp"
#include "components/settings/SettingsModel.hpp"
#include "components/sip-addresses/SipAddressesModel.hpp"
#include "utils/Utils.hpp"

#include "MVVMListModel.hpp"
#include <QFile>
#include <QDebug>
#include <QQmlApplicationEngine>


// =============================================================================

MVVMListModel::MVVMListModel (QObject *parent) : ProxyListModel(parent) {
	load();
}

MVVMListModel::~MVVMListModel(){
	mList.clear();
}

// -----------------------------------------------------------------------------

void MVVMListModel::load(){
	resetData();
	
	std::shared_ptr<linphone::Account> defaultAddress = CoreManager::getInstance()->getCore()->getDefaultAccount();
	auto username = QString::fromStdString(defaultAddress->findAuthInfo()->getUsername());
	QString folder = CoreManager::getInstance()->getSettingsModel()->getMVVMFolder()+"/"+username+"/" ;
	qInfo() << "[Recordings] looking for recordings in " << folder;
	QDir dir( folder );
	
	QList<QSharedPointer<FileMediaModel>> files;
	auto list = dir.entryInfoList(QDir::Files | QDir::NoDotAndDotDot, QDir::Time | QDir::Reversed);
	if (list.count() > 15) {
		while (list.count() > 15) {
			QFile fileTodelete(list.at(15).filePath()); 
			if (fileTodelete.remove())
				list.removeAt(15);
		}
	}
	foreach(QFileInfo file, list) {
		auto recording = FileMediaModel::create(file);
		if(recording) {
			App::getInstance()->getEngine()->setObjectOwnership(recording.get(), QQmlEngine::CppOwnership);// Avoid QML to destroy it when passing by Q_INVOKABLE
			files << recording;
		}
	}
	/*if (files.count() > 15) {
		while (files.count()>15)
		{
			QFile fileTodelete(files.at(15)->getFilePath()); ;
			if(fileTodelete.remove())
				files.removeAt(15);
		}
	}
	*/
	if (files.size() > 0) {
		add<FileMediaModel>(files);
	}
	
		
}

QHash<int, QByteArray> MVVMListModel::roleNames () const {
	QHash<int, QByteArray> roles = ProxyListModel::roleNames();
	roles[Qt::DisplayRole+1] = "$sectionDate";
	return roles;
}

QVariant MVVMListModel::data (const QModelIndex &index, int role) const{
	int row = index.row();
	if (!index.isValid() || row < 0 || row >= mList.count())
		return QVariant();
	if(role == Qt::DisplayRole +1){
		return QVariant::fromValue(mList[row].objectCast<FileMediaModel>()->getCreationDateTime().date());
	}else
		return ProxyListModel::data(index, role);
}
