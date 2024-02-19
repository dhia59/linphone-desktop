#include "ContactEnreachModel.hpp"
#include <QDebug>
ContactEnreachModel::ContactEnreachModel(QObject *parent)
	: QAbstractItemModel(parent) {}

QModelIndex ContactEnreachModel::parent(const QModelIndex &child) const {
	Q_UNUSED(child);
	return QModelIndex();
}

int ContactEnreachModel::rowCount(const QModelIndex &parent) const {
	if (parent.isValid()) {
		return 0;
	}
	return ContactEnreachs.size();
}

int ContactEnreachModel::columnCount(const QModelIndex &parent) const {
	Q_UNUSED(parent);
	return 5;
}
QModelIndex ContactEnreachModel::index(int row, int column, const QModelIndex &parent) const {
	if (parent.isValid() || row < 0 || row >= ContactEnreachs.size() || column < 0 || column >= 5) {
		return QModelIndex();
	}

	return createIndex(row, column, const_cast<ContactEnreach*>(ContactEnreachs.at(row)));

}


QVariant ContactEnreachModel::data(const QModelIndex &index, int role) const {
	if (!index.isValid()) {
		return QVariant();
	}
	const ContactEnreach &contactData = *reinterpret_cast<ContactEnreach*>(index.internalPointer());

	//if (role == Qt::DisplayRole || role == Qt::EditRole || role) {
		switch (index.column()) {
		case 0:
			return contactData.getContactType();
		case 1:
			return contactData.getFirstName();
		case 2:
			return contactData.getLastName();
		case 3:
			return contactData.getTel();
		case 4:
			return contactData.getExt();
		}
	//}

	return QVariant();
}
void ContactEnreachModel::setContactEnreachs(const QList<ContactEnreach*> &ContactEnreachs) {
	beginResetModel();
	this->ContactEnreachs = ContactEnreachs;
	endResetModel();
	emit modelReset();
}

QList<ContactEnreach*> ContactEnreachModel::getListContacts()
{
	return this->ContactEnreachs;
}

