#ifndef PURCHASE_H
#define PURCHASE_H

#include"Transaction.h"
#include<string>
using namespace std;

class Purchase : public Transaction
{
public:
	Purchase(int, Screen &, Keypad &, DataBase &);
	virtual void Excute();
private:
	int amount;//quantity that user input
	
};

#endif