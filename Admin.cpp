#include"Admin.h"
#include<iostream>
#include"Time.h"
Admin::Admin()
{
	Name[11] = password[11] = "/0";
	id[10] = 0;
}
void Admin::set_moviencp(string a, int b, string c, int d, string e, int f)
{
	set_name(a, b);
	set_cast(c, d);
	set_production(e, f);
}
void Admin::set_movieigc(string a, int b, string c, int d, string e, int f)
{
	set_industry(a, b);
	set_gene(c, d);
	set_categ(e, f);
}
void Admin::set_moviean(string a, int b, string c, int d)
{
	set_ani(a, b);
	set_novel(c, d);
}
string Admin::get_ani( int b)const
{
	Movie m;
	return m.get_ani(b);
}
string Admin::get_gene(int b)const
{
	Movie m;
	return m.get_gene(b);
}
string Admin::get_cast(int b)const
{
	Movie m;
	return m.get_cast(b);
}
string Admin::get_novel(int b)const
{
	Movie m;
	return m.get_novel(b);
}
string Admin::get_name(int b)const
{
	Movie m;
	return m.get_name(b);
}
string Admin::get_categ(int b)const
{
	Movie m;
	return m.get_categ(b);
}
string Admin::get_production(int b)const
{
	Movie m;
	return m.get_production(b);
}
string Admin::get_industry(int b)const
{
	Movie m;
	return m.get_industry(b);
}
void Admin::set_Name(string a, int b)
{
	Name[b] = a;
}
void Admin::set_id(int a, int b)
{
	id[b] = a;
}
void Admin::set_password(string a, int b)
{
	password[b] = a;
}
string Admin::get_names(int a)const
{
	return Name[a];

}
string Admin::get_password(int a)const
{
	return password[a];

}
int Admin::get_id(int a)const{
	return id[a];
}
void Admin::control()
{
	string a, b, c, d, e, f, g, h, l;
	int k, k1, k2;
	std::cout << "please enter your choice !" << std::endl;
	std::cout << "1.Add a Movie" << std::endl;
	std::cout << "2.Set time of the Movie" << std::endl;
	std::cout << "3.Delete a Movie" << std::endl;
	std::cout << "4.add a user" << std::endl;
	std::cout << "5.Delete a User" << std::endl;
	int choice;
	do{
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			int t;
			std::cout << "enter the number of movies you wanted to add:";
			cin >> t;


			for (static int i = 0; i < t; i++){
				std::cout << "enter the name of the Movie :";
				std::getline(cin, a);
				std::cout << "enter the cast of the movie :";
				std::getline(cin, b);
				std::cout << "enter the production house of the movie :";
				std::getline(cin, c);
				set_moviencp(a, i, b, i, c, i);
				std::cout << "enter the Moive industry of the movie :";
				std::getline(cin, d);
				std::cout << "enter the gener of the movie :";
				std::getline(cin, e);
				std::cout << "enter the categor of the movie :";
				std::getline(cin, f);
				set_movieigc(d, i, e, i, f, i);
				std::cout << "Movie is animated or not :";
				std::getline(cin, f);
				std::cout << "does movie based upon the Novel :";
				cin >> h;
				if (h == "y")
				{
					cout << "enter the novel name upon which movie is based :";
					getline(cin, h);
					set_novel(h, i);
				}
				set_moviean(g, i, h, i);


				break;
		case 2:

			std::cout << "please enter the time shift of the movie:";
			getline(cin, a);
			t1.set_time(a, i);
			std::cout << "please enter the hour of the movie : ";
			cin >> k;
			t1.set_hour(k, i);
			std::cout << "please enter mintus of the movie for time table:";
			cin >> k1;
			t1.set_minutus(k1, i);
			std::cout << "please enter the seconds  of the movie for the time table:";
			std::cin >> k2;
			t1.set_second(k2, i);
			cout << "which loctaion you want to select hall or Screen :";
			getline(cin, b);
			if (b == "hall")
			{
				cout << "please enter the hall number for the location of the movie :";
				cin >> k;
				t1.set_hall(k);
			}
			else if (b == "screen")
			{
				cout << "please enter the screen number for the location of the movie :";
				cin >> k;
				t1.set_screen(k);
			}
			else
				cout << "invalid choice " << endl;

			}


			break;
		case 3:
			std::cout << "enter the name of the movie you wanted to search :";
			std::getline(cin, l);
			bool s = false;
			for (int v = 0; v < 10; v++)
			{
				if (l == get_name(v))
				{
					cout << "the name of the movie is :" << get_name(v) << endl;
					cout << "the cast of the movie is :" << get_cast(v) << endl;
					cout << "the gener of the movie is :" << get_gene(v) << endl;
					cout << "the categor of the movie is :" << get_categ(v) << endl;
					cout << "the production house of the movie is :" << get_production(v) << endl;
					cout << "the movie is :" << get_ani(v) << endl;
					cout << "the film industry of the movie :" << get_name(v) << endl;
					get_name(v) = "0";
					get_ani(v) = "0";
					get_categ(v) = "0";
					get_ani(v) = "0";
					get_cast(v) = "0";
					get_gene(v) = "0";
					get_novel(v) = "0";
					get_production(v) = "0";
					get_industry(v) = "0";

				}

				else if (s == false)
				{
					cout << "movie not found !" << endl;
					s = true;
				}
			}
			break;

		case 4:
			for (static int m1 = 0; m1 < 6; m1++)
			{
				std::cout << "please enter the name of the admin :";
				getline(cin, a);
				set_name(a, m1);
				std::cout << "please enter the id of the Admin :";
				cin >> k;
				set_id(k, m1);
				cout << "please enter the password set for admin #" << m1 + 1 << ":";
				getline(cin, b);
				set_password(b, m1);
			}
			break;

		case 6:
			cout << "please enter the id of the admin you wanted to delete :";
			cin >> k;
			bool s1 = true;
			for (k1 = 0; k1 < 6; k1++)
			{
				if (k == id[k1])
				{
					cout << "the name of the admin :" << get_name(k1);
				}
				else if (s1 == true)
				{
					cout << "id not found !";
					s1 = false;
				}
			}
		default:
			cout << "enter valid chocie !";
		}
	} while (choice != 7 || choice == true);
}