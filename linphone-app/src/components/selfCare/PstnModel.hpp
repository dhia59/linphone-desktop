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

#ifndef PSTNMODEL_H_
#define PSTNMODEL_H_

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


class PstnModel : public QAbstractListModel
{
	Q_OBJECT
		Q_PROPERTY(bool isLoading READ getIsLoading WRITE setIsLoading NOTIFY isLoadingChanged)
		
public:
	enum CustomRoles {
		DisplayRole = Qt::UserRole + 1, // Custom role for display text
		LabelRole                        // Custom role for label text
	};
	explicit PstnModel(QObject *parent = nullptr);

	void loadPstnLists();
	// Basic functionality:
	int rowCount(const QModelIndex &parent = QModelIndex()) const override;
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
	QHash<int, QByteArray> roleNames() const override;
	// getters & setters
	bool getIsLoading();
	void setIsLoading(const bool isLoading);
	// incavokable
	Q_INVOKABLE  void updateCustomNumber(const int &currentIndex);
signals:
	void isLoadingChanged();
private:
	QStringList m_data;
	QStringList m_labelTexts;
	bool m_isLoading;
};


// =============================================================================

#endif // PSTNMODEL_H_
