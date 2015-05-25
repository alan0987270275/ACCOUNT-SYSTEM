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
	void push_backAccount(string, string, string, string, string, string, string);
	void psuh_backCommodities(string, int, int);
	string getID(string);
	string getproductname(int);
	int getprice(int);
	int getquantity(int);
	void decreasequantity(int, int);
private:
	vector<Account> accounts;
	vector<Commodities> commodities;
	Account *getAccount(string);
	Commodities *getCommodities(int);
};

#endif