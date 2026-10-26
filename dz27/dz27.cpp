#include <iostream>
#include "PhoneBook.h"
#include "Person.h"
#include "Friend.h"
#include "Colleague.h"

using namespace std;

int main() {
    PhoneBook book;
    int choice;

    do {
        cout << "\n======= PHONEBOOK =======\n";
        cout << "1. Show all contacts\n";
        cout << "2. Add Person\n";
        cout << "3. Add Friend\n";
        cout << "4. Add Colleague\n";
        cout << "5. Edit contact\n";
        cout << "6. Delete contact\n";
        cout << "7. Search (by surname or organization)\n";
        cout << "0. Exit\n";
        cout << "Choose an action: ";
        cin >> choice;

        switch (choice) {
        case 1:
            book.showAll();
            break;
        case 2: {
            Person* p = new Person();
            p->edit(); 
            book.addContact(p);
            break;
        }
        case 3: {
            Friend* f = new Friend();
            f->edit();
            book.addContact(f);
            break;
        }
        case 4: {
            Colleague* c = new Colleague();
            c->edit();
            book.addContact(c);
            break;
        }
        case 5: {
            int index;
            cout << "Enter the index of the contact to edit: ";
            cin >> index;
            book.editContact(index);
            break;
        }
        case 6: {
            int index;
            cout << "Enter the index of the contact to delete: ";
            cin >> index;
            book.deleteContact(index);
            break;
        }
        case 7: {
            string query;
            cout << "Enter surname: ";
            cin >> query;
            book.search(query);
            break;
        }
        case 0:
            cout << "Exiting\n";
            break;
        default:
            cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 0);

    return 0;
}