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

Account * DataBase::getAccount(string IDname)
{
	for (size_t i = 0; i < accounts.size(); i++)
	{
		if (accounts[i].getID == IDname)
			return &accounts[i];
	}
	return NULL;
}

Commodities * DataBase::getCommodities(string productname)
{
	for (size_t i = 0; i < commodities.size(); i++)
	{
		if (commodities[i].getproductname==productname)
			return &commodities[i];
	}
	return NULL;
}

bool DataBase::authenticateUser(string, string)
{

}

string DataBase::getproductname(string)
{

}

int DataBase::getprice(string)
{

}

int DataBase::getquantity(string)
{

}

void DataBase::decreasequantity(string, int)
{

}