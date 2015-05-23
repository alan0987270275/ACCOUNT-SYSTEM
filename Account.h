#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>
#include"Screen.h"
using namespace std;

class Account
{
public: 
	Account(string, string, string, string, string, string, string);
	bool validID(string);
	bool validpassword(string);
	string getID();

private:
	static int checkcount;
	string ID;
	string password;
	string name;
	string IDNumber;
	string Email;
	string phone;
	string address; 
};

#endif