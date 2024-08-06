#include "ForwardingModel.hpp"
#include "ForwardingModel.hpp"
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
#include "ForwardingModel.hpp"
#include "utils/Constants.hpp"
#include "utils/MediastreamerUtils.hpp"


// =============================================================================

using namespace std;

ForwardingModel::ForwardingModel(QObject *parent) : QObject(parent)
{	
	
}

ForwardingModel::~ForwardingModel()
{
}

QString ForwardingModel::getLabel()
{
	QString test = m_label;
	return m_label;
}

QString ForwardingModel::getforwardType()
{
	return m_ForwardType;
}

int ForwardingModel::getNoAnswerForwardingDelay()
{
	return m_noAnswerForwardingDelay;
}

QString ForwardingModel::getDestination()
{
	return m_destination;
}

QString ForwardingModel::getforwardingID()
{
	return m_forwardingId;
}

QString ForwardingModel::getFilter()
{
	return m_filter;
}

bool ForwardingModel::getActivated()
{
	return m_activated;
}

QStringList ForwardingModel::getFiltersOnTargetNumber()
{
	QStringList test = m_filtersOnTargetNumber;
	return m_filtersOnTargetNumber;
}

QString ForwardingModel::getSpecificCaller()
{
	return m_specificCaller;
}

QString ForwardingModel::getTimeFilter()
{
	auto test = m_timeFilter;
	return m_timeFilter;
}

void ForwardingModel::setLabel(const QString label)
{
	if (m_label != label) {
		m_label = label;
		emit labelChanged();
	}
}

void ForwardingModel::setforwardType(const QString forwardType)
{
	if (m_ForwardType != forwardType) {
		m_ForwardType = forwardType;
		emit forwardTypeChanged();
	}
}

void ForwardingModel::setNoAnswerForwardingDelay(const int noAnswerForwardingDelay)
{
	if ( m_noAnswerForwardingDelay != noAnswerForwardingDelay) {
		m_noAnswerForwardingDelay = noAnswerForwardingDelay;
		emit noAnswerForwardingDelayChanged();
	}
}

void ForwardingModel::setDestination(const QString destination)
{
	if (m_destination != destination) {
		m_destination = destination;
		emit destinationChanged();
	}
}

void ForwardingModel::setforwardingID(const QString id)
{
	if (m_forwardingId != id) {
		m_forwardingId = id;
		emit forwardingIDChanged();
	}
}

void ForwardingModel::setfilter(const QString filter)
{
	if (m_filter != filter) {
		m_filter = filter;
		emit filterChanged();
	}
}

void ForwardingModel::setActivated(const bool activated)
{
	if (m_activated != activated) {
		m_activated = activated;
		emit activeChanged();
	}
}

void ForwardingModel::setFiltersOnTargetNumber(const QStringList targetNumbers)
{
	if (m_filtersOnTargetNumber != targetNumbers) {
		m_filtersOnTargetNumber = targetNumbers;
		emit filtersOnTargetNumberChanged();
	}
}

void ForwardingModel::setSpecificCaller(const QString specificCaller)
{
	if (m_specificCaller != specificCaller) {
		m_specificCaller = specificCaller;
		emit specificCallerChanged();
	}
}

void ForwardingModel::setTimeFilter(const QString timeFilter)
{
	if (m_timeFilter != timeFilter) {
		m_timeFilter = timeFilter;
		emit timeFilterChanged();
	}
}



