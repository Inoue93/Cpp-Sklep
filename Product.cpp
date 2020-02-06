#include "pch.h"
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;


void Product::setProduct(string _name, int _price)
{
	name = _name;
	price = _price;
}

void Product::getProduct()
{
	cout << "Nazwa produktu: " << name << "\n Cena: " << price << endl;
}

Product::Product()
{
	name = "0";
	price = 0;
}


Product::Product(string _name, int _price)
{
	name = _name;
	price = _price;
}
