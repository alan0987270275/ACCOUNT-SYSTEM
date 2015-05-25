#include"YZUstore.h"
#include"Transaction.h"
#include"Purchase.h"
#include"Sell.h"

enum MenuOption { LOGIN= 1, POST, VIST};

YZUstore::YZUstore()
:userAuthenticated(false), currentAccount(NULL)
{
}

void YZUstore::run()
{
	int select;
	do
	{
		select = displayMainMenu();

		if (select<0 || select>3)
			screen.displayMessageLine("You enter the wrong number!!");
		switch (select)
		{
		case 1:
			//To login
		case 2:
		case 3:
			//Use transcation to do
		default:
			break;
		}
		


	} while (select != 0);
}

void YZUstore::authenticateUser()
{

}

void YZUstore::performTransactions()
{

}
int YZUstore::displayMainMenu()
{
	screen.displayTile();
	screen.displayMessageLine("Please select the action you want to perform");
	screen.displayMessageLine("(1) Login");
	screen.displayMessageLine("(2) Post auction items");
	screen.displayMessageLine("(3) Visit the website commodities");
	screen.displayMessageLine("(0) Exit");
	return keypad.getnumberinput();
}
