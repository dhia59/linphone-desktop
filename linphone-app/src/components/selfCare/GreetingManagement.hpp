/*
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

#ifndef GREETINGMANAGEMENT_H_
#define GREETINGMANAGEMENT_H_

#include <linphone++/linphone.hh>
#include <utils/MediastreamerUtils.hpp>
#include <QObject>
#include <QVariantMap>
#include <QFont>

#include "components/core/CoreHandlers.hpp"
#include "utils/LinphoneEnums.hpp"
#include "utils/Utils.hpp"
#include "ForwardingModel.hpp"
#ifdef ENABLE_QT_KEYCHAIN
#include "components/vfs/VfsUtils.hpp"
#endif
#include <QObject>
#include <QStringList>

class GreetingManagement :public QObject
{	
	Q_OBJECT
		Q_PROPERTY(bool isLoading READ getIsLoading WRITE setIsLoading NOTIFY isLoadingChanged)
		Q_PROPERTY(QString fullGreeting READ getFullGreeting WRITE setFullGreeting NOTIFY fullGreetingChanged)
		Q_PROPERTY(QString onlynameGreeting READ getOnlynameGrgreeeeting WRITE setOnlynameGreeting NOTIFY onlynameGreetingChanged)
public:
	explicit GreetingManagement(QObject *parent = nullptr);
	
	Q_INVOKABLE bool updateFullGreeting(const QString& fileUrl);
	// getters && setters
	bool getIsLoading();
	QString getFullGreeting();
	QString getOnlynameGrgreeeeting();
	
signals:
	void isLoadingChanged();
	void fullGreetingChanged();
	void onlynameGreetingChanged();

private:	
	bool m_isLoading;
	void setIsLoading(const bool isLoading);
	void setOnlynameGreeting(const QString onlyNameGreeting);
	void setFullGreeting(const QString fullGreeting);
	QString m_onlynameGreeting="";
	QString m_fullGreeting="";
};

Q_DECLARE_METATYPE(GreetingManagement*)
// =============================================================================

#endif // GREETINGMANAGEMENT_H_
