#include"Screen.h"

void Screen::displayTile() const
{
	cout << "  - - - - - - - - - - - - - - - - - - " << endl;
	cout << "|  Welcome to CES auction system !!! |" << endl;
	cout << "  - - - - - - - - - - - - - - - - - -  " << endl;
}

void Screen::displayMessageLine(string message) const
{
	cout << message << endl;
}

void Screen::displayTableTile() const
{
	cout << setw(5) << "Product ID" << "    " << left
		<< setw(18) << "Productname" << left
		<< setw(13) << "Price"<<left
		<< setw(14) << "Quality" <<left
		<< setw(10) << "Seller" 
		<< setw(1) << "Buyer" << endl;

	/*cout << "Product ID" << left << setw(5) << " " << "Productname" << setw(7) << " "
		<< "Price" << setw(4) << " " << "Quality" << setw(4) << " " << "Seller" << setw(2) << " " << "Buyer" << endl;*/
}

void Screen::displayTable(int count, string productname, int price, int quantity, string seller, string buyer) const
{
	/*cout << left << setw(5)<<" " << count << left << setw(10) << " " << productname << setw(13) << " "
		<< price << setw(8) << " " << quantity << setw(7) << " " << seller << setw(5) << " " << buyer << endl;*/
	cout << right<<setw(6) << count << "    " << left
		<< setw(15) << productname << left
		<< setw(25) << price << left
		<< setw(14) << quantity << left
		<< setw(10) << seller
		<< setw(1) << buyer << endl;
}