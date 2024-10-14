

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

#ifndef CONTACTS_ENREACH_LIST_PROXY_MODEL_H_
#define CONTACTS_ENREACH_LIST_PROXY_MODEL_H_

#include <QSortFilterProxyModel>
#include "ContactEnreach.hpp"
#include "ContactEnreachModel.hpp"
// =============================================================================

class ContactsEnreachListProxyModel : public QSortFilterProxyModel {
	
  Q_OBJECT;

  Q_PROPERTY(bool useConnectedFilter READ isConnectedFilterUsed WRITE setConnectedFilter );
  Q_PROPERTY(bool useLocalFilter READ isLocalFilterUsed WRITE setLocalFilter);
  Q_PROPERTY(bool usePartageFilter READ isPartageFilterUsed WRITE setPartgeFilter);
  Q_PROPERTY(bool usePersonnelFilter READ isPersonnelFilterUsed WRITE setPersonnelFilter);
  Q_PROPERTY(ContactsEnreachListModel * mcontacts MEMBER  contacts NOTIFY loadedContacts)

public:
  ContactsEnreachListProxyModel (QObject *parent = Q_NULLPTR);
  ContactsEnreachListModel *contacts;
  Q_INVOKABLE void setFilter (const QString &pattern);
  Q_INVOKABLE void getloadedContacts();
  

signals:
	//void loadedContacts(const QString lastsipcontact, const QString contactType);
	void loadedContacts(ContactEnreach* contact);
public slots:
	void loadContacts();
protected:
  bool filterAcceptsRow (int sourceRow, const QModelIndex &sourceParent) const override;
  bool lessThan (const QModelIndex &left, const QModelIndex &right) const override;
  void sort(int column, Qt::SortOrder order = Qt::AscendingOrder);

private:
  float computeStringWeight (const QString &string, float percentage) const;
  float computeContactWeight (const ContactEnreachModel *contact) const;
 


  bool isConnectedFilterUsed () const {
    return mUseConnectedFilter;
  }
  bool isLocalFilterUsed() const {
	  return mUseLocalFilter;
  }
  bool isPartageFilterUsed() const {
	  return mUsePartageFilter;
  }
  bool isPersonnelFilterUsed() const{ 
	return mUsePersonnelFilter;
  }
  void setConnectedFilter (bool useConnectedFilter);
  void setLocalFilter(bool useLocalFilter);
  void setPartgeFilter(bool usePartageFilter);
  void getList();
  void listLinphoneContacts(ContactsEnreachListModel *contacts, QVariantList *listSips);
  void listApiContacts( ContactsEnreachListModel *contacts);
  void setPersonnelFilter(bool usePersonnelFiler);
  QString mFilter;
  bool mUseConnectedFilter = false;
  bool mUseLocalFilter = false;
  bool mUsePartageFilter = false;
  bool mUsePersonnelFilter = false;
  // It's just a cache to save values computed by `filterAcceptsRow`
  // and reused by `lessThan`.
  mutable QHash<ContactEnreachModel*, unsigned int> mWeights;

  static const QRegExp SearchSeparators;
};

#endif // CONTACTS_ENREACH_LIST_PROXY_MODEL_H_
