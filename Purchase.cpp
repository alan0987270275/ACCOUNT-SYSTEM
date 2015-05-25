#include"Purchase.h"
#include "Screen.h" 
#include "DataBase.h" 
#include "Keypad.h" 

Purchase::Purchase(int decreaseamount, Screen &thescreen, Keypad &thekeypad, DataBase &thedatabase)
:Transaction(thescreen, thekeypad, thedatabase), amount(decreaseamount)
{
}
void Purchase:: Excute()
{
	bool tansactionCanceld = false;

	DataBase &database = getdatabase();
	Screen &screen = getscreen();
	Keypad &keypad = getkeypad();

	do
	{
		screen.displayquestion("Please choose the product ID you want to buy:");
		int select = keypad.getnumberinput();
		int useramount = keypad.getnumberinput();

		int currentquantity = database.getquantity(select);

		if (currentquantity - useramount > 0)
		{
			database.decreasequantity(select, useramount);
			screen.displayMessageLine("Successful pruchase!!");
			tansactionCanceld = true;
		}
		else
		{
			tansactionCanceld = true;
			screen.displayMessageLine("Product has been sold!!");
		}
		
	} while (!tansactionCanceld);
}
