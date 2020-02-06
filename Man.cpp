#include "pch.h"
#include "Man.h"


void Man::setMan(int _age, int _height, string _sex, string _ID)
{
	age = _age;
	height = _height;
	sex = _sex;
	ID = _ID;
}

void Man::getMan()
{
	cout << "Wiek: " << age << "\nWysokoœæ: " << height << "\nP³eæ: " << sex << "\nPesel: " << ID << endl;

}


Man::Man()
{
	age = 0;
	height = 0;
	sex = "0";
	ID = "0";

	cout << "Wiek: " << age << "\nWysokoœæ: " << height << "\nP³eæ: " << sex << "\nPesel: " << ID << endl;
}

Man::Man(int _age, int _height, string _sex, int _ID)
{
	age = _age;
	height = _height;
	sex = _sex;
	ID = _ID;
	ID = _ID;
}

