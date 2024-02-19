#include "ContactEnreach.hpp"
#include "utils/Utils.hpp"
#include "components/core/CoreManager.hpp"
using namespace std;
ContactEnreach::ContactEnreach(QObject* parent) : QObject(parent) {
	
}


QString ContactEnreach::getContactType() const {
	return contactType;
}

QString ContactEnreach::getFirstName() const {
	return firstName;
}

QString ContactEnreach::getLastName() const {
	return lastName;
}

QString ContactEnreach::getFullName() const
{
	return fullName;
}

QString ContactEnreach::getTel() const {
	return tel;
}

QString ContactEnreach::getExt() const {
	return ext;
}

QVariantList ContactEnreach::getSipAddresses() const {
	return sipAddresses;
}

void ContactEnreach::setContactType(QString& newContactType)
{
	if (contactType != newContactType) {
		contactType = newContactType;
		emit contactTypeChanged();
	}
}

void ContactEnreach::setFirstName(QString& newfirstName)
{
	firstName = newfirstName;
}

void ContactEnreach::setLastName(QString& newlastName)
{
	lastName = newlastName;
}

void ContactEnreach::setFullName(QString & newFullName)
{
	fullName = newFullName;
}

void ContactEnreach::setTel(QString& newtel)
{
	tel = newtel;
}

void ContactEnreach::setExt(QString& newExt)
{
	ext = newExt;
}

void ContactEnreach::setSipAddresses(QVariantList& newAddresses)
{
	sipAddresses = newAddresses;
}

void ContactEnreach::addSipAddress(QString& addr)
{
	shared_ptr<linphone::Core> core = CoreManager::getInstance()->getCore();
	shared_ptr<linphone::Address> linphoneAddress = core->createAddress(addr.toStdString());
    sipAddresses= getSipAddresses()<< Utils::coreStringToAppString(linphoneAddress->asStringUriOnly());
}

