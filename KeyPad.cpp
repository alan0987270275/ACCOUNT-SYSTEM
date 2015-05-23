#include"KeyPad.h"


int Keypad::getnumberinput()
{
	int numberdata;
	cin >> numberdata;
	return numberdata;
}

string Keypad::getwordinput()
{
	char worddata[100];
	cin.ignore();
	cin.getline(worddata, 100, '\n');
	return worddata;
}