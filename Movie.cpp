#include"Movie.h"
Movie::Movie(){
	name[10] = categ[10] = gene[10] = industry[10] = production[10] = novel[10] = cast[10] = ani[10] = "/0";
}
Movie::~Movie()
{

	Movie *p = new Movie();
	delete p;
}
void Movie::set_name(string a, int b)
{
	name[b] = a;
}
void Movie::set_categ(string a, int b)
{
	categ[b] = a;
}
void Movie::set_gene(string a, int b)
{
	gene[b] = a;
}
void Movie::set_industry(string a, int b)
{
	industry[b] = a;
}
void Movie::set_production(string a, int b)
{
	production[b] = a;
}
void Movie::set_ani(string a, int b)
{
     ani[b] = a;
}
void Movie::set_novel(string a, int b)
{
	novel[b] = a;
}
void Movie::set_cast(string a, int b)
{
	cast[b] = a;
}

string Movie::get_name(int c)const
{
	return name[c];
}
string Movie::get_industry(int c)const
{
	return industry[c];
}
string Movie::get_production(int c)const
{
	return production[c];
}
string Movie::get_cast(int c)const
{
	 return cast[c];
}
string Movie::get_ani(int c)const
{
	return ani[c];
}
string Movie::get_novel(int c)const
{
	return novel[c];
}
string Movie::get_categ(int c)const
{
	return categ[c];
}




