#include"Hall.h"
class Time :public Hall{
	string time[3];
	int h[10];
	int m[10];
	int s[10];
public:
	Time();
	void set_time(string, int);
	void set_hour(int, int);
	void set_minutus(int, int);
	void set_second(int, int);
	string get_time(int)const;
	int get_hour(int)const;
	int get_minutus(int)const;
	int get_second(int)const;
};