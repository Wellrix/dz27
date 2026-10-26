#include "PhoneBook.h"

PhoneBook::~PhoneBook()
{
	for (int i = 0; i < contacs.size(); i++)
	{
		delete contacs[i];
	}

}

void PhoneBook::addContact(Contact* contact)
{
	contacs.push_back(contact);
	cout << "contact add!" << endl;

}

void PhoneBook::showAll() const
{
	if (contacs.empty()) {
		cout << "empty" << endl;
		return;
	}
	for (int i = 0; i < contacs.size(); i++) {
		cout << "Index " << i << endl;
		contacs[i]->show();
	}
}

void PhoneBook::deleteContact(int index)
{
	if (index >= 0 && index < contacs.size()) {
		delete contacs[index]; 
		contacs.erase(contacs.begin() + index); 
		cout << "Contact deleted" << endl;
	}
	else {
		cout << "Error" << endl;
	}
}

void PhoneBook::editContact(int index)
{
	if (index >= 0 && index < contacs.size()) {
		contacs[index]->edit(); 
		cout << "Contact refresh" << endl;
	}
	else {
		cout << "Error" << endl;
	}
}

void PhoneBook::search(string query) const
{
	bool found = false;
	for (int i = 0; i < contacs.size(); i++) {
		Person* p = dynamic_cast<Person*>(contacs[i]);
		if (p != nullptr && p->getSurname() == query) {
			contacs[i]->show();
			found = true;
			continue;
		}
		Colleague* c = dynamic_cast<Colleague*>(contacs[i]);
		if (c != nullptr && c->getOrganization() == query) {
			contacs[i]->show();
			found = true;
		}
	}

	if (!found) {
		cout << "Error" << query << endl;
	}
}
