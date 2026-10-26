#pragma once
#include "Person.h"
class Friend :
    public Person
{
    string birth;
public:
    Friend();
    Friend(string surname,string address,string phoneNum,string birth);

    string getBirth()const;
    void setBirth();

    void show()const;
    void edit();
};

