#include<iostream>
#include<string>
using namespace std;

//C++类中的成员可以是另一个类的对象，我们称该成员为对象成员

//class Phone
//{
//public:
//	Phone(string name) :pName(name) { cout << "手机的构造函数" << endl; }
//	~Phone() { cout << "手机的析构函数" << endl; }
//
//	string pName;
//};
//class Man
//{
//public:
//	Man(string Name, string p) :name(Name), phone(p) { cout << "人的构造函数" << endl; }
//	~Man() { cout << "人的析构函数" << endl; }
//
//	string name;
//	Phone phone;
//};
//
////当其他类对象作为本类成员，构造先构造类对象成员，在构造类自身(先有胳膊腿再有人)
////析构的顺序与构造相反
//
//void test1()
//{
//	Man m("张三", "苹果");
//	cout << m.name << " " << m.phone.pName << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}