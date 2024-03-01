#ifndef CONTACTENREACH_HPP
#define CONTACTENREACH_HPP

#include <QObject>

class ContactEnreach : public QObject {
	friend class ContactsListModel;
	friend class ContactsListProxyModel;
	friend class SipAddressesProxyModel;
	friend class SipAddressesSorter;
	Q_OBJECT

		Q_PROPERTY(QString contactType READ getContactType WRITE setContactType NOTIFY contactTypeChanged)
		Q_PROPERTY(QString firstName READ getFirstName WRITE setFirstName NOTIFY firstNameChanged)
		Q_PROPERTY(QString lastName READ getLastName WRITE setLastName NOTIFY lastNameChanged)
		Q_PROPERTY(QString tel READ getTel WRITE setTel NOTIFY  telChanged)
		Q_PROPERTY(QString ext READ getExt WRITE setExt NOTIFY extChanged)
		Q_PROPERTY(QString fullName READ getFullName WRITE setFullName NOTIFY fullNameChanged)
		Q_PROPERTY(QVariantList sipAddresses READ getSipAddresses WRITE setSipAddresses NOTIFY sipAddressesChanged)

public:
	// Constructor
	ContactEnreach(QObject* parent = nullptr);
	ContactEnreach(const ContactEnreach&) = delete;
	ContactEnreach& operator=(const ContactEnreach&) = delete;
	// Getter methods for each property
	QString getContactType() const;
	QString getFirstName() const;
	QString getLastName() const;
	QString getFullName() const;
	QString getTel() const;
	QString getExt() const;
	QVariantList getSipAddresses() const;
	void setContactType(const QString& contactType);
	void setFirstName(const QString& fistName);
	void setLastName(const QString& lastName);
	void setFullName(const QString& newFullName);
	void setTel(const QString& tel);
	void setExt(const QString& ext);
	void setSipAddresses(const QVariantList& addresses);
	void addSipAddress(const QString& addresses);
signals:
	// Signals for property changes
	void contactTypeChanged();
	void firstNameChanged();
	void lastNameChanged();
	void telChanged();
	void extChanged();
	void sipAddressesChanged();
	void fullNameChanged();
private:
	// Private member variables for each property
	QString contactType;
	QString firstName;
	QString lastName;
	QString tel;
	QString ext;
	QVariantList sipAddresses;
	QString fullName;
};

#endif // CONTACTENREACH_HPP
