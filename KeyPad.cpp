#include"KeyPad.h"


int Keypad::getnumberinput()
{
	int datanumber;
	cin >> datanumber;
	return datanumber;
}

string Keypad::getwordinput()
{
	char worddata[100];
	cin.ignore();
	cin.getline(worddata, 100, '\n');
	return worddata;
}