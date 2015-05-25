#include"Transaction.h"
#include"Screen.h"
#include"KeyPad.h"
#include"DataBase.h"


Transaction::Transaction(Screen &thescreen, Keypad &thekeypad, DataBase &userdatabase)
:screen(thescreen), keypad(thekeypad), database(userdatabase)
{
}


Screen &Transaction::getscreen() const
{
	return screen;
}

Keypad &Transaction::getkeypad() const
{
	return keypad;
}

DataBase &Transaction::getdatabase() const
{
	return database;
}