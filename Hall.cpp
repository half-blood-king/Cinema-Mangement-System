#include"Hall.h"
Hall::Hall()
{
	seats[5][10] = {};
	seat[7][10] = {};
	hall[3] = 0;
	screen[5] = 0;
}
void Hall::set_hall(int a)
{
	hall[a] = a;
}
void Hall::set_screen(int a)
{
	screen[a] = a;
}
int Hall::get_hall(int a)const
{
	return hall[a];
}
int Hall::get_screen(int a)const
{
	return screen[a];
}
void Hall::set_seath(int b, int c)
{
	seats[b][c] = true;
}
void Hall::set_seats(int b, int c)
{
	seat[b][c] = true;
}
int Hall::get_seats(int a, int b)const{
	return seats[a][b];
}
int Hall::get_seath(int a, int b)const{
	return seat[a][b];
}