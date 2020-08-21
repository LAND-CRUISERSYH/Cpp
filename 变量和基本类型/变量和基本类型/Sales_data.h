#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
struct Book
{
	std::string name;
	double price = 0;
	unsigned sales_volume = 0;
	double revenue = 0;
};
#endif // !SALES_DATA_H

