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

#ifndef CallerManagement_H_
#define CallerManagement_H_

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


class CallerManagement :public QObject
{
	Q_OBJECT
		Q_PROPERTY(bool isHideCustomNumber READ getIsHideCustomNumber WRITE setIsHideCustomNumber NOTIFY isHideCustomNumberChanged)
		Q_PROPERTY(bool dnd READ getDnd WRITE setDnd NOTIFY dndChanged)
public:
	enum CustomRoles {
		DisplayRole = Qt::UserRole + 1, // Custom role for display text
		LabelRole                        // Custom role for label text
	};
	explicit CallerManagement(QObject *parent = nullptr);

	void loadPstnLists();
	// IsHideCustomNumber
	bool getIsHideCustomNumber();
	bool getDnd();
	void setIsHideCustomNumber(const bool &isHideCustomNumber);
	void setData(const QStringList &data);
	void setDnd(const bool dnd);

	Q_INVOKABLE  void hideCallerIdByUsername(const bool &isHideCustomNumber);
	Q_INVOKABLE  void setDndByUsername(const bool &dnd);
signals:
	void isHideCustomNumberChanged();
	void dndChanged();
private:
	bool m_isHideCustomNumber;
	bool m_dnd;
};


// =============================================================================

#endif // CallerManagement_H_
