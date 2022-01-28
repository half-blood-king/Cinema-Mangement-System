#include<string>
using namespace std;
#pragma once
class Movie{
protected:
	string name[10];
private:
	
	string categ[10];
	string ani[10];
	string cast[20];
	string gene[10];
	string production[10];
	string industry[10];
	string novel[10];
public:
	Movie();
	~Movie();
	void set_name(string, int);
	void set_categ(string, int);
	void set_ani(string, int);
	void set_cast(string, int);
	void set_gene(string, int);
	void set_production(string, int);
	void set_industry(string, int);
	void set_novel(string, int);
	string get_name(int)const;
	string get_categ(int)const;
	string get_ani(int)const;
	string get_cast(int)const;
	string get_gene(int)const;
	string get_production(int)const;
	string get_industry(int)const;
	string get_novel (int)const;
};