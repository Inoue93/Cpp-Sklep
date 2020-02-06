#include "pch.h"
#include "Male.h"


void Male::setMale(string _name, string _surname, string _basket)
{
	name = _name;
	surname = _surname;
	basket = _basket;
}

void Male::getMale()
{
	cout << "Imiê: " << name << "\nNazwisko: " << surname << "\nKosz: " << basket << endl;
}


Male::Male()
{
	name = "0";
	surname = "0";
	basket = "0";

}


Male::Male(string _name, string _surname, int _age, int _height, string _sex, string _ID)
{
	name = _name;
	surname = _surname;
	age = _age;
	height = _height;
	sex = _sex;
	ID = _ID;
}
