#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <Windows.h>
#include "chap.h"
using namespace std;
void moshahedegs() {
	ifstream file("gazahas.txt");
	string name;
	int price, j = 1;
	while (file >> name) {
		file >> price;
		cout << " " << j <<"-"<< name << "  " << price << endl;
		j++;
	}
}
void editfoodsname() {
	ifstream hazf1("gazahas.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int number;
	string name, search_name, nname;
	setColor(5, 15);
	char foodname[100] = ("name gaza ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);
	cin >> search_name;
	cout << endl;
	char foodnname[100] = ("name gadad gaza ra vared konid: ");
	setColor(5, 15);
	start(foodnname, 100);
	setColor(1, 15);
	cin >> nname;
	cout << endl;
	while (hazf1 >> name) {
		hazf1 >> number;
		if (name == search_name) {
			gazaha3 << nname << ' ' << number << endl;
		}
		else
			gazaha3 << name << ' ' << number << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("gazahas.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> name2) {
		gazaha2 >> number0;
		hazf << name2 << ' ' << number0 << endl;
	}
}
void editfoodsgeimat() {
	ifstream hazf1("gazahas.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int number, nname;
	string name, search_name;
	setColor(5, 15);
	char foodname[100] = ("name gaza ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);
	cin >> search_name;
	cout << endl;
	setColor(5, 15);
	char foodnname[100] = ("geimat gadad gaza ra vared konid: ");
	start(foodnname, 100);
	setColor(1, 15);
	cin >> nname;
	cout << endl;
	while (hazf1 >> name) {
		hazf1 >> number;
		if (name == search_name) {
			gazaha3 << name << ' ' << nname << endl;
		}
		else
			gazaha3 << name << ' ' << number << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("gazahas.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> name2) {
		gazaha2 >> number0;
		hazf << name2 << ' ' << number0 << endl;
	}
}
void editfoorshazf() {
	ifstream hazf1("gazahas.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int   number;
	string name, search_name;
	setColor(5, 15);
	char foodname[100] = ("name gaza ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);
	cin >> search_name;
	cout << endl;
	while (hazf1 >> name) {
		hazf1 >> number;
		if (name == search_name) {
			setColor(4, 15);
			char foodhazf[100] = ("hazf shod");
			flasher(foodhazf, 1000);
			setColor(1, 15);
			
		}
		else
			gazaha3 << name << ' ' << number << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("gazahas.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> name2) {
		gazaha2 >> number0;
		hazf << name2 << ' ' << number0 << endl;
	}
}
void newfoots() {
	ofstream gazaha("gazahas.txt", ios::app);
	int number;
	string name;
	setColor(5, 15);
	char foodname[100] = ("etmam ba z ast");
	start(foodname, 100);
	setColor(1, 15);
	cout << endl;
	for (; ; ) {
		setColor(5, 15);
		cout << "name gaza: ";
		setColor(1, 15);
		cin >> name;
		if (name == "z") {
			gazaha.close();
			break;
		}
		gazaha << name << ' ';
		setColor(5, 15);
		cout << "gemate gaza: ";
		setColor(1, 15);
		cin >> number;
		gazaha << number << endl;
		cout << endl;
	}
}
void newfootk() {
	ofstream gazaha("gazahak.txt", ios::app);
	int number;
	string name;
	setColor(5, 15);
	char foodname[100] = ("etmam ba z ast");
	start(foodname, 100);
	setColor(1, 15);
	cout << endl;
	for (; ; ) {
		setColor(5, 15);
		cout << "name gaza: ";
		setColor(1, 15);
		cin >> name;
		if (name == "z") {
			gazaha.close();
			break;
		}
		gazaha << name << ' ';
		setColor(5, 15);
		cout << "gemate gaza: ";
		setColor(1, 15);
		cin >> number;
		gazaha << number << endl;
		cout << endl;
	}
}
void editfootkname() {
	ifstream hazf1("gazahak.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int number;
	string name, search_name, nname;
	setColor(5, 15);
	char foodname[100] = ("name gaza ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);
	cin >> search_name;
	cout << endl;
	setColor(5, 15);
	char foodnamee[100] = ("name gadad gaza ra vared konid:");
	start(foodnamee, 100);
	setColor(1, 15);
	cin >> nname;
	cout << endl;
	while (hazf1 >> name) {
		hazf1 >> number;
		if (name == search_name) {
			gazaha3 << nname << ' ' << number << endl;
		}
		else
			gazaha3 << name << ' ' << number << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("gazahak.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> name2) {
		gazaha2 >> number0;
		hazf << name2 << ' ' << number0 << endl;
	}
}
void editfootkgeimat() {
	ifstream hazf1("gazahak.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int number, nname;
	string name, search_name;
	setColor(5, 15);
	char foodname[100] = ("name gaza ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);
	cin >> search_name;
	cout << endl;
	setColor(5, 15);
	char foodnaame[100] = ("geimat gadad gaza ra vared konid: ");
	start(foodnaame, 100);
	setColor(1, 15);
	cin >> nname;
	cout << endl;
	while (hazf1 >> name) {
		hazf1 >> number;
		if (name == search_name) {
			gazaha3 << name << ' ' << nname << endl;
		}
		else
			gazaha3 << name << ' ' << number << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("gazahak.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> name2) {
		gazaha2 >> number0;
		hazf << name2 << ' ' << number0 << endl;
	}
}
void editfootkhazf() {
	ifstream hazf1("gazahak.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int   number;
	string name, search_name;
	setColor(5, 15);
	char foodname[100] = ("name gaza ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);
	cin >> search_name;
	cout << endl;
	while (hazf1 >> name) {
		hazf1 >> number;
		if (name == search_name) {
			setColor(4, 15);
			char haz00f[100] = ("hazf shod");
			flasher(haz00f, 100);
		}
		else
			gazaha3 << name << ' ' << number << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("gazahak.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> name2) {
		gazaha2 >> number0;
		hazf << name2 << ' ' << number0 << endl;
	}
}
void shows() {
	ifstream file("loginstudent.txt");
	string name;
	int price, j = 1;
	setColor(3, 15);
	cout << "  " << "name karbary" << "     " << "password" << endl;
	setColor(1, 15);
	while (file >> price) {
		file >> name;
		cout << " " << j << "-" << name << ":     " << price << endl;
		j++;
	}
}
void adds() {
	ofstream afrad1("loginstudent.txt", ios::app);
	ofstream afrad2("etebars.txt", ios::app);
	ifstream check("loginstudent.txt");
	int number,cnumber;
	string name,cname;
	setColor(5, 15);
	char foodname[100] = ("etmam ba z ast");
	start(foodname, 100);
	cout << endl;
	setColor(1, 15);
	for (; ; ) {
		cout << "username: ";
		cin >> name;
		while (check >> cnumber) {
			check >> cname;
			if (cname == name) {
				char foodnaame[100] = ("name karbary tekrary ast mojadadan vared konid");
				start(foodnaame, 100);
				cout << endl;
				cin >> name;
			}
		}
		if (name == "z") {
			afrad1.close();
			break;
		}
		cout << "password: ";
		cin >> number;
		afrad1 <<  number << ' ' << name << endl;
		afrad2 <<  '0' << ' ' << name << endl;
		cout << endl;
	}
}
void changeusrs() {
	ifstream hazf1("loginstudent.txt");	
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int number;
	string name, search_name, nname;
	setColor(5, 15);
	char foodname[100] = ("username ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);
	cin >> search_name;
	cout << endl;
	setColor(5, 15);
	char fooddname[100] = ("username jadid ra vared konid: ");
	start(fooddname, 100);
	setColor(1, 15);
	cin >> nname;
	cout << endl;
	while (hazf1 >> number) {
		hazf1 >> name;
		if (name == search_name) {
			gazaha3 << number <<  ' ' << nname << endl;
		}
		else
			gazaha3 << number << ' ' << name << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("loginstudent.txt");
	ifstream gazaha2("gazaha2.txt");
	ofstream afrad2("etebars.txt");
	while (gazaha2 >> number0) {
		gazaha2 >> name2;
		hazf << number0 <<  ' ' << name2 << endl;
		afrad2 << '0' << ' ' << name2 << endl;
	}
}
void changepsws() {
	ifstream hazf1("loginstudent.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int number, nname;
	string name, search_name;
	setColor(5, 15);
	char foodname[100] = ("username ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);
	cin >> search_name;
	cout << endl;
	setColor(5, 15);
	char fooodname[100] = ("password jadid ra vared konid: ");
	start(fooodname, 100);
	setColor(1, 15);
	cin >> nname;
	cout << endl;
	while (hazf1 >> number) {
		hazf1 >> name;
		if (name == search_name) {
			gazaha3 << nname << ' ' << name << endl;
		}
		else
			gazaha3 << number << ' ' << name << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("loginstudent.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> number0) {
		gazaha2 >> name2;
		hazf << number0 << ' ' << name2 << endl;
	}
}
void hazfusrs() {
	ifstream hazf1("loginstudent.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int   number;
	string name, search_name;
	setColor(5, 15);
	char foodname[100] = ("username ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);
	cin >> search_name;
	cout << endl;
	while (hazf1 >>number) {
		hazf1 >> name;
		if (name == search_name) {
			setColor(4, 15);
			char foodhazf[100] = ("hazf shod");
			flasher(foodhazf, 1000);
			setColor(1, 15);
		}
		else
			gazaha3 << number <<  ' ' << name << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("loginstudent.txt");
	ofstream afrad2("etebars.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> number0) {
		gazaha2 >> name2;
		hazf << number0 << ' ' << name2 << endl;
		afrad2 << '0' << ' ' << name2 << endl;
	}
}
void showk() {
	ifstream file("loginworker.txt");
	string name;
	int price, j = 1;
	setColor(3, 15);
	cout << "  " << "name karbary" << "     " << "password" << endl;
	setColor(1, 15);
	while (file >> price) {
		file >> name;
		cout << " " << j << "-" << name << ":     " << price << endl;
		j++;
	}
}
void addk() {
	ofstream afrad1("loginworker.txt", ios::app);
	ofstream afrad2("etebarw.txt", ios::app);
	ifstream check("loginstudent.txt");
	int number, cnumber;
	string name, cname;
	setColor(5, 15);
	char foodhazf[100] = ("etmam ba z ast");
	start(foodhazf, 80);
	cout << endl;
	setColor(1, 15);
	for (; ; ) {
		cout << "username: ";
		cin >> name;
		while (check >> cnumber) {
			check >> cname;
			if (cname == name) {
				char foodnaame[100] = ("name karbary tekrary ast mojadadan vared konid");
				start(foodnaame, 100);
				cout << endl;
				cin >> name;
			}
		}
		if (name == "z") {
			afrad1.close();
			break;
		}
		cout << "password: ";
		cin >> number;
		afrad1 << endl << number << ' ' << name << endl;
		afrad2 << endl << '0' << ' ' << name << endl;
		cout << endl;
	}
}
void changeusrk() {
	ifstream hazf1("loginworker.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int number;
	string name, search_name, nname;
	setColor(5, 15);
	char foodname[100] = ("username ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);
	cin >> search_name;
	cout << endl;
	setColor(5, 15);
	char ffoodname[100] = ("username jadid ra vared konid: ");
	start(ffoodname, 100);
	setColor(1, 15);
	cin >> nname;
	cout << endl;
	while (hazf1 >> number) {
		hazf1 >> name;
		if (name == search_name) {
			gazaha3 << number << ' ' << nname << endl;
		}
		else
			gazaha3 << number << ' ' << name << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("loginworker.txt");
	ofstream afrad1("etebarw.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> number0) {
		gazaha2 >> name2;
		hazf << number0 << ' ' << name2 << endl;
		afrad1 << '0' << ' ' << name2 << endl;
	}

}
void changepswk() {
	ifstream hazf1("loginworker.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int number, nname;
	string name, search_name;
	setColor(5, 15);
	char foodname[100] = ("username ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);
	cin >> search_name;
	cout << endl;
	setColor(5, 15);
	char f1oodname[100] = ("password jadid ra vared konid: ");
	start(f1oodname, 100);
	setColor(1, 15);
	cin >> nname;
	cout << endl;
	while (hazf1 >> number) {
		hazf1 >> name;
		if (name == search_name) {
			gazaha3 << nname << ' ' << name << endl;
		}
		else
			gazaha3 << number << ' ' << name << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("loginworker.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> number0) {
		gazaha2 >> name2;
		hazf << number0 << ' ' << name2 << endl;
	}
}
void hazfusrk() {
	ifstream hazf1("loginworker.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int   number;
	string name, search_name;
	setColor(5, 15);
	char foodname[100] = ("username ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);

	cin >> search_name;
	cout << endl;
	while (hazf1 >> number) {
		hazf1 >> name;
		if (name == search_name) {
			setColor(4, 15);
			char foodhazf[100] = ("hazf shod");
			flasher(foodhazf, 1000);
			setColor(1, 15);
		}
		else
			gazaha3 << number << ' ' << name << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("loginworker.txt");
	ofstream afrad1("etebarw.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> number0) {
		gazaha2 >> name2;
		hazf << number0 << ' ' << name2 << endl;
		afrad1 << '0' << ' ' << name2 << endl;
	}
}
void etebars(string s) {
	system("cls");
	ifstream hazf11("etebars.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int number, nname;
	string name;
	bool find = true;
	while (hazf11 >> number&&find) {
		hazf11 >> name;
		if (name == s) {
			cout << "etebar felly shoma " << number << " toman mibashad." << endl;
			find = false;
		}
	}
	hazf11.close();
	ifstream hazf1("etebars.txt");
	setColor(5, 15);
	char foodname[100] = ("mablagh afzayesh etebar ra vared konid: ");
	start(foodname, 100);
	setColor(1, 15);
	cin >> nname;
	cout << endl;
	int number1;
	string name1;
	while (hazf1 >> number1) {
		hazf1 >> name1;
		if (name1 == s) {
			nname += number1;
			gazaha3 << nname << ' ' << name1 << endl;
		}
		else
			gazaha3 << number1 << ' ' << name1 << endl;
	}
	hazf1.close();
	gazaha3.close();
	int number0;
	string name2;
	ofstream hazf("afzayeshs.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> number0) {
		gazaha2 >> name2;
		hazf << number0 << ' ' << name2 << endl;
	}
	setColor(4, 15);
	char foodhazf[100] = ("hesab shoma paz az taid sharz mishavad");
	flasher(foodhazf, 1000);
	setColor(1, 15);
}
void rezervs(string s) {
	ifstream hazf11("etebars.txt");
	ofstream gazaha3("rezervs.txt", ios::app);
	ofstream gazaha4("gazaha2.txt", ios::trunc);
	int number, nnumber;
	int tnumber;
	string name, name1,name3;
	bool find = true;
	while (hazf11 >> number && find) {
		hazf11 >> name;
		if (name == s) {
			tnumber = number;
			cout << "etebar felly shoma " << number << " toman mibashad." << endl;
			find = false;
		}
	}
	
	setColor(5, 15);
	char foodname[100] = ("baray efzyesh eteber 1 ra varid konid \nbaray edame 2 ra vared konid");
	start(foodname, 100);
	setColor(1, 15);
		int m;
		cin >> m;
		if (m == 1)
			etebars(s);
		if (m == 2) {
			setColor(5, 15);
			char foodname[100] = ("gazaye mored nazar ra vared konid:");
			start(foodname, 100);
			setColor(1, 15);
			cin >> name1;
			ifstream re("gazahas.txt", ios::in);
			while (re >> name3) {
				re >> nnumber;
				if (name3 == name1) {
					if (nnumber <= tnumber) {
						tnumber -= nnumber;
						gazaha3 << name1 <<" "<<s<< endl;
					}
					else {
						setColor(4, 15);
						char foodhazf[100] = ("etebar shoma kafy nist.");
						flasher(foodhazf, 1000);
						setColor(1, 15);
					}
				}
			}
			ifstream hazf1("etebars.txt");
			int number1;
			string name11;
			while (hazf1 >> number1) {
				hazf1 >> name11;
				if (name11 == s) {
					gazaha4 << tnumber << ' ' << name11 << endl;
				}
				else
					gazaha4 << number1 << ' ' << name11 << endl;
			}
			re.close();
			gazaha4.close();
			int number0;
			string name2;
			ofstream hazf("etebars.txt");
			ifstream gazaha2("gazaha2.txt");
			while (gazaha2 >> number0) {
				gazaha2 >> name2;
				hazf << number0 << ' ' << name2 << endl;
			}
			setColor(5, 15);
			char foo1dname[100] = ("gazaye shoma kharidary shod");
			start(foo1dname, 100);
			setColor(1, 15);
			Sleep(1000);
			ifstream hazf1311("etebars.txt");
			while (hazf1311 >> number && find) {
				hazf1311 >> name;
				if (name == s)
					cout << "etebar felly shoma " << number << " toman mibashad." << endl;
			}
		}
}
void profilenames(string s) {
	system("cls");
	string  nname;
	{
		ifstream hazf12("loginstudent.txt",ios::in);
		ofstream gazaha3("gazaha2.txt", ios::trunc);
		string name, search_name;
		setColor(4, 15);
		char foodhazf[100] = ("name gadad karbary ra vared konid: ");
		start(foodhazf, 80);
		setColor(1, 15);
		cin >> nname;
		cout << endl;
		int number;
		while (hazf12 >> number) {
			hazf12 >> name;
			if (name == s) {
				gazaha3 << number << ' ' << nname << endl;
			}
			else
				gazaha3 << number << ' ' << name << endl;
		}
		hazf12.close();
		gazaha3.close();
		int number0;
		string name2;
		ofstream hazf("loginstudent.txt");
		ifstream gazaha2("gazaha2.txt");
		while (gazaha2 >> number0) {
			gazaha2 >> name2;
			hazf << number0 << ' ' << name2 << endl;
		}
	}
	{
		ifstream haz("etebars.txt");
		ofstream gazah("gazaha2.txt", ios::trunc);
		int numbe;
		string nam;
		while (haz >> numbe) {
			haz >> nam;
			if (nam == s) {
				gazah << numbe << ' ' << nname << endl;
			}
			else
				gazah << numbe << ' ' << nam << endl;
		}
		haz.close();
		gazah.close();
		int numb;
		string na;
		ofstream hazf("etebars.txt");
		ifstream gazaha2("gazaha2.txt");
		while (gazaha2 >> numb) {
			gazaha2 >> na;
			hazf << numb << ' ' << na << endl;
		}
	}
}
void changepsws(string s) {
	system("cls");
	ifstream hazf1("loginstudent.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int number, nname;
	string name;
	setColor(4, 15);
	char foodhazf[100] = ("password jadid ra vared konid: ");
	start(foodhazf, 80);
	setColor(1, 15);
	cin >> nname;
	cout << endl;
	while (hazf1 >> number) {
		hazf1 >> name;
		if (name == s) {
			gazaha3 << nname << ' ' << name << endl;
		}
		else
			gazaha3 << number << ' ' << name << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("loginstudent.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> number0) {
		gazaha2 >> name2;
		hazf << number0 << ' ' << name2 << endl;
	}
}
void moshahedegk() {
	
	ifstream file("gazahak.txt");
	string name;
	int price, j = 1;
	while (file >> name) {
		file >> price;
		cout << " " << j << "-" << name << "  " << price << endl;
		j++;
	}
}
void etebark(string s) {
	system("cls");
	ifstream hazf11("etebark.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int number, nname;
	string name;
	bool find = true;
	while (hazf11 >> number && find) {
		hazf11 >> name;
		if (name == s) {
			cout << "etebar felly shoma " << number << " toman mibashad." << endl;
			find = false;
		}
	}
	hazf11.close();
	ifstream hazf1("etebark.txt");
	setColor(4, 15);
	char foodhazf[100] = ("mablagh afzayesh etebar ra vared konid: ");
	start(foodhazf, 80);
	setColor(1, 15);
	cin >> nname;
	cout << endl;
	int number1;
	string name1;
	while (hazf1 >> number1) {
		hazf1 >> name1;
		if (name1 == s) {
			nname += number1;
			gazaha3 << nname << ' ' << name1 << endl;
		}
		else
			gazaha3 << number1 << ' ' << name1 << endl;
	}
	hazf1.close();
	gazaha3.close();
	int number0;
	string name2;
	ofstream hazf("afzayeshk.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> number0) {
		gazaha2 >> name2;
		hazf << number0 << ' ' << name2 << endl;
	}
	setColor(4, 15);
	char foodhazzf[100] = ("hesab shoma paz az taid sharz mishavad");
	flasher(foodhazzf, 1000);
	setColor(1, 15);
	Sleep(1000);
}
void rezervk(string s) {
	ifstream hazf11("etebark.txt");
	ofstream gazaha3("rezervk.txt", ios::app);
	ofstream gazaha4("gazaha2.txt", ios::trunc);
	int number, nnumber;
	int tnumber;
	string name, name1, name3;
	bool find = true;
	while (hazf11 >> number && find) {
		hazf11 >> name;
		if (name == s) {
			tnumber = number;
			cout << "etebar felly shoma " << number << " toman mibashad." << endl;
			find = false;
		}
	}
	setColor(4, 15);
	char foodhazf[100] = ("baray efzyesh eteber 1 ra varid konid \n baray edame 2 ra vared konid");
	start(foodhazf, 80);
	setColor(1, 15);
	int m;
	cin >> m;
	if (m == 1)
		etebark(s);
	if (m == 2) {
		setColor(4, 15);
		char foodhazf[100] = ("gazaye mored nazar ra vared konid:");
		start(foodhazf, 80);
		setColor(1, 15);
		cin >> name1;
		ifstream re("gazahak.txt", ios::in);
		while (re >> name3) {
			re >> nnumber;
			if (name3 == name1) {
				if (nnumber <= tnumber) {
					tnumber -= nnumber;
					gazaha3 << name1 <<" "<<s<< endl;
				}
				else {
					setColor(4, 15);
					char foodhazf[100] = ("etebar shoma kafy nist.");
					flasher(foodhazf, 1000);
					setColor(1, 15);
				}
			}
		}
		ifstream hazf1("etebark.txt");
		int number1;
		string name11;
		while (hazf1 >> number1) {
			hazf1 >> name11;
			if (name11 == s) {
				gazaha4 << tnumber << ' ' << name11 << endl;
			}
			else
				gazaha4 << number1 << ' ' << name11 << endl;
		}
		re.close();
		gazaha4.close();
		int number0;
		string name2;
		ofstream hazf("etebark.txt");
		ifstream gazaha2("gazaha2.txt");
		while (gazaha2 >> number0) {
			gazaha2 >> name2;
			hazf << number0 << ' ' << name2 << endl;
		}
		cout << "gazaye shoma kharidary shod";
		ifstream hazf1311("etebark.txt");
		while (hazf1311 >> number && find) {
			hazf1311 >> name;
			if (name == s)
				cout << "etebar felly shoma " << number << " toman mibashad." << endl;
		}
	}
}
void profilenamek(string s) {
	system("cls");
	string  nname;
	{
		ifstream hazf12("loginworker.txt", ios::in);
		ofstream gazaha3("gazaha2.txt", ios::trunc);
		string name, search_name;
		setColor(4, 15);
		char foodhazf[100] = ("name gadad karbary ra vared konid: ");
		start(foodhazf, 80);
		setColor(1, 15);
		cin >> nname;
		cout << endl;
		int number;
		while (hazf12 >> number) {
			hazf12 >> name;
			if (name == s) {
				gazaha3 << number << ' ' << nname << endl;
			}
			else
				gazaha3 << number << ' ' << name << endl;
		}
		hazf12.close();
		gazaha3.close();
		int number0;
		string name2;
		ofstream hazf("loginworker.txt");
		ifstream gazaha2("gazaha2.txt");
		while (gazaha2 >> number0) {
			gazaha2 >> name2;
			hazf << number0 << ' ' << name2 << endl;
		}
	}
	{
		ifstream haz("etebark.txt");
		ofstream gazah("gazaha2.txt", ios::trunc);
		int numbe;
		string nam;
		while (haz >> numbe) {
			haz >> nam;
			if (nam == s) {
				gazah << numbe << ' ' << nname << endl;
			}
			else
				gazah << numbe << ' ' << nam << endl;
		}
		haz.close();
		gazah.close();
		int numb;
		string na;
		ofstream hazf("etebark.txt");
		ifstream gazaha2("gazaha2.txt");
		while (gazaha2 >> numb) {
			gazaha2 >> na;
			hazf << numb << ' ' << na << endl;
		}
	}
}
void changepswk(string s) {
	system("cls");
	ifstream hazf1("loginworker.txt");
	ofstream gazaha3("gazaha2.txt", ios::trunc);
	int number, nname;
	string name;
	setColor(4, 15);
	char foodhazf[100] = ("password jadid ra vared konid: ");
	start(foodhazf, 80);
	setColor(1, 15);
	cin >> nname;
	cout << endl;
	while (hazf1 >> number) {
		hazf1 >> name;
		if (name == s) {
			gazaha3 << nname << ' ' << name << endl;
		}
		else
			gazaha3 << number << ' ' << name << endl;
	}
	hazf1.close();
	gazaha3.close();
	int   number0;
	string name2;
	ofstream hazf("loginworker.txt");
	ifstream gazaha2("gazaha2.txt");
	while (gazaha2 >> number0) {
		gazaha2 >> name2;
		hazf << number0 << ' ' << name2 << endl;
	}
}
void resids() {
	system("cls");
	string  nname;
	{
		ifstream hazf12("afzayeshs.txt");
		ifstream gazaha03("etebars.txt");
		string name, nam, search_name ,rezname;
		int number, numbe, choose , reznum;
		bool d = true;
		while (hazf12 >> number) {
			d = false;
			hazf12 >> name;
			ifstream rez("etebars.txt");
			while (rez >> reznum) {
				rez >> rezname;
				if (rezname == name) {
					if (reznum < number) {
						cout << name << " baray afzayesh etebae hesabash " << number << " sharzh karde taid mikonid?\n";
						cout << "baray taid 1 va baray rad 2 ra vared konid";
						cin >> choose;
						if (choose == 1) {
							ifstream gazaha03("etebars.txt");
							ofstream gazaha3("gazaha2.txt", ios::trunc);
							while (gazaha03 >> numbe) {
								gazaha03 >> nam;
								if (nam == name)
									gazaha3 << number << ' ' << nam << endl;
								else 
									gazaha3 << numbe << ' ' << nam << endl;
							}
							gazaha03.close();
							gazaha3.close();
							int number0;
							string name2;
							ofstream hazf("etebars.txt", ios::trunc);
							ifstream gazaha2("gazaha2.txt");
							while (gazaha2 >> number0) {
								gazaha2 >> name2;
								hazf << number0 << ' ' << name2 << endl;
							}
							hazf.close();
							gazaha2.close();
						}
					}
				}
			}			
		}
		if (d == true)
			cout << "residy baray taid nist.";
		Sleep(2000);
		hazf12.close();
		gazaha03.close();
		ofstream gazaa3("afzayeshs.txt", ios::trunc);
		gazaa3.close();
	}
}
void residk() {
	system("cls");
	string  nname;
	{
		ifstream hazf12("afzayeshk.txt");
		ifstream gazaha03("etebark.txt");
		string name, nam, search_name, rezname;
		int number, numbe, choose, reznum;
		bool d = true;
		while (hazf12 >> number) {
			d = false;
			hazf12 >> name;
			ifstream rez("etebark.txt");
			while (rez >> reznum) {
				rez >> rezname;
				if (rezname == name) {
					if (reznum < number) {
						cout << name << " baray afzayesh etebae hesabash " << number << " sharzh karde taid mikonid?\n";
						cout << "baray taid 1 va baray rad 2 ra vared konid";
						cin >> choose;
						if (choose == 1) {
							ifstream gazaha03("etebark.txt");
							ofstream gazaha3("gazaha2.txt", ios::trunc);
							while (gazaha03 >> numbe) {
								gazaha03 >> nam;
								if (nam == name)
									gazaha3 << number << ' ' << nam << endl;
								else
									gazaha3 << numbe << ' ' << nam << endl;
							}
							gazaha03.close();
							gazaha3.close();
							int number0;
							string name2;
							ofstream hazf("etebark.txt", ios::trunc);
							ifstream gazaha2("gazaha2.txt");
							while (gazaha2 >> number0) {
								gazaha2 >> name2;
								hazf << number0 << ' ' << name2 << endl;
							}
							hazf.close();
							gazaha2.close();
						}
					}
				}
			}
		}
		if (d == true)
			cout << "residy baray taid nist.";
		Sleep(2000);
		hazf12.close();
		gazaha03.close();
		ofstream gazaa3("afzayeshs.txt", ios::trunc);
		gazaa3.close();
	}
}
void rezerv() {
	system("cls");
	ifstream show("gazahas.txt");
	string food, rezerv, usr;
	int count[100] = { 0 };
	int a = 0,price;
	while (show >> food) {
		show >> price;
		ifstream rezerve("rezervs.txt");
		while (rezerve >> rezerv) {
			if (food == rezerv) {
				count[a]++;
			}
		}
		rezerve.close();
		a++;
	}
	show.close();
	ifstream chap("gazahas.txt");
	setColor(5, 15);
	char fooddhazf[100] = ("    rezerv daneshjo ha");
	start(fooddhazf, 80);
	setColor(1, 15);
	cout << endl;
	setColor(5, 15);
	char ffoodhazf[100] = ("  ghaza          tedad");
	start(ffoodhazf, 80);
	setColor(1, 15);
	cout << endl;
	for (int i = 0;chap >> food;i++) {
		chap >> price;
		if (count[i] != 0) {
			cout <<"  "<< food << "          " << count[i] << endl;
		}
	}
	cout << endl << endl;
	ifstream showe("gazahak.txt");
	string foode, rezerev;
	int counte[100] = { 0 };
	int j = 0, pricee;
	while (showe >> foode) {
		showe >> pricee;
		ifstream rezerve("rezervk.txt");
		while (rezerve >> rezerev) {
			if (foode == rezerev) {
				counte[j]++;
			}
		}
		rezerve.close();
		j++;
	}
	showe.close();
	ifstream chape("gazahas.txt");
	setColor(5, 15);
	char foodhaazf[100] = ("    rezerv karmand ha");
	start(foodhaazf, 80);
	setColor(1, 15);
	cout << endl;
	setColor(5, 15);
	char foodhazzf[100] = ("  ghaza          tedad");
	start(foodhazzf, 80);
	setColor(1, 15);
	cout << endl;
	for (int i = 0;chape >> foode;i++) {
		chape >> pricee;
		if (counte[i] != 0) {
			cout <<"  "<< food << "          " << count[i] << endl;
		}
	}
	cout << endl << endl;
}
void backup(int s,int y) {
	if (s == y) {
		string name;
		int price;
		ifstream show("gazahas.txt");
		ofstream show2("gazahas.backup.txt");
		while (show >> name) {
			show >> price;
			show2 << name << ' ' << price << endl;
		}
		ifstream showw("gazahak.txt");
		ofstream showw2("gazahak.backup.txt");
		while (showw >> name) {
			showw >> price;
			showw2 << name << ' ' << price << endl;
		}
		ifstream shoow("etebark.txt");
		ofstream shoow2("etebark.backup.txt");
		while (shoow >> name) {
			shoow >> price;
			shoow2 << name << ' ' << price << endl;
		}
		ifstream shhow("etebars.txt");
		ofstream shhow2("etebars.backup.txt");
		while (shhow >> name) {
			shhow >> price;
			shhow2 << name << ' ' << price << endl;
		}
		ifstream sshow("loginadmin.txt");
		ofstream sshow2("loginadmin.backup.txt");
		while (sshow >> name) {
			sshow >> price;
			sshow2 << name << ' ' << price << endl;
		}
		ifstream shsows("loginstudent.txt");
		ofstream shsows2("loginstudent.backup.txt");
		while (shsows >> name) {
			shsows >> price;
			shsows2 << name << ' ' << price << endl;
		}
		ifstream shqow("loginworker.txt");
		ofstream shqow2("loginworker.backup.txt");
		while (shqow >> name) {
			shqow >> price;
			shqow2 << name << ' ' << price << endl;
		}
		setColor(4, 15);
		char foodhazff[100] = ("bachup giriy kamel shod");
		flasher(foodhazff, 1000);
		setColor(1, 15);
		Sleep(1000);
	}
	else {
		setColor(4, 15);
		char foodhaazff[100] = ("dastresy taeed nashod");
		flasher(foodhaazff, 1000);
		setColor(1, 15);
		Sleep(1000);
	}
}
void bazgardany(int s, int y) {
	if (s == y) {
		string name;
		int price;
		ofstream show("gazahas.txt");
		ifstream show2("gazahas.backup.txt");
		while (show2 >> name) {
			show2 >> price;
			show << name << ' ' << price << endl;
		}
		ofstream showw("gazahak.txt");
		ifstream shwow2("gazahak.backup.txt");
		while (shwow2 >> name) {
			shwow2 >> price;
			showw << name << ' ' << price << endl;
		}
		ofstream shoow("etebark.txt");
		ifstream shoow2("etebark.backup.txt");
		while (shoow2 >> name) {
			shoow2 >> price;
			shoow << name << ' ' << price << endl;
		}
		ofstream shosw("etebars.txt");
		ifstream shosw2("etebars.backup.txt");
		while (shosw2 >> name) {
			shosw2 >> price;
			shosw << name << ' ' << price << endl;
		}
		ofstream shqow("loginadmin.txt");
		ifstream shqow2("loginadmin.backup.txt");
		while (shqow2 >> name) {
			shqow2 >> price;
			shqow << name << ' ' << price << endl;
		}
		ofstream shozw("loginstudent.txt");
		ifstream shozw2("loginstudent.backup.txt");
		while (shozw2 >> name) {
			shozw2 >> price;
			shozw << name << ' ' << price << endl;
		}
		ofstream shoaw("loginworker.txt");
		ifstream shoaw2("loginworker.backup.txt");
		while (shoaw2 >> name) {
			shoaw2 >> price;
			shoaw << name << ' ' << price << endl;
		}
		setColor(4, 15);
		char foodhazff[100] = ("bazgardany kamel shod");
		flasher(foodhazff, 1000);
		setColor(1, 15);
		Sleep(1000);
	}
	else {
		setColor(4, 15);
		char foodhaazff[100] = ("dastresy taeed nashod");
		flasher(foodhaazff, 1000);
		setColor(1, 15);
		Sleep(1000);
		setColor(4, 15);
	}

}
void showrezervs(string s) {
	system("cls");
	ifstream show("rezervs.txt");
	string food, name;
	int i = 1;
	bool is = true;
	while (show >> food) {
		show >> name;
		is = false;
		if (s == name) {
			cout << i << "-" << food << endl;
			i++;
		}
	}
	if (is == false)
		cout << "shoma rezervy nadarid.\n";
	cout << "baraye khoroog kelidu bezanid";
	int q;
	cin >> q;
}
void showrezervk(string s) {
	system("cls");
	ifstream show("rezervk.txt");
	string food, name;
	int i = 1;
	bool is = true;
	while (show >> food) {
		show >> name;
		is = false;
		if (s == name) {
			cout << i << "-" << food << endl;
			i++;
		}
	}
	if (is == false)
		cout << "shoma rezervy nadarid.\n";
	cout << "baraye khoroog kelidu bezanid";
	int q;
	cin >> q;
}