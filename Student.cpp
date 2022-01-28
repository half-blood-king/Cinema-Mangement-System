#include"Student.h"
Student::Student()
{
	school[10] = { 0 };
}
void Student::set_school(string a, int b)
{
	school[b] = a;
}
string Student::get_school(int b)
{
	return school[b];
}