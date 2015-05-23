#include"Commodities.h"

Commodities::Commodities(string theproductname, int theprice, int thequantity)
:productname(theproductname), price(theprice), quantity(thequantity)
{
}

string Commodities::getproductname()
{
	return productname;
}
int Commodities::getprice()
{
	return price;
}
int Commodities::getquantity()
{
	return quantity;
}
void Commodities::decreasequantity(int amount)
{
	quantity -= amount;
}