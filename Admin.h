#include"Movie.h"
#include"Time.h"
#pragma once
class Admin :private Movie{
private:
	Time t1;
protected:
	int id[6];
	string password[6];
	string Name[6];
	
public:
	Admin();
	~Admin();
	void set_Name(string, int);
	 void set_id(int, int);
	 void set_password(string, int);
	void set_moviencp(string, int, string, int, string, int);
	void set_movieigc(string, int, string, int, string, int);
	void set_moviean(string, int, string, int);
	string get_name(int)const;
	string get_cast(int)const;
	string get_gene(int)const;
	string get_production(int)const;
	string get_industry(int)const;
	string get_ani(int)const;
	string  get_novel(int)const;
	string get_categ(int)const;
	string get_names(int)const;
	string get_password(int)const;
	int get_id(int)const;
	virtual void control();
};








