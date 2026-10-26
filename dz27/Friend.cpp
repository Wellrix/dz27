#include "Friend.h"

Friend::Friend()
{
    birth = "undefined";
}

Friend::Friend(string surname, string address, string phoneNum, string birth)
{
    this->birth = birth;
}

string Friend::getBirth() const
{
    return birth;
}

void Friend::setBirth()
{
    this->birth = birth;
}

void Friend::show() const
{
    Person::show();
    cout << "Birth: " << birth << endl;
}

void Friend::edit()
{
}
