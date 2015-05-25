#ifndef SELL_H
#define SELL_H

#include"Transaction.h"
#include<string>
using namespace std;

class Sell :public Transaction
{
public:
	Sell(Screen &, Keypad &, DataBase &);
	virtual void Excute();
	void SaveFile(string, int, int);
private:
	string productname;
	int price;
	int quantity;
};


#endif