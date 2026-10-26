#include "Colleague.h"

Colleague::Colleague()
{
    Organization = "undefind";
    address = "undefined";
    phoneNum = "undefined";
    fax = "undefined";
    ContactPer = "undefined";



}

Colleague::Colleague(string Organization, string address, string phoneNum, string fax, string ContactPer)
{
    this->Organization = Organization;
    this->address = address;
    this->phoneNum = phoneNum;
    this->fax = fax;
    this->ContactPer = ContactPer;
}

string Colleague::getOrganization() const
{
    return Organization;
}

string Colleague::getAddress() const
{
    return address;
}

string Colleague::getPhoneNum() const
{
    return phoneNum;
}

string Colleague::getFax() const
{
    return fax;
}

string Colleague::getContactPerson() const
{
    return ContactPer;
}

void Colleague::setOrganization()
{
    this->Organization = Organization;
}

void Colleague::setAddress()
{
    this->address = address;
}

void Colleague::setPhoneNum()
{
    this->phoneNum = phoneNum;
}

void Colleague::setFax()
{
    this->fax = fax;
}

void Colleague::setContactPerson()
{
    this->ContactPer = ContactPer;
}

void Colleague::show() const
{
    cout << "Organization: " << Organization << endl
        << "Address: " << address << endl
        << "Phone number: " << phoneNum << endl
        << "Fax: " << fax << endl
        << "Contact person" << ContactPer << endl;
}

void Colleague::edit()
{
    cout << " ================================" << endl;
    cout << "Enter new organization: " << Organization << endl;
    cin >> Organization;
    cout << "----------------------------------" << endl;
    cout << "Enter new address: " << address << endl;
    cin >> address;
    cout << "----------------------------------" << endl;
    cout << "Enter new phone number: " << phoneNum << endl;
    cin >> phoneNum;
    cout << "----------------------------------" << endl;
    cout << "Enter new fax: " << fax << endl;
    cin >> fax;
    cout << "----------------------------------" << endl;
    cout << "Enter new contact person: " << ContactPer << endl;
    cin >> ContactPer;
    cout << " ================================" << endl;

}
