#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Contact.h"
#include "Person.h"
#include "Friend.h"
#include "Colleague.h"
using namespace std;
class PhoneBook
{
	vector<Contact*> contacs;

public:
	~PhoneBook();

    void addContact(Contact* contact);
    void showAll() const;
    void deleteContact(int index);
    void editContact(int index);
    void search(string query) const;
};

