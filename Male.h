#pragma once

#include <iostream>
#include <string>
#include "Man.h"

using namespace std;

class Male :public Man
{
	string name;
	string surname;
	string basket;
public:
	void setMale(string _name, string _surname, string _basket);
	void getMale();
	Male();
	Male(string _name, string _surname, int _age, int _height, string _sex, string _ID);
};


