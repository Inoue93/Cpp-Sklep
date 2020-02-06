#include "pch.h"
#include "Female.h"
#include <iostream>
#include <string>

using namespace std;

void Female::setFemale(string _name, string _surname, string _basket)
{
	name = _name;
	surname = _surname;
	basket = _basket;
}

void Female::getFemale()
{
	cout << "Imiê: " << name << "\nNazwisko: " << surname << "\nKosz: " << basket << endl;
}


Female::Female()
{
	name = "0";
	surname = "0";
	basket = "0";

}


Female::Female(string _name, string _surname, int _age, int _height, string _sex, string _ID)
{
	name = _name;
	surname = _surname;
	age = _age;
	height = _height;
	sex = _sex;
	ID = _ID;
}

