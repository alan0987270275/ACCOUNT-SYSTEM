#ifndef YZUSTORE_H
#define YZUSTORE_H

#include"DataBase.h"
#include"KeyPad.h"
#include"Screen.h"
class Transaction;

class YZUstore
{
public:
	YZUstore();
	void run();
private:
	Screen screen;
	Keypad keypad;
	DataBase database;
	Transaction *CreateTransaction(int);
	
	bool userAuthenticated;
	int currentAccount;
	void authenticateUser();
	void performTransactions(); 
	int displayMainMenu(); 
};


#endif