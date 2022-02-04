#include <iostream>
#include < fstream>
#include <sstream>
#include <cstdlib>
#include <Windows.h>
#include "chap.h"
#include "khande.h"
#include "file.h"
#include <time.h>
using namespace std;
char search_name1[100];
int numbers;
void main();
void edit();
void editk();
void afrad();
void editus();
void resid();
void modiratgaza();
void editka();
void profiles();
void profilek();
void gozaresh();
int rands(int min, int max);
bool islog = true;
bool s = true;
void login(string  search_name, int numbers,int tupe) {
	string name;
	int number;
	if (tupe == 1) {
		ifstream loginfile("loginadmin.txt");
		bool found = false;
		while (loginfile >> number) {
			loginfile >> name;
			if (name == search_name) {
				if (number == numbers) {
					setColor(4, 15);
					//khande();
					setColor(8, 15);
					char s[100] = ("khosh amadid!!!");
					setColor(1, 15);
					//flasher(s, 1000);
					found = true;
					islog = false;
					break;
				}
				else {
					char ea[100] = ("etelat vared shode sahih nist");
					Sleep(1000);
					setColor(4, 15);
					flasher(ea, 1000);
					setColor(1, 15);
					char e1a[100] = ("bad az 5 sanie mojadadan talash konid");
					Sleep(1000);
					start(e1a, 100);
					setColor(4, 15);
					wait1();
					char e1[100] = ("kod amniaty ra vared konid:/n");
					start(e1, 80);
					int s = rands(1000,9999);
					setColor(4, 15);
					cout << endl << " ----------\n";
					cout << "|   " << s << "   |" << endl;
					cout << " ----------\n";
					int l;
					cin >> l;
					setColor(4, 15);
					if (l == s)
						main();
					else
						cout << "vorood taied nashod";
				}
			}
		}
		if (found == false) {
			gerye();
			cout << search_name << " etelaat sahih nist" << endl;
			Sleep(1000);
			setColor(1, 15);
			char e1a[100] = ("bad az 5 sanie mojadadan talash konid");
			Sleep(1000);
			start(e1a, 100);
			setColor(4, 15);
			wait1();
			char e1[100] = ("kod amniaty ra vared konid:");
			start(e1, 80);
			int s = rands(1000, 9999);
			setColor(4, 15);
			cout << endl << " ----------\n";
			cout << "|   " << s << "   |" << endl;
			cout << " ----------\n";
			int l;
			cin >> l;
			setColor(4, 15);
			if (l == s)
				main();
			else
				cout << "vorood taied nashod";
		}
	}
	if (tupe == 2) {
		ifstream loginfile("loginstudent.txt");
		bool found = false;
		while (loginfile >> number) {
			loginfile >> name;
			if (name == search_name) {
				if (number == numbers) {
					//khande();
					setColor(8, 15);
					char str[100] = ("khosh amadid!!!");
					//flasher(str,1000);
					setColor(1, 15);
					found = true;
					islog = false;
					break;
				}
				else {
					char ea[100] = ("etelat vared shode sahih nist");
					Sleep(1000);
					setColor(4, 15);
					flasher(ea, 1000);
					setColor(1, 15);
					char e1a[100] = ("bad az 5 sanie mojadadan talash konid");
					Sleep(1000);
					start(e1a, 80);
					setColor(4, 15);
					wait1();
					char e1[100] = ("kod amniaty ra vared konid:/n");
					start(e1, 100);
					int s = rands(1000, 9999);
					setColor(4, 15);
					cout << endl << " ----------\n";
					cout << "|   " << s << "   |" << endl;
					cout << " ----------\n";
					int l;
					cin >> l;
					setColor(4, 15);
					if (l == s)
						main();
					else
						cout << "vorood taied nashod";
				}
			}
		}
		if (found == false) {
			gerye();
			cout << search_name << " etelaat sahih nist" << endl;
			Sleep(1000);
			setColor(1, 15);
			char e1a[100] = ("bad az 5 sanie mojadadan talash konid");
			Sleep(1000);
			start(e1a, 1000);
			setColor(4, 15);
			wait1();
			char e1[100] = ("kod amniaty ra vared konid:");
			start(e1, 80);
			int s = rands(1000, 9999);
			setColor(4, 15);
			cout << endl << " ----------\n";
			cout << "|   " << s << "   |" << endl;
			cout << " ----------\n";
			int l;
			cin >> l;
			setColor(4, 15);
			if (l == s)
				main();
			else
				cout << "vorood taied nashod";
		}
	}
	if (tupe == 3) {
		ifstream loginfile("loginworker.txt");
		bool found = false;
		while (loginfile >> number) {
			loginfile >> name;
			if (name == search_name) {
				if (number == numbers) {
					khande();
					setColor(8, 15);
					char str[100] = ("khosh amadid!!!");
					flasher(str, 1000);
					setColor(1, 15);
					found = true;
					islog = false;
					break;
				}
				else{
					char ea[100] = ("etelat vared shode sahih nist");
					Sleep(1000);
					setColor(4, 15);
					flasher(ea, 1000);
					setColor(1, 15);
					char e1a[100] = ("bad az 5 sanie mojadadan talash konid");
					Sleep(1000);
					start(e1a, 100);
					setColor(4, 15);
					wait1();
					char e1[100] = ("kod amniaty ra vared konid:/n");
					start(e1, 100);
					int s = rands(1000, 9999);
					setColor(4, 15);
					cout << endl << " ----------\n";
					cout << "|   " << s << "   |" << endl;
					cout << " ----------\n";
					int l;
					cin >> l;
					setColor(4, 15);
					if (l == s)
						main();
					else
						cout << "vorood taied nashod";
				}
					
			}
		}
		if (found == false) {
			gerye();
			cout << search_name << " etelaat sahih nist" << endl;
			Sleep(1000);
			setColor(1, 15);
			char e1a[100] = ("bad az 5 sanie mojadadan talash konid");
			Sleep(1000);
			start(e1a, 100);
			setColor(4, 15);
			wait1();
			char e1[100] = ("kod amniaty ra vared konid:");
			start(e1, 100);
			int s = rands(1000, 9999);
			setColor(4, 15);
			cout << endl << " ----------\n";
			cout << "|   " << s << "   |" << endl;
			cout << " ----------\n";
			int l;
			cin >> l;
			setColor(4, 15);
			if (l == s)
				main();
			else
				cout << "vorood taied nashod";
		}
	}
}
int rands(int min, int max) {
	srand(time(0));
	return (rand() % (max - min)) + min;
}
void Menuadmin() {
	system("cls");
	setColor(15, 4);
	cout << "1. modirate ghaza";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "2. afrad";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "3. hesab ha";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "4.gozareshgiry";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "5. Exit";
	setColor(0, 15);
	cout << endl;
	int firstMenuOption = 0;
	while (firstMenuOption != 9) {
		cin >> firstMenuOption;
		switch (firstMenuOption) {
		case 1:
			modiratgaza();
			break;
		case 2:
			afrad();
			break;
		case 3:
			resid();
			break;
		case 4:
			gozaresh();
			break;
		case 5: {
			setColor(2, 15);
			gerye();
			setColor(4, 15);
			char fooqdrhazf[100] = ("good by..");
			end(fooqdrhazf, 200);
			setColor(15, 15);
			exit(0);
		}
			break;
		default:
			break;
		}
	}
}
void Menustudent() {
	system("cls");
	setColor(15, 4);
	cout << "1. list gaza ha";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "2. rezerve gaza";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "3. namayesh rezerve ha";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "4.  afzayesh etebar";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "5. profile";
	setColor(0, 11);;
	cout << "__________________";
	setColor(15, 4);
	cout << "6. Exit";
	setColor(0, 15);
	cout << endl;

	int firstMenuOption = 0;
	while (firstMenuOption != 4) {

		cin >> firstMenuOption;
		switch (firstMenuOption) {
		case 1: {
			system("cls");
			moshahedegs();
			setColor(4, 15);
			char foodhazf[100] = ("jahat khorooj kelidy bezanid");
			start(foodhazf, 80);
			setColor(1, 15);
			int s;
			cin >> s;
			Menustudent();
		}
		case 2: {
			system("cls");
			moshahedegs();
			rezervs(search_name1);
			Menustudent();
		}
			break;
		case 3:
			showrezervs(search_name1);
			Menustudent();
			break;
		case 4:
			etebars(search_name1);
			Menustudent();
			break;
		case 5:
			profiles();
			Menustudent();
			break;
		case 6: {
			setColor(2, 15);
			gerye();
			setColor(4, 15);
			char foodrhazf[100] = ("good by..");
			end(foodrhazf, 200);
			setColor(15, 15);
			exit(0);
		}
			break;
		default:
			break;
		}
	}
}
void Menuworker() {
	system("cls");
	setColor(15, 4);
	cout << "1. list gaza ha";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "2. rezerve gaza";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "3. namayesh rezerve ha";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "4.  afzayesh etebar";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "5. profile";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "6. Exit";
	setColor(0, 15);
	cout << endl;
	int firstMenuOption = 0;
	while (firstMenuOption != 4) {
		cin >> firstMenuOption;
		switch (firstMenuOption) {
		case 1: {
			system("cls");
			moshahedegk();
			cout << "jahat khorooj kelidy ra bezanid";
			int s;
			cin >> s;
			Menuworker();
		}
		case 2: {
			system("cls");
			moshahedegk();
			rezervk(search_name1);
			Menuworker();
		}
				break;
		case 3: {
			showrezervk(search_name1);
			Menuworker();
		}
			break;
		case 4:
			etebark(search_name1);
			Menuworker();
			break;
		case 5: {
			profilek();
			Menuworker();
		}
			break;
		case 6: {
			setColor(2, 15);
			gerye();
			setColor(4, 15);
			char foodrhazf[100] = ("good by..");
			end(foodrhazf, 200);
			setColor(15, 15);
			exit(0);
		}
			break;
		default:
			break;
		}
	}
}
void modiratgaza() {
	system("cls");
	setColor(15, 4);
	cout << "1. daneshjoo";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "2. karmandan";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "3. Exit";
	setColor(0, 15);
	cout << endl;
	int firstMenuOption = 0;
		cin >> firstMenuOption;
	while(firstMenuOption != 9){
		if (firstMenuOption == 1) {
			system("cls");
			setColor(15, 4);
			cout << "1. namayesh ghaza ha";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "2. tarif gazaye gadid";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "3. virayesh gazaha";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "4. Exit";
			setColor(0, 15);
			cout << endl;
			int firstMenuOption = 0;
			while (firstMenuOption != 4) {
				cin >> firstMenuOption;
				switch (firstMenuOption) {
				case 1: {
					system("cls");
					setColor(15, 4);
					cout << "1. virayesh ghaza ha";
					setColor(0, 11);
					cout << "__________________";
					setColor(15, 4);
					cout << "2. exit";
					setColor(0, 15);
					cout << endl;
					moshahedegs();
					int s;
					cin >> s;
					if (s == 1)
						edit();
					else
						modiratgaza();
				}
						break;
				case 2: {
					system("cls");
					moshahedegs();
					newfoots();
					modiratgaza();
				}
						break;
				case 3:
					edit();
				case 4:
					modiratgaza();
					break;
				default:
					break;
				}
			}
	
		}
		if (firstMenuOption == 2) {
			system("cls");
			setColor(15, 4);
			cout << "1. namayesh ghaza ha";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "2. tarif gazaye gadid";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "3. virayesh gazaha";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "4. Exit";
			setColor(0, 15);
			cout << endl;
			int firstMenuOption1 = 0;
			while (firstMenuOption != 4) {
				cin >> firstMenuOption;
				switch (firstMenuOption) {
				case 1: {
					system("cls");
					setColor(15, 4);
					cout << "1. virayesh ghaza ha";
					setColor(0, 11);
					cout << "__________________";
					setColor(15, 4);
					cout << "2. exit";
					setColor(0, 15);
					cout << endl;
					moshahedegk();
					int s;
					cin >> s;
					if (s == 1) {
						editk();
					}
					else
						modiratgaza();
				}
						break;
				case 2:
					system("cls");
					moshahedegk();
					newfootk();
					modiratgaza();
					break;
				case 3:
					editk();
				case 4:
					Menuadmin();
					break;
				default:
					break;
				}
			}
		}
		else
			Menuadmin();
	}
}
void afrad() {
	system("cls");
	setColor(15, 4);
	cout << "1. daneshjooyan";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "2. karmandan";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "3. exit";
	setColor(0, 15);
	cout << endl;
	int firstMenuOption = 0;
	while (firstMenuOption != 9) {
		cin >> firstMenuOption;
		switch (firstMenuOption) {
		case 1: {
			system("cls");
			setColor(15, 4);
			cout << "1. namyesh daneshjooha";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "2. tarif daneshjoo";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "3.virayesh  daneshjoo";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "4. exit";
			setColor(0, 15);
			cout << endl;
			int firstMenuOption = 0;
			while (firstMenuOption != 9) {
				cin >> firstMenuOption;
				switch (firstMenuOption) {
				case 1: {
					system("cls");
					setColor(15, 4);
					cout << "1. virayesh daneshjoo ha";
					setColor(0, 11);
					cout << "__________________";
					setColor(15, 4);
					cout << "2. exit";
					setColor(0, 15);
					cout << endl;
					shows();
					int s;
					cin >> s;
					if (s == 1)
						editus();
					else
						afrad();
				}
					break;
				case 2: {
					system("cls");
					shows();
					adds();
					afrad();
				}
					break;
				case 3:
					editus();
					break;
				case 4:
					afrad();
					break;
				default:
					break;
				}
			}

		}
			break;
		case 2: {
			system("cls");
			setColor(15, 4);
			cout << "1. namyesh karmandan";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "2. tarif karmand";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "3.virayesh karmand";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "4. exit";
			setColor(0, 15);
			cout << endl;
			int firstMenuOption = 0;
			while (firstMenuOption != 9) {
				cin >> firstMenuOption;
				switch (firstMenuOption) {
				case 1: {
					system("cls");
					setColor(15, 4);
					cout << "1. virayesh karmand ha";
					setColor(0, 11);
					cout << "__________________";
					setColor(15, 4);
					cout << "2. exit";
					setColor(0, 15);
					cout << endl;
					showk();
					int s;
					cin >> s;
					if (s == 1)
					editka();
					else
						afrad();
				}
						break;
				case 2: {
					system("cls");
					showk();
					addk();
					afrad();
				}
						break;
				case 3:
					editka();
					break;
				case 4:
					afrad();
					break;
				default:
					break;
				}
			}

		}
			break;
		case 3:
			Menuadmin();
			break;
		default:
			break;
		}
	}
}
void editus() {
	system("cls");
	setColor(15, 4);
	cout << "1. taghiir username";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "2. taghiir password";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "3. hazfe username";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "4. Exit";
	setColor(0, 15);
	cout << endl;
	int firstMenuOption;
	cin >> firstMenuOption;
	while (firstMenuOption != 9) {
		switch (firstMenuOption) {
		case 1: {
			system("cls");
			shows();
			changeusrs();
			afrad();
		}
				break;
		case 2: {
			system("cls");
			shows();
			changepsws();
			afrad();
		}
				break;
		case 3: {
			system("cls");
			shows();
			hazfusrs();
			afrad();
		}
				break;
		case 4:
			afrad();
			break;
		default:
			break;
		}
	}
}
void editka() {
	system("cls");
	setColor(15, 4);
	cout << "1. taghiir username";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "2. taghiir password";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "3. hazfe username";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "4. Exit";
	setColor(0, 15);
	cout << endl;
	int firstMenuOption;
	cin >> firstMenuOption;
	while (firstMenuOption != 9) {
		switch (firstMenuOption) {
		case 1: {
			system("cls");
			showk();
			changeusrk();
			afrad();
		}
				break;
		case 2: {
			system("cls");
			showk();
			changepswk();
			afrad();
		}
				break;
		case 3: {
			system("cls");
			showk();
			hazfusrk();
			afrad();
		}
				break;
		case 4:
			afrad();
			break;
		default:
			break;
		}
	}
}
void edit() {
	system("cls");
	setColor(15, 4);
	cout << "1. taghiir name ghaza ha";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "2. taghiir gheimat ghaza ha";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "3. hazfe gazaha";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "4. Exit";
	setColor(0, 15);
	cout << endl;
	int firstMenuOption;
	cin >> firstMenuOption;
	while (firstMenuOption != 9) {
		switch (firstMenuOption) {
		case 1: {
			system("cls");
			moshahedegs();
			editfoodsname();
			modiratgaza();
		}
				break;
		case 2: {
			system("cls");
			moshahedegs();
			editfoodsgeimat();
			modiratgaza();
		}
				break;
		case 3: {
			system("cls");
			moshahedegs();
			editfoorshazf();
			modiratgaza();
		}
				break;
		case 4:
			modiratgaza();
			break;
		default:
			break;
		}
	}
}
void editk() {
		system("cls");
		setColor(15, 4);
		cout << "1. taghiir name ghaza ha";
		setColor(0, 11);
		cout << "__________________";
		setColor(15, 4);
		cout << "2. taghiir gheimat ghaza ha";
		setColor(0, 11);
		cout << "__________________";
		setColor(15, 4);
		cout << "3. hazfe gazaha";
		setColor(0, 11);
		cout << "__________________";
		setColor(15, 4);
		cout << "4. Exit";
		setColor(0, 15);
		cout << endl;
		int firstMenuOption=0;
		while (firstMenuOption != 9) {
			cin >> firstMenuOption;
			switch (firstMenuOption) {
			case 1: {
				system("cls");
				moshahedegk();
				editfootkname();
				modiratgaza();
			}
					break;
			case 2: {
				system("cls");
				moshahedegk();
				editfootkgeimat();
				modiratgaza();
			}
					break;
			case 3: {
				system("cls");
				moshahedegk();
				editfootkhazf();
				modiratgaza();
			}
					break;
			case 4:
				modiratgaza();
				break;
			default:
				break;
			}
		}
}
void resid() {
	system("cls");
	setColor(15, 4);
	cout << "1. daneshjooyan";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "2. karmandan";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "3.  exit";
	setColor(0, 15);
	cout << endl;
	int firstMenuOption = 0;
	while (firstMenuOption != 4) {
		cin >> firstMenuOption;
		switch (firstMenuOption) {
		case 1: {
			resids();
			resid();
		}
				break;
		case 2: {
			residk();
			resid();
		}
				break;
		case 3:
			Menuadmin();
			break;
		default:
			break;
		}
	}
	resids();
}
void gozaresh() {
	system("cls");
	setColor(15, 4);
	cout << "1. namyesh vezervha";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "2. namyesh daneshjoyan";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "3. namyesh karmandan";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "4.poshtiban giry";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "5. bazgardany";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "6. Exit";
	setColor(0, 15);
	cout << endl;
	int firstMenuOption = 0;
	while (firstMenuOption != 9) {
		cin >> firstMenuOption;
		switch (firstMenuOption) {
		case 1: {
			rezerv();
			setColor(4, 15);
			char foodhazf[100] = ("jahat khorooj kelidy bezanid");
			start(foodhazf, 80);
			setColor(1, 15);
			int s;
			cin >> s;
			gozaresh();
		}
				break;
		case 2: {
			system("cls");
			setColor(15, 4);
			cout << "1. virayesh daneshjoo ha";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "2. exit";
			setColor(0, 15);
			cout << endl;
			shows();
			int s;
			cin >> s;
			if (s == 1)
				editus();
			else
				afrad();
		}
				break;
		case 3:{
			system("cls");
			setColor(15, 4);
			cout << "1. virayesh karmand ha";
			setColor(0, 11);
			cout << "__________________";
			setColor(15, 4);
			cout << "2. exit";
			setColor(0, 15);
			cout << endl;
			showk();
			int s;
			cin >> s;
			if (s == 1)
				editka();
			else
				afrad();
		}
			break;
		case 4: {
			setColor(4, 15);
			char foodhazf[100] = ("taeed dastresy!!!");
			flasher(foodhazf, 1000);
			setColor(5, 15);
			char fohodhazf[100] = ("ramze obor ra mojadadan vared konid:");
			start(fohodhazf, 80);
			int rpass;
			setColor(15, 15);
			cin >> rpass;
			setColor(1, 15);
			backup(rpass, numbers);
			gozaresh();
		}
			break;
		case 5: {
			setColor(4, 15);
			char foodhazf[100] = ("taeed dastresy!!!");
			flasher(foodhazf, 1000);
			setColor(5, 15);
			char ffoodhazf[100] = ("ramze obor ra mojadadan vared konid:");
			start(ffoodhazf, 80);
			int rpass;
			setColor(15, 15);
			cin >> rpass;
			setColor(1, 15);
			bazgardany(rpass, numbers);
			gozaresh();
		}
			break;
		case 6:
			Menuadmin();
			break;
		default:
			break;
		}
	}
}
void profiles() {
	system("cls");
	setColor(15, 4);
	cout << "1. tagir name karbary";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "2. tagir ramze oboor";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "3.  exit";
	setColor(0, 15);
	cout << endl;
	int firstMenuOption = 0;
	while (firstMenuOption != 4) {
		cin >> firstMenuOption;
		switch (firstMenuOption) {
		case 1: {
			profilenames(search_name1);
			profiles();
		}
			break;
		case 2: {
			changepsws(search_name1);
			profiles();
		}
				break;
		case 3:
			Menustudent();
			break;
		default:
			break;
		}
	}
}
void profilek() {
	system("cls");
	setColor(15, 4);
	cout << "1. tagir name karbary";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "2. tagir ramze oboor";
	setColor(0, 11);
	cout << "__________________";
	setColor(15, 4);
	cout << "3.  exit";
	setColor(0, 15);
	cout << endl;
	int firstMenuOption = 0;
	while (firstMenuOption != 4) {
		cin >> firstMenuOption;
		switch (firstMenuOption) {
		case 1: {
			profilenamek(search_name1);
			profiles();
		}
				break;
		case 2: {
			changepswk(search_name1);
			profiles();
		}
				break;
		case 3:
			Menustudent();
			break;
		default:
			break;
		}
	}
}
void main() {
	system("color f0");
	setColor(1,15);
	int number;
	setColor(4, 15);
	char qwe[100] = ("Hello wellcome to my project!!!");
	if (s == true) {
		chap(qwe, 50);
	}
	s = false;
	string name;
	int tupe;
	setColor(1, 15);
	system("cls");
	char str[100] = ("name karbary ra vared konid:");
	start(str, 80);
	setColor(3, 15);
	cin >> search_name1;
	setColor(1, 15);
	char str1[100] = ("ramze vorood ra vared konid(ramz oboor makhfy ast):");
	start(str1, 80);
	setColor(15, 15);
	cin >> numbers;
	setColor(1, 15);
	if (search_name1[0] == 'a') {
		tupe = 1;
	}
	if (search_name1[0] == 's') {
		tupe = 2;
	}
	if (search_name1[0] == 'k') {
		tupe = 3;
	}
	login(search_name1, numbers,tupe);
	if (tupe == 1 && islog == false) 
		Menuadmin();
	if (tupe == 2  && islog == false) 
			Menustudent();	
	if (tupe == 3 && islog == false)
		Menuworker();
}