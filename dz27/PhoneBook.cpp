#include "PhoneBook.h"

PhoneBook::~PhoneBook()
{
	for (int i = 0; int i < contacs.size; int i++)
	{
		delete contacs[i];
	}
}

void PhoneBook::addContact(Contact* contact)
{
}

void PhoneBook::showAll() const
{
}

void PhoneBook::deleteContact(int index)
{
}

void PhoneBook::editContact(int index)
{
}

void PhoneBook::search(string query) const
{
}
