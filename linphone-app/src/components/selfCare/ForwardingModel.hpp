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

#ifndef FORWARDINGMODEL_H_
#define FORWARDINGMODEL_H_

#include <linphone++/linphone.hh>
#include <utils/MediastreamerUtils.hpp>
#include <QObject>
#include <QVariantMap>
#include <QFont>

#include "components/core/CoreHandlers.hpp"
#include "utils/LinphoneEnums.hpp"
#include "utils/Utils.hpp"

#ifdef ENABLE_QT_KEYCHAIN
#include "components/vfs/VfsUtils.hpp"
#endif
#include <QObject>
#include <QStringList>


class ForwardingModel :public QObject 
{
		Q_OBJECT
		Q_PROPERTY(QString label READ getLabel WRITE setLabel NOTIFY labelChanged)
		Q_PROPERTY(QString forwardType READ getforwardType WRITE setforwardType NOTIFY forwardTypeChanged)
		Q_PROPERTY(int noAnswerForwardingDelay READ getNoAnswerForwardingDelay WRITE setNoAnswerForwardingDelay NOTIFY noAnswerForwardingDelayChanged)
		Q_PROPERTY(QString destination READ getDestination WRITE setDestination NOTIFY destinationChanged)
		Q_PROPERTY(QString forwardingID READ getforwardingID WRITE setforwardingID NOTIFY forwardingIDChanged)
		Q_PROPERTY(QString filter READ getFilter WRITE setfilter NOTIFY filterChanged)
		Q_PROPERTY(bool activated READ getActivated WRITE setActivated NOTIFY activeChanged)
		Q_PROPERTY(QStringList filtersOnTargetNumber READ getFiltersOnTargetNumber WRITE setFiltersOnTargetNumber NOTIFY filtersOnTargetNumberChanged)
		Q_PROPERTY(QString specificCaller READ getSpecificCaller WRITE setSpecificCaller NOTIFY specificCallerChanged)
		Q_PROPERTY(QString timeFilter READ getTimeFilter WRITE setTimeFilter NOTIFY timeFilterChanged)

public:
	enum CustomRoles {
		DisplayRole = Qt::UserRole + 1, // Custom role for display text
		LabelRole                        // Custom role for label text
	};
	ForwardingModel(QObject *parent = nullptr);
	ForwardingModel(const ForwardingModel&) = delete;
	ForwardingModel& operator=(const ForwardingModel&) = delete;
	virtual ~ForwardingModel();

	void loadPstnLists();
	QString getLabel();
	QString getforwardType();
	int getNoAnswerForwardingDelay();
	QString getDestination();
	QString getforwardingID();
	QString getFilter();
	bool getActivated();
	QStringList getFiltersOnTargetNumber();
	QString getSpecificCaller();
	QString getTimeFilter();

	void setLabel(const QString label);
	void setforwardType(const QString forwardType);
	void setNoAnswerForwardingDelay(const int noAnswerForwardingDelay);
	void setDestination(const QString destination);
	void setforwardingID(const QString id);
	void setfilter(const QString filter);
	void setActivated(const bool activated);
	void setFiltersOnTargetNumber(const QStringList targetNumbers);
	void setSpecificCaller(const QString specificCaller);
	void setTimeFilter(const QString timeFilter);
signals:
	void labelChanged();
	void forwardTypeChanged();
	void noAnswerForwardingDelayChanged();
	void destinationChanged();
	void forwardingIDChanged();
	void filterChanged();
	void activeChanged();
	void filtersOnTargetNumberChanged();
	void specificCallerChanged();
	void timeFilterChanged();
	
private:
	QString m_label;
	QString m_ForwardType;
	int m_noAnswerForwardingDelay;
	QString m_destination;
	QString m_forwardingId;
	QString m_filter;
	bool m_activated;
	QStringList m_filtersOnTargetNumber;
	QString m_specificCaller;
	QString m_timeFilter;
	
};

Q_DECLARE_METATYPE(ForwardingModel *)
// =============================================================================

#endif // FORWARDINGMODEL_H_
