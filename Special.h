#include"Admin.h"
#include<iostream>
#include <ctime>
#pragma once
class Special :public Admin{
	int day[10], month[10], year[10];
public:
	Special();

	void set_day(int,int);
	void set_month(int,int);
	void set_year(int,int);
	int get_day(int)const;
	int get_month(int)const;
	int get_year(int)const;

	void control();
	void switcher();
};