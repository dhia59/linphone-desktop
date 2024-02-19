#include "ContactEnreachModel.hpp"
#include <QDebug>
#include "app/App.hpp"
using namespace std;
ContactEnreachModel::ContactEnreachModel(ContactEnreach *contactEnreach, QObject * parent ) : QObject(parent) {
	Q_CHECK_PTR(contactEnreach);
	mContactEnreach = contactEnreach;
	///mLinphoneFriend->setData("contact-model", *this);
	setContactEnreachModelInternal(contactEnreach);
}


ContactEnreachModel::~ContactEnreachModel()
{
	mContactEnreach = nullptr;
	mLinphoneFriend = nullptr;
}

void ContactEnreachModel::refreshPresence() {
	Presence::PresenceStatus status = static_cast<Presence::PresenceStatus>(
		mLinphoneFriend->getConsolidatedPresence()
		);

	emit presenceStatusChanged(status);
	emit presenceLevelChanged(Presence::getPresenceLevel(status));
}

ContactEnreach * ContactEnreachModel::getContactEnreach() const
{
	return mContactEnreach;
}

void ContactEnreachModel::setContactEnreach(ContactEnreach * contactEnreach)
{
	ContactEnreach *oldcontact = mContactEnreach;

	qInfo() << QStringLiteral("Remove contact:") << this << oldcontact;
	/*oldcontact->mIsReadOnly = false;
	oldcontact->mAvatarIsReadOnly = oldcontact->getAvatar() == oldcontactEnreach->getAvatar();
	oldcontactEnreach->deleteLater();*/

	qInfo() << QStringLiteral("Set vcard on contact:") << this << oldcontact;
	setContactEnreachModelInternal(contactEnreach);
	mLinphoneFriend->done();
	updateSipAddresses(oldcontact);
}

Presence::PresenceLevel ContactEnreachModel::getPresenceLevel() const
{
	return Presence::PresenceLevel();
}

QDateTime ContactEnreachModel::getPresenceTimestamp() const
{
	return QDateTime();
}


//
//void ContactEnreachModel::presenceLevelChanged(Presence::PresenceLevel level)
//{
//}
//
//void ContactEnreachModel::sipAddressAdded(const QString & sipAddress)
//{
//}
//
//void ContactEnreachModel::sipAddressRemoved(const QString & sipAddress)
//{
//}

void ContactEnreachModel::setContactEnreachModelInternal(ContactEnreach * contactEnreach)
{
	Q_CHECK_PTR(contactEnreach);
	//Q_ASSERT(contactEnreach != mContactEnreach);

	mContactEnreach = contactEnreach;
	//mContactEnreach->mAvatarIsReadOnly = false;
	//mContactEnreach->mIsReadOnly = true;

	App::getInstance()->getEngine()->setObjectOwnership(mContactEnreach, QQmlEngine::CppOwnership);
	mContactEnreach->setParent(this);

	/*if (mLinphoneFriend->getVcard() != contactEnreach->mVcard)
		mLinphoneFriend->setVcard(contactEnreach->mVcard);*/
}

void ContactEnreachModel::updateSipAddresses(ContactEnreach * oldContactEnreach)
{
}

Presence::PresenceStatus ContactEnreachModel::getPresenceStatus() const
{
	return Presence::PresenceStatus();
}
