#pragma once

#include <iostream>
#include <string>
#include "Man.h"

using namespace std;


class Female:public Man 
{
	string name;
	string surname;
	string basket;
public:
	void setFemale(string _name, string _surname, string _basket );
	void getFemale();
	Female();
	Female(string _name, string _surname, int _age, int _height, string _sex, string _ID);
};

