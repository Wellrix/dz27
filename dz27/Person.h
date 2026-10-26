#pragma once
#include <iostream>
#include <string>
#include "Contact.h"

using namespace std;
class Person :
    public Contact
{
    string surname;
    string address;
    string phoneNum;
public:
    Person();
    Person(string surname,string address,string phoneNum);

    string getSurname() const;
    void setSurname(string surname);

    string getAddress()const;
    void setAddress(string address);

    string getPhoneNum() const;
    void setPhoneNum(string phoneNum);

    void show() const override;
    void edit() override;




};

