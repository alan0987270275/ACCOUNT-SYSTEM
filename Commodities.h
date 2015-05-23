#ifndef COMMODITIES_H
#define COMMODITIES_H

#include<string>
using namespace std;

class Commodities
{
public:
	Commodities(string, int, int);
	string getproductname();
	int getprice();
	int getquantity();
	void decreasequantity(int);
private:
	string productname;
	int price;
	int quantity;
};


#endif