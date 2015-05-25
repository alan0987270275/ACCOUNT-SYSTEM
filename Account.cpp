#include"Account.h"

int Account::checkcount(0);
Account::Account(string theID, string thepassword, string thename, string theIDNumber, 
	string theEmail, string thephone, string theaddress)
:ID(theID), password(thepassword), name(thename), IDNumber(theIDNumber), Email(theEmail), phone(thephone), address(theaddress)
{
}

bool Account::validID(string userID)
{
	if (userID == ID)
		return true;
	else
		return false;
}

bool Account::validpassword(string userpassword)
{
	if (userpassword == password)
		return true;
	else
	{
		checkcount++;
		if (checkcount == 3)
		{
			Screen S;
			S.displayMessageLine("Goodbye!!");
			exit(EXIT_FAILURE);
		}
		return false;
	}
		
}

string Account::getID()
{
	return ID;
}