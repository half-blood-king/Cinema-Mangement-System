#include"CStaff.h"
#include"Customer.h"
#pragma once
class Student :public CStuff,Customer{
	string school[10];

public:
	void set_school(string, int);
	string get_school(int);
	Student();

};