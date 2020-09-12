#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::istream;
using std::ostream;

struct Sales_data
{
	Sales_data();
	string name;
	unsigned sales_vol;
	double revenue;
	Sales_data &combine(const Sales_data &rhs);
	string isbn()const;
	double avg_price()const;
};

Sales_data add(const Sales_data &book1, const Sales_data &book2);
istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, const Sales_data &item);

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
	Person(string s, string add) :name(s), address(add) {}
};

istream &read_Person(istream &is, Person &p);
ostream &print_Person(ostream &os, const Person &p);

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

double Sales_data::avg_price() const
{
	return revenue / sales_vol;
}

Sales_data add(const Sales_data &book1, const Sales_data &book2)
{
	Sales_data sum = book1;
	sum.combine(book2);
	return sum;
}
istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.name >> item.sales_vol >> price;
	item.revenue = item.sales_vol*price;
	return is;
}
ostream &print(ostream &os, const Sales_data &item)
{
	os << item.name << " " << item.sales_vol << " " << item.revenue << " " << item.avg_price();
	return os;
}

istream &read_Person(istream &is, Person &p)
{
	is >> p.name >> p.address;
	return is;
}
ostream &print_Person(ostream &os, const Person &p)
{
	os << p.name << " " << p.address;
	return os;
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

	/*Sales_data total;
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
	}*/

	Sales_data total;
	if (read(cin, total))
	{
		Sales_data trans;
		while (read(cin, trans))
		{
			if (total.name == trans.name)
				total.combine(trans);
			else
			{
				print(cout, total);
				total = trans;
			}
		}
		print(cout, total);
	}
	else
	{
		std::cerr << "没有数据" << endl;
		return -1;
	}
	return 0;
}