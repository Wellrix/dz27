#include "Person.h"
using namespace std;
#include <iostream>

Person::Person()
{
    surname = "undefined";
    address = "undefined";
    phoneNum = "undefined";
}

Person::Person(string surname, string address, string phoneNum)
{
    this->surname = surname;
    this->address = address;
    this->phoneNum = phoneNum;
}

string Person::getSurname() const
{
    return surname;
}

void Person::setSurname(string surname)
{
    this->surname = surname;
}

string Person::getAddress() const
{
    return  address;
}

void Person::setAddress(string address)
{
    this->address = address;
}

string Person::getPhoneNum() const
{
    return phoneNum;
}

void Person::setPhoneNum(string phoneNum)
{
    this->phoneNum = phoneNum;
}

void Person::show() const
{
    cout << "Surname: " << surname << endl
        << "Address: " << address << endl
        << "Phone number: " << phoneNum << endl;
}

void Person::edit()
{
    cout << "===================================" << endl;
    cout << "Enter new surname: ";
    cin >> surname;
    cout << "-----------------------------------" << endl;
    cout << "Enter new address: ";
    cin >> address;
    cout << "-----------------------------------" << endl;
    cout << "Enter new phone number: ";
    cin >> phoneNum;
    cout << "===================================" << endl;


}
