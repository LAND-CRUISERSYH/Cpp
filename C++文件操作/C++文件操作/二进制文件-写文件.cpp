#include<iostream>
#include<fstream>

using namespace std;

/*
	1.打开方式要指定为 ios::binary
	2.二进制方式写文件主要利用流对象调用成员函数write
	3.函数原型: ostream& write(const char* buffer,int len);
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
//	ofstream ofs;								//创建流对象
//	ofs.open("person.txt", ios::out|ios::binary);             //以二进制形式打开文件
//	Person p = { "张三",18 };
//	ofs.write((const char*)&p, sizeof(Person));                   //写文件
//	ofs.close();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}