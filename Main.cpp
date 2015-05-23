// Driver program for the YZU store.
#include"Screen.h"
#include"KeyPad.h"

int main()
{
	Screen S;
	Keypad K;
	S.displayTile();
	
	S.displayMessageLine("INPUT: ");
	string productname = K.getwordinput();
	S.displayMessageLine("INPUT: ");
	int price = K.getnumberinput();
	S.displayMessageLine("INPUT: ");
	int quantity = K.getnumberinput();
	S.displayMessageLine("INPUT: ");
	string buyer = K.getwordinput();
	S.displayMessageLine("INPUT: ");
	string seller = K.getwordinput();
	S.displayTableTile();
	S.displayTable(1, productname, price, quantity, buyer, seller);
	system("pause");
}