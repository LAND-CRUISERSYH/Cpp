#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Sales_data
{
	Sales_data();
	string name;
	unsigned sales_vol;
	double revenue;
	Sales_data &combine(const Sales_data &rhs);
	string isbn()const;
};

struct Person
{
	string name;
	string address;
	string put_name() const
	{
		return name;
	}
	string put_address() const
	{
		return address;
	}
};

Sales_data::Sales_data()
{
	sales_vol = 0;
	revenue = 0.0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	sales_vol += rhs.sales_vol;
	revenue += rhs.revenue;
	return *this;
}

int main(int argc, char **argv)
{
	/*Sales_data total;
	if (cin >> total.name >> total.sales_vol >> total.revenue)
	{
		Sales_data trans;
		while (cin >> trans.name >> trans.sales_vol >> trans.revenue)
		{
			if (total.name == trans.name)
			{
				total.sales_vol += trans.sales_vol;
				total.revenue += trans.revenue;
			}
			else
			{
				cout << total.name << " " << total.sales_vol << " " << total.revenue << endl;
				total = trans;
			}
		}
		cout << total.name << " " << total.sales_vol << " " << total.revenue << endl;
	}
	else
	{
		std::cerr << "没有数据" << endl;
		return -1;
	}*/

	Sales_data total;
	if (cin >> total.name >> total.sales_vol >> total.revenue)
	{
		Sales_data trans;
		while (cin >> trans.name >> trans.sales_vol >> trans.revenue)
		{
			if (total.name == trans.name)
			{
				total.combine(trans);
			}
			else
			{
				cout << total.name << " " << total.sales_vol << " " << total.revenue << endl;
				total = trans;
			}
		}
		cout << total.name << " " << total.sales_vol << " " << total.revenue << endl;
	}
	else
	{
		std::cerr << "没有数据" << endl;
		return -1;
	}
	return 0;
}