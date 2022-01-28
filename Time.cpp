#include"Time.h"

Time::Time()
{
	set_time("morning", 0);
	set_time("evening", 1);
	set_time("Night", 2);
	h[10] = m[10] = s[10] = 0;
}
void Time::set_time(string a, int b){
	time[b] = a;
}
void Time::set_hour(int a, int b)
{
	h[b] = a;
}
void Time::set_minutus(int a, int b)
{
	m[b] = a;
}
void Time::set_second(int a, int b)
{
	s[b] = a;
}
string Time::get_time(int a)const{
	return time[a];
}
int Time::get_hour(int a)const
{
	return h[a];
}
int Time::get_minutus(int a)const
{
	return m[a];
}
int Time::get_second(int a)const
{
	return s[a];
}