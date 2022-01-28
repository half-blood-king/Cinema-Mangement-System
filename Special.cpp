#include"Special.h"
Special::Special()
{
	day[10] = month[10] = year[10] = { 0 };
}
void Special::set_day(int a, int b)
{
	day[b] = a;
}
void Special::set_month(int a, int b)
{
	month[b] = a;
}
void Special::set_year(int a, int b)
{
	year[b] = a;
}
int Special::get_day(int a)const{

	return day[a];
}
int Special::get_month(int a)const{

	return month[a];
}
int Special::get_year(int a)const{

	return year[a];
}
void Special::control(){
	string d;
	char r;
	for (static int j1 = 0; j1< 6; j1++){
		cout << "please enter your name :";
		getline(cin, d);
		set_Name(d, j1);

		std::cout << "enter your password :";
		getline(cin, d);
		set_password(d, j1);
		cout << "please pay 5000 fee for special memebership and you agree to all the policy of our cinema y/n:";
		cin >> r;
		if (r == 'y' || r == 'Y')
		{

			cin >> r;
			time_t now = time(0);
			tm* ltm = localtime(&now);
			cout << "your card is issued on the :" << ltm->tm_mday << ":" << ltm->tm_mon << ":" << ltm->tm_year << endl;
			cout << "your membership would be over by exactly:" << ltm->tm_mday << ":" << ltm->tm_mon << ":" << ltm->tm_year++ << endl;
			set_day(ltm->tm_mday, j1);
			set_day(ltm->tm_mon, j1);
			set_day(ltm->tm_year, j1);
			cout << "Thank you!" << endl;
		}
		else if (r == 'n' || r == 'N'){
			cout << "hope to look you forward again :" << endl
				;
		}
		else{
			cout << "invalid chocie" << endl;
		}
		break;
	}
}
void Special::switcher()
{
	int choice;
	string a;
	cout << "please enter your choice " << endl;
	cout << "1.Book a Movie " << endl;
	cout << "2.Restore your membership  " << endl;
	cout << "3.request a Movie : " << endl;
	cout << "4.cancel  tickets " << endl;
	cout << "5.exist" << endl;
	do{
	cin >> choice;
	switch (choice)
	{
		
	case 1:
		cout << "please the name of the movie :";
		getline(cin, a);
		
        
		cout << "please enter the number of seats you want :";

}
