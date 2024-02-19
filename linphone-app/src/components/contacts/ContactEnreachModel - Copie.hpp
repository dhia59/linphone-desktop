#ifndef CONTACTENREACHMODEL_H
#define CONTACTENREACHMODEL_H

#include <QAbstractItemModel>
#include <QModelIndex>
#include <QVariant>
#include "ContactEnreach.hpp"
#include "utils/LinphoneEnums.hpp"
class ContactEnreachModel : public QAbstractItemModel {
	Q_OBJECT
		// Grant access to `mLinphoneFriend`.
	friend class ContactsListModel;
	friend class ContactsListProxyModel;
	friend class SipAddressesProxyModel;
	friend class SipAddressesSorter;

public:
	explicit ContactEnreachModel(QObject *parent = nullptr);
	QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const override;
	QModelIndex parent(const QModelIndex &child) const override;
	int rowCount(const QModelIndex &parent = QModelIndex()) const override;
	int columnCount(const QModelIndex &parent = QModelIndex()) const override;
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
	void setContactEnreachs(const QList<ContactEnreach*> &ContactEnreachs);
	QList<ContactEnreach*> getListContacts();
signals:
	void modelReset();

private:
	QList<ContactEnreach*> ContactEnreachs;
	std::shared_ptr<linphone::Friend> mLinphoneFriend;
};

#endif // CONTACTENREACHMODEL_H
