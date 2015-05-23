#ifndef DATABASE_H
#define DATABASE_H

#include<vector>
#include"Account.h"
#include"Commodities.h"
#include<fstream>
using namespace std;

class DataBase
{
public:
	DataBase();
	void loadAccountfile();
	void loadCommodities();
	bool authenticateUser(string,string);
	string getproductname(string);
	int getprice(string);
	int getquantity(string);
	void decreasequantity(string, int);
private:
	vector<Account> accounts;
	vector<Commodities> commodities;
	Account *getAccount(string);
	Commodities *getCommodities(string);
};

#endif