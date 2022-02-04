#include <iostream>
#include <Windows.h>
#include "chap.h"
using namespace std;
int lenght, k;
void chap(char  s[], int q) {
	lenght = 0;
	for (int i = 0; s[i] != '\0';i++) {
		lenght++;
	}
	system("cls");
	for (int i = 0;i < lenght;i++) {
		cout << s[i];
		Sleep(q);
	}
	for (k = 0;k < 60;k++) {
		system("cls");
		for (int i = 0;i < k;i++)
			cout << " ";
		for (int i = 0;i < lenght;i++)
			cout << s[i];
	}
	for (int i = lenght;i >= 0;i--) {
			system("cls");
			for (int l = 0;l <= k;l++) {
				cout << " ";
			}
			for (int u = 0;u < i;u++)
				cout << s[u];
			Sleep(q);
	}
}
void start(char  s[], int q) {
	lenght = 0;
	for (int i = 0; s[i] != '\0';i++) {
		lenght++;
	}
	for (int i = 0;i < lenght;i++) {
		cout << s[i];
		Sleep(q);
	}
}
void end(char s[], int q) {
	lenght = 0;
	for (int i = 0; s[i] != '\0';i++) {
		lenght++;
	}
	for (int i = lenght;i >= 0;i--) {
		system("cls");
		for (int u = 0;u < i;u++)
			cout << s[u];
		Sleep(q);
	}
}
void flasher(char s[], int q) {
	for (int g = 0;g < 2;g++) {
		system("cls");
			for (int h = 0;h < k;h++) {
				cout << ' ';
			}
			for (int i = 0; s[i] != '\0';i++) {
				cout << s[i];
			}
			Sleep(q);
			system("cls");
			Sleep(q);
	}
}
void setColor(int textColor, int backColor ) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	int colorAttribute = backColor << 4 | textColor;
	SetConsoleTextAttribute(consoleHandle, colorAttribute);
	/*	0 = Black       8 = Gray
		1 = Blue        9 = Light Blue
		2 = Green       10 = Light Green
		3 = Aqua        11 = Light Aqua
		4 = Red         12 = Light Red
		5 = Purple      13 = Light Purple
		6 = Yellow      14 = Light Yellow
		7 = White       15 = Bright White*/
}