#include"Special.h"
#pragma once
class Customer :public Special{
protected:
	int seat[10];
	string cated[10];
	string status[10];
public:
	Customer();
	void set_seat(int, int);
	void set_cated(string, int);
	void set_status(string, int);
	int get_seat(int)const;
	string get_cated(int)const;
	string get_status(int)const;
};