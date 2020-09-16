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
#include<string>
#include<vector>
//#include"Screen.h"

using namespace std;

class Y;
class X
{
	Y *p = NULL;
};

class Y
{
	X obj;
};

class NoDefault
{
public:
	NoDefault(int i) :item(i) {}
	int item;
};

class C
{
public:
	C(NoDefault temp = 6) :obj(temp) {}
private:
	NoDefault obj;
};

class Sales_data
{
public:
	Sales_data(string s, unsigned v, double p) :name(s), slae_vol(v), revenue(p*v) { cout << "三个参数的构造函数" << endl; }
	void display() const;
	Sales_data() :Sales_data("计算机操作系统", 10, 50) { cout << "计算机操作系统" << endl; }
	Sales_data(string s) :Sales_data(s, 10, 60) { cout << "计算机网络" << endl; }
	Sales_data(istream &is) :Sales_data() { read(is, *this); cout << "cin构造函数" << endl; }
	istream &read(istream &is, Sales_data &item);
private:
	string name;
	unsigned slae_vol;
	double revenue;
};

void Sales_data::display() const
{
	cout << "书名" << name << endl;
	cout << "销量" << slae_vol << endl;
	cout << "销售额" << revenue << endl;
}

istream& Sales_data::read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.name >> item.slae_vol >> price;
	item.revenue = item.slae_vol*price;
	return is;
}

//int main()
//{
//	/*Screen myScreen(5, 5, 'X');
//	myScreen.move(4, 0).set('#').display(cout);
//	myScreen.move(4, 1).set('#').display(cout);
//	cout << "\n";
//	myScreen.display(cout);
//	cout << "\n";*/
//
//	/*Sales_data book1("C++ Primer", 10, 50);
//	book1.display();*/
//
//	/*Sales_data book2;
//	book2.display();*/
//
//	/*Sales_data book3("计算机网络");
//	book3.display();*/
//
//	/*Sales_data book4(cin);
//	book4.display();*/
//
//	C c;
//	vector<C> vec(10);
//	return 0;
//}