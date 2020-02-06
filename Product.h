#pragma 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product
{
	string name;
	int price;
	static vector <Product> VProducts;

public:
	void setProduct(string _name, int _price);
	void getProduct();
	Product();
	Product(string _name, int _price);

	void VProducts();
};

