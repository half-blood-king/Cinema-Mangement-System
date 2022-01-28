#include"CStaff.h"
void CStuff::set_departent(string a, int b)
{
	deparment[b] = a;
}
void CStuff::set_post(string a, int b)
{
	post[b] = a;
}
string CStuff::get_deparment(int a)
{
	return deparment[a];
}
string CStuff::get_post(int a)
{
	return post[a];
}
CStuff::CStuff()
{
	deparment[10] = post[10] = { 0 };
}
CStuff::~CStuff()
{
	CStuff *u = new CStuff();
	delete u;
}