#pragma once

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Man
{ protected:
	int age;
	int height;
	string sex;
	string ID;

public:
	
	void setMan(int _age, int _height, string _sex, string _ID);
	void getMan();
	Man();
	Man(int _age, int _height, string _sex, int _ID);

};

