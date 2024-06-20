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

#ifndef FORWARDINGMANAGEMENT_H_
#define FORWARDINGMANAGEMENT_H_

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

class ForwardingManagement :public QObject
{	
	Q_OBJECT
public:
	explicit ForwardingManagement(QObject *parent = nullptr);
	Q_INVOKABLE bool addForwardingRule(const QVariantMap &map);
	Q_INVOKABLE bool editForwardingRule(const QVariantMap &map);
	Q_INVOKABLE bool deleteForwardingRule(const QString &forwardingId);
	Q_INVOKABLE bool activateDesactivateForwardingRule( ForwardingModel *forwardingmodel);

private:
	QString getOriginText(int origin);
	QString getForwardTypeText(int forwardType);
	QString getDestination(int destination);
	QString JoinQvariantList(QVariantList &list,QString joinString);
	int getNoAnswerDelay(int noAnswerdelay);
	QString getTimeFilterText(QVariantList days, QString startDate, QString endDate);
};

Q_DECLARE_METATYPE(ForwardingManagement*)
// =============================================================================

#endif // FORWARDINGMANAGEMENT_H_
