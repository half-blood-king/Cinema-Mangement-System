#pragma once
#include<string>
using namespace std;
class Hall{
	bool seat[5][10];
	int screen[5];
	int hall[3];
	bool seats[7][10];
public:
	Hall();
	void set_hall(int);
	void set_screen(int);
	void set_seats(int,int);
	void set_seath(int, int);
	int get_screen(int)const;
	int get_hall(int)const;
	int get_seats(int,int)const;
	int get_seath(int,int)const;
};