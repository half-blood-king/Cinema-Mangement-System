#include"Admin.h"
#pragma once 
class CStuff : public  Admin,Customer
{
	string deparment[10];
	string post[10];
public:
	CStuff();
	~CStuff();
	void set_departent(string, int);
	string get_deparment(int);
	void set_post(string, int);
	string get_post(int);
};