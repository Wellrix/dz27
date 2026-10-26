#pragma once
using namespace std;
class Contact
{
public:
	 
	virtual ~Contact() = default;
	virtual void show() const = 0 ;
	virtual void edit() = 0;

};

