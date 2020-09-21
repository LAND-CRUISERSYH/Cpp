#include<iostream>
#include<fstream>

using namespace std;

/*
	1.二进制方式读文件主要利用流对象调用成员函数read
	2.函数原型: istream& read(char *buffer,int len)
		字符指针buffer指向内存中一段存储空间，len是读写的字节数
*/

//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test1()
//{
//	ifstream ifs;                              //创建流对象
//	ifs.open("person.txt", ios::in | ios::binary);      //打开文件
//	if (!ifs.is_open())                          //判断文件是否打开成功
//	{
//		cout << "文件读取失败" << endl;
//		return;
//	}
//	Person p;
//	ifs.read((char *)&p, sizeof(Person));
//	cout << "姓名: " << p.m_Name << "   " << "年龄: " << p.m_Age << endl;
//	ifs.close();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}