#include"Customer.h"
Customer::Customer()
{
	seat[10] = 0;
	cated[10] = status[10] = { "/0" };
}
void Customer::set_seat(int a, int b)
{
	seat[b] = a;
}
void Customer::set_status(string a, int b)
{
	status[b] = a;
}
void Customer::set_cated(string a, int b)
{
	cated[b] = a;
}
string Customer::get_cated( int b)const
{
	return cated[b];
}
string Customer::get_status(int b)const
{
	return status[b];
}
int Customer::get_seat(int b)const
{
	return seat[b];
}



