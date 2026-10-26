#pragma once
#include <iostream>
#include < string >
#include "Contact.h"
using namespace std;
class Colleague :
    public Contact
{
    string Organization;
    string address;
    string phoneNum;
    string fax;
    string ContactPer;

public:
    Colleague();
    Colleague(string Organization, string address, string phoneNum, string fax, string ContactPer);

    string getOrganization() const;
    string getAddress() const;
    string getPhoneNum() const;
    string getFax() const;
    string getContactPerson() const;

    void setOrganization();
    void setAddress();
    void setPhoneNum();
    void setFax();
    void setContactPerson();

    void show()const override;
    void edit() override;

};

