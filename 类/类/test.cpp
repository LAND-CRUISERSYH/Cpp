//#include<iostream>
//#include<string>
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::istream;
//using std::ostream;
//
//class Sales_data
//{
//private:	
//	string name;
//	unsigned sales_vol;
//	double revenue;
//	double avg_price()const;
//	friend Sales_data add(const Sales_data &book1, const Sales_data &book2);
//	friend istream &read(istream &is, Sales_data &item);
//	friend ostream &print(ostream &os, const Sales_data &item);
//public:
//	Sales_data();
//	Sales_data &combine(const Sales_data &rhs);
//	string isbn()const { return name; };
//};
//
//class Person
//{
//private:
//	string name;
//	string address;
//	friend istream &read_Person(istream &is, Person &p);
//	friend ostream &print_Person(ostream &os, const Person &p);
//public:
//	string put_name() const{return name;}
//	string put_address() const{return address;}
//	Person(string s, string add) :name(s), address(add) {}
//};
//
//Sales_data::Sales_data()
//{
//	sales_vol = 0;
//	revenue = 0.0;
//}
//
//Sales_data& Sales_data::combine(const Sales_data &rhs)
//{
//	sales_vol += rhs.sales_vol;
//	revenue += rhs.revenue;
//	return *this;
//}
//
//double Sales_data::avg_price() const
//{
//	return revenue / sales_vol;
//}
//
//Sales_data add(const Sales_data &book1, const Sales_data &book2)
//{
//	Sales_data sum = book1;
//	sum.combine(book2);
//	return sum;
//}
//istream &read(istream &is, Sales_data &item)
//{
//	double price = 0;
//	is >> item.name >> item.sales_vol >> price;
//	item.revenue = item.sales_vol*price;
//	return is;
//}
//ostream &print(ostream &os, const Sales_data &item)
//{
//	os << item.name << " " << item.sales_vol << " " << item.revenue << " " << item.avg_price();
//	return os;
//}
//
//istream &read_Person(istream &is, Person &p)
//{
//	is >> p.name >> p.address;
//	return is;
//}
//ostream &print_Person(ostream &os, const Person &p)
//{
//	os << p.name << " " << p.address;
//	return os;
//}
//
//int main(int argc, char **argv)
//{
//	/*Sales_data total;
//	if (cin >> total.name >> total.sales_vol >> total.revenue)
//	{
//		Sales_data trans;
//		while (cin >> trans.name >> trans.sales_vol >> trans.revenue)
//		{
//			if (total.name == trans.name)
//			{
//				total.sales_vol += trans.sales_vol;
//				total.revenue += trans.revenue;
//			}
//			else
//			{
//				cout << total.name << " " << total.sales_vol << " " << total.revenue << endl;
//				total = trans;
//			}
//		}
//		cout << total.name << " " << total.sales_vol << " " << total.revenue << endl;
//	}
//	else
//	{
//		std::cerr << "没有数据" << endl;
//		return -1;
//	}*/
//
//	/*Sales_data total;
//	if (cin >> total.name >> total.sales_vol >> total.revenue)
//	{
//		Sales_data trans;
//		while (cin >> trans.name >> trans.sales_vol >> trans.revenue)
//		{
//			if (total.name == trans.name)
//			{
//				total.combine(trans);
//			}
//			else
//			{
//				cout << total.name << " " << total.sales_vol << " " << total.revenue << endl;
//				total = trans;
//			}
//		}
//		cout << total.name << " " << total.sales_vol << " " << total.revenue << endl;
//	}
//	else
//	{
//		std::cerr << "没有数据" << endl;
//		return -1;
//	}*/
//
//	Sales_data total;
//	if (read(cin, total))
//	{
//		Sales_data trans;
//		while (read(cin, trans))
//		{
//			if (total.isbn() == trans.isbn())
//				total.combine(trans);
//			else
//			{
//				print(cout, total);
//				total = trans;
//			}
//		}
//		print(cout, total);
//	}
//	else
//	{
//		std::cerr << "没有数据" << endl;
//		return -1;
//	}
//	return 0;
//}
/*--------------------------------------------------------------------------------*/
#include<iostream>
#include"Screen.h"

using namespace std;

int main()
{
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	myScreen.move(4, 1).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";

	return 0;
}