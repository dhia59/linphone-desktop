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

#ifndef ForwardingListProxyModel_H_
#define ForwardingListProxyModel_H_

#include <linphone++/linphone.hh>
#include <utils/MediastreamerUtils.hpp>
#include <QObject>
#include <QVariantMap>
#include <QFont>
#include <QList>
#include "ForwardingListModel.hpp"
#include "components/core/CoreHandlers.hpp"
#include "utils/LinphoneEnums.hpp"
#include "utils/Utils.hpp"
#include "ForwardingModel.hpp"
#ifdef ENABLE_QT_KEYCHAIN
#include "components/vfs/VfsUtils.hpp"
#endif

#include <QStringList>
#include "ForwardingManagement.hpp"
#include <QSortFilterProxyModel>
class ForwardingListProxyModel : public QSortFilterProxyModel
{	
	friend class ForwardingModel;
	friend class ForwardingManagement;
	Q_OBJECT
		Q_PROPERTY(bool isLoading READ getIsLoading WRITE setIsLoading NOTIFY isLoadingChanged)


public:
	explicit ForwardingListProxyModel(QObject *parent = nullptr);
	void loadListForwardings();
	bool getIsLoading();
	void setIsLoading(const bool isLoading);
signals:
	void isLoadingChanged();
public slots:
	void handleListFowardingUpdate();
protected:
	bool filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const override;
	bool lessThan(const QModelIndex &left, const QModelIndex &right) const override;



private:
	bool m_isLoading;
};


// =============================================================================

#endif // ForwardingListProxyModel_H_