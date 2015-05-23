#ifndef SCREEN_H
#define SCREEN_H

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Screen
{
public:
	void displayTile() const;
	void displayMessageLine(string) const;
	void displayTableTile() const;
	void displayTable(int, string, int, int, string, string) const;
};

#endif