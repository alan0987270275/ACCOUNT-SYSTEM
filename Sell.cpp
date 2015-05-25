#include"Sell.h"
#include"Screen.h"
#include"KeyPad.h"
#include"DataBase.h"


Sell::Sell(Screen &thescreen, Keypad &thekeypad, DataBase &thedatabase)
:Transaction(thescreen,thekeypad,thedatabase)
{
}

void Sell::Excute()
{
	
	bool tansactionCanceld = false;

	DataBase &database = getdatabase();
	Screen &screen = getscreen();
	Keypad &keypad = getkeypad();

	do
	{
		screen.displayquestion("Please input the product name you want to sell: ");
		string userproductname = keypad.getwordinput();
		screen.displayquestion("Please input the price of the product: ");
		int userprice = keypad.getnumberinput();
		screen.displayquestion("Please input the quantity of the product: ");
		int userquantity = keypad.getnumberinput();
		database.psuh_backCommodities(userproductname, userprice, userquantity);
		SaveFile(userproductname, userprice, userquantity);
		tansactionCanceld = true;

	} while (!tansactionCanceld);

}

void Sell::SaveFile(string saveproduct, int saveprice, int savequantity)
{
	
	fstream writefile("commodities.txt", ios::out | ios::binary|ios::app);
	
	writefile.write(reinterpret_cast< char * >(&saveproduct), sizeof(saveproduct));
	writefile.write(reinterpret_cast< char * >(&saveprice), sizeof(saveprice));
	writefile.write(reinterpret_cast< char * >(&savequantity), sizeof(savequantity));
	writefile.close();
}