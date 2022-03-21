#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void findANDreplace(char* str, char* resault);
void convert(float y, char* str);

int main()
{
	setlocale(LC_ALL, "RUS");
	float y, z;
	cout << "Введите y: ";
	cin >> y;
	cout << "Введите z: ";
	cin >> z;
	char res[50];
	convert(y, res);
	cout << res << endl;
	char* str1 = new char[100];
	char* str2 = new char[110];
	strcpy(str1, "Artem KARAsAA@WA");
	findANDreplace(str1, str2);
	cout << str1 << endl;
	cout << str2 << endl;
	delete[]str1;
	delete[]str2;
}
void convert(float y, char* str)
{
	double x = sin(3 * y) + 16.5;
	sprintf(str, "%08.8f = sin(3* %08.8f)+16.5", x, y);
}

void findANDreplace(char* str_l, char* resault_l) {
	memset(resault_l, 0, sizeof(char) * 100);

	char exchange[] = " A-A-A ";

	char str[250] = {};
	for (short i = 0; i < strlen(str_l); i++) {
		str[i] = str_l[i];
	}

	int i = 0;

	int address = strcspn(str, "@");
	char str1[250] = {};
	char str2[250] = {};

	for (int i = 0; i < address; i++) {
		str1[i] = str[i];
	}

	for (int i = address + 1, ia = 0; i < strlen(str); i++, ia++) {
		str2[ia] = str[i];
	}

	memset(str, 0, sizeof(char) * 250);
	char res[250] = {};
	int iii = 0;
	char str_t[100] = {};
	char str_t2[100]  = {};
	int pass = 0;
	for ( ;i < strlen(str1); ) {
		strncpy(str, i + str1, 50);
		iii = strcspn(str, "A");
		strncpy(str_t, i + str, iii);
		i = i + iii+1;
		cout << str1[i]<<endl;
	}

	/*for (; i < ii - 1;) {
		strncpy(str1, i + str, 50);
		iii = strcspn(str1, " ");

		i = i + iii + 1;
		if (static_cast<int>('А') <= static_cast<int>(str[i]) && static_cast<int>('Я') >= static_cast<int>(str[i])) {
			if (i > ii) break;
			addres = i;
		}
	}

	char str2[250] = {};
	strncpy(str2, (addres)+str, 50);
	short iii_p = strcspn(str2, " ");
	short b = addres + iii_p;
	short a = addres;

	char end_resault[250] = {};
	char addstr[] = { "Кукушечка" };
	strncpy(end_resault, str, a);
	strcat(end_resault, addstr);
	strncpy(str1, b + str, 50);
	strcat(end_resault, str1);

	for (int i = 0; i < strlen(end_resault); i++)
	{
		resault_l[i] = end_resault[i];
	}*/
}