#include<iostream>
#include<fstream>

using namespace std;

/*
	1.�򿪷�ʽҪָ��Ϊ ios::binary
	2.�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
	3.����ԭ��: ostream& write(const char* buffer,int len);
		�ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���
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
//	ofstream ofs;								//����������
//	ofs.open("person.txt", ios::out|ios::binary);             //�Զ�������ʽ���ļ�
//	Person p = { "����",18 };
//	ofs.write((const char*)&p, sizeof(Person));                   //д�ļ�
//	ofs.close();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}