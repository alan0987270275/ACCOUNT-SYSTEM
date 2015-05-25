#include"DataBase.h"

DataBase::DataBase()
{
	loadAccountfile();
	loadCommodities();
}

void DataBase::loadAccountfile()
{
	fstream readfile("member.txt", ios::in | ios::binary);
	string RID; string Rpassword; string Rname;
	string RIDNumber;string REmail;string Rphone;string Raddress;

	for (int i = 0; i < readfile.eof(); i++)
	{
		readfile.read(reinterpret_cast< char * >(&RID), sizeof(RID));
		readfile.read(reinterpret_cast< char * >(&Rpassword), sizeof(Rpassword));
		readfile.read(reinterpret_cast< char * >(&Rname), sizeof(Rname));
		readfile.read(reinterpret_cast< char * >(&RIDNumber), sizeof(RIDNumber));
		readfile.read(reinterpret_cast< char * >(&REmail), sizeof(REmail));
		readfile.read(reinterpret_cast< char * >(&Rphone), sizeof(Rphone));
		readfile.read(reinterpret_cast< char * >(&Raddress), sizeof(Raddress));
		Account tempaccount(RID, Rpassword, Rname, RIDNumber, REmail, Rphone, Raddress);
		accounts.push_back(tempaccount);
	}
	readfile.close();
}

void DataBase::loadCommodities()
{
	fstream readfile("commodities.txt", ios::in | ios::binary);
	string Rproductname;
	int Rprice;
	int Rquantity;
	for (size_t i = 0; i < readfile.eof(); i++)
	{
		readfile.read(reinterpret_cast< char * >(&Rproductname), sizeof(Rproductname));
		readfile.read(reinterpret_cast< char * >(&Rprice), sizeof(Rprice));
		readfile.read(reinterpret_cast< char * >(&Rquantity), sizeof(Rquantity));
		Commodities tempcommoditiy(Rproductname, Rprice, Rquantity);
		commodities.push_back(tempcommoditiy);
	}
	readfile.close();
}

void DataBase::push_backAccount(string theID, string thepassword, string thename, string theIDNumber, 
	string theEmail, string thephone, string theaddress)
{
	Account tempaccount(theID, thepassword, thename, theIDNumber, theEmail, thephone, theaddress);
	accounts.push_back(tempaccount);
}

void DataBase::psuh_backCommodities(string theproductname, int theprice, int thequantity)
{
	Commodities tempcommoditiy(theproductname, theprice, thequantity);
	commodities.push_back(tempcommoditiy);
}

Account * DataBase::getAccount(string IDname)
{
	for (size_t i = 0; i < accounts.size(); i++)
	{
		string tempaccount = accounts[i].getID();
		if (tempaccount== IDname)
			return &accounts[i];
	}
	return NULL;
}

Commodities * DataBase::getCommodities(int productID)
{
	//for (size_t i = 0; i < commodities.size(); i++)
	//{
	//	if (commodities[i].getproductname==productname)
	//		return &commodities[i];
	//}
	if (productID > 0)
		return &commodities[productID - 1];
	else 
		return NULL;
}

bool DataBase::authenticateUser(string userID, string userpassword)
{
	Account *userptr = getAccount(userID);

	if (userptr != NULL)
		return userptr->validID(userpassword);
	else
		return false;
}

string DataBase::getID(string userID)
{
	Account *userptr = getAccount(userID);
	return userptr->getID();
}

string DataBase::getproductname(int productID)
{
	Commodities *userComptr = getCommodities(productID);
	return userComptr->getproductname();
}

int DataBase::getprice(int productID)
{
	Commodities *userComptr = getCommodities(productID);
	return userComptr->getprice();
}

int DataBase::getquantity(int productID)
{
	Commodities *userComptr = getCommodities(productID);
	return userComptr->getquantity();
}
void DataBase::decreasequantity(int productID, int amount)
{
	Commodities *userComptr = getCommodities( productID);
	userComptr->decreasequantity(amount);
}