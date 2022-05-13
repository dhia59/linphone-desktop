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

#ifndef TELEPHONE_NUMBERS_MODEL_H_
#define TELEPHONE_NUMBERS_MODEL_H_

#include <QAbstractListModel>
#include <QLocale>

// =============================================================================

class TelephoneNumbersModel : public QAbstractListModel {
	Q_OBJECT
	
	Q_PROPERTY(int defaultIndex READ getDefaultIndex CONSTANT)
	
public:
	TelephoneNumbersModel (QObject *parent = Q_NULLPTR);
	
	int rowCount (const QModelIndex &index = QModelIndex()) const override;
	
	QHash<int, QByteArray> roleNames () const override;
	QVariant data (const QModelIndex &index, int role = Qt::DisplayRole) const override;
	
private:
	int getDefaultIndex () const;
	
	static const QList<QPair<QLocale::Country, QString>> mCountryCodes;
};

#endif // ifndef TELEPHONE_NUMBERS_MODEL_H_
