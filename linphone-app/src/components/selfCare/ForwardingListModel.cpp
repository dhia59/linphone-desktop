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

#include <QDir>
#include <QtDebug>
#include <QPluginLoader>
#include <QJsonDocument>

#include <cstdlib>
#include <cmath>

#include "config.h"

#include "app/App.hpp"
#include "app/logger/Logger.hpp"
#include "app/paths/Paths.hpp"

#include "components/assistant/AssistantModel.hpp"
#include "components/core/CoreManager.hpp"
#include "components/tunnel/TunnelModel.hpp"
#include "include/LinphoneApp/PluginNetworkHelper.hpp"
#include "utils/Utils.hpp"
#include "ForwardingListModel.hpp"
#include "utils/Constants.hpp"
#include "utils/MediastreamerUtils.hpp"
#include "app/App.hpp"
#include <QQmlApplicationEngine>
// =============================================================================

using namespace std;
ForwardingListModel::ForwardingListModel(QObject *parent)
	: ProxyListModel(parent)
{
}

void ForwardingListModel::addForwardingRule(ForwardingModel* forwardingModel)
{
	if (forwardingModel != nullptr) {
		QSharedPointer<ForwardingModel> forwarding(forwardingModel);
		App::getInstance()->getEngine()->setObjectOwnership(forwarding.data(), QQmlEngine::CppOwnership);
		add<ForwardingModel>(forwarding);
	}
	
}
