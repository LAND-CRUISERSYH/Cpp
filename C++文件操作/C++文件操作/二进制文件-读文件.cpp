#include<iostream>
#include<fstream>

using namespace std;

/*
	1.�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
	2.����ԭ��: istream& read(char *buffer,int len)
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
//	ifstream ifs;                              //����������
//	ifs.open("person.txt", ios::in | ios::binary);      //���ļ�
//	if (!ifs.is_open())                          //�ж��ļ��Ƿ�򿪳ɹ�
//	{
//		cout << "�ļ���ȡʧ��" << endl;
//		return;
//	}
//	Person p;
//	ifs.read((char *)&p, sizeof(Person));
//	cout << "����: " << p.m_Name << "   " << "����: " << p.m_Age << endl;
//	ifs.close();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}