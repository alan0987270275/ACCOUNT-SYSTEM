#ifndef TRANSACTION_H
#define TRANSACTION_H

class Screen;
class Keypad;
class DataBase;

class Transaction
{
public:
	Transaction(Screen &, Keypad &, DataBase &);
	virtual ~Transaction(){};

	Screen &getscreen() const;
	Keypad &getkeypad() const;
	DataBase &getdatabase() const;

	virtual void Excute() = 0;

private:
	Screen &screen;
	Keypad &keypad;
	DataBase &database;
};




#endif