#include<iostream>
#include<string>

using namespace std;

/*
	1.��������ظ���:�����е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
	2.���������Ҳ���Է�����������
	3.�������õ��������͵ı��ʽ��������ǲ����ܸı��
	4.�����������������
	5.������������ؿ�������Զ�����������(ͨ���������ó�Ա�������������������)
	6.������������������Ԫ����ʵ������Զ�����������
	7.����ǰ�õ���������������ã����غ��õ������������ֵ
	8.�������������()Ҳ��������
*/

//class Man
//{
//public:
//	Man():a(10),b(20){}
//	Man operator+(Man &m);           //ͨ����Ա��������+��
//	Man operator+(int num);
//	int a;
//	int b;
//};
//
//class MyInterger
//{
//	friend ostream& operator<<(ostream &os, MyInterger m);
//public:
//	MyInterger():m_Num(0){}
//	MyInterger& operator++()                    //ͨ����Ա��������ǰ��++�����
//	{
//		m_Num++;
//		return *this;
//	}
//	MyInterger operator++(int)                  //ͨ����Ա�������غ���++�����(int ����ռλ����)
//	{
//		MyInterger temp = *this;
//		m_Num++;
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
//class People
//{
//public:
//	People(int age)
//	{
//		m_Age = new int(age);
//	}
//	~People()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	People& operator=(People &p)
//	{
//		//�������ṩǳ����
//		//m_Age = p.m_Age;
//		//Ӧ�����ж��Ƿ��������ڶ���������У����ͷŸɾ���Ȼ�����
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//
//	int *m_Age;
//};
//
//class Teacher
//{
//public:
//	Teacher(string name,int age):m_Name(name),m_Age(age){}
//	bool operator==(Teacher &t)                          //ͨ����Ա��������==�����
//	{
//		if (m_Name == t.m_Name&&m_Age == t.m_Age)
//			return true;
//		else
//			return false;
//	}
//	bool operator!=(Teacher &t)                          //ͨ����Ա��������!=�����
//	{
//		if (m_Name != t.m_Name || m_Age != t.m_Age)
//			return true;
//		else
//			false;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//class MyPrint
//{
//public:
//	string operator()(string s)
//	{
//		return s;
//	}
//};
//
//Man Man::operator+(Man &m)              //ͨ����Ա��������+��
//{
//	Man temp;
//	temp.a = this->a + m.a;
//	temp.b = this->b + m.b;
//	return temp;
//}
//
//Man Man::operator+(int num)                  //ͨ����Ա��������+��(��int�����)
//{
//	Man temp;
//	temp.a = this->a + num;
//	temp.b = this->b + num;
//	return temp;
//}
//
////Man operator+(Man &m1, Man &m2)              //ͨ��ȫ�ֺ�������+��
////{
////	Man temp;
////	temp.a = m1.a + m2.a;
////	temp.b = m1.b + m2.b;
////	return temp;
////}
//
//ostream& operator<<(ostream &os, Man &m)                //ͨ��ȫ�ֺ����������������
//{
//	os << "a = " << m.a << endl;;
//	os << "b = " << m.b << endl;;
//	return os;
//}
//
//ostream& operator<<(ostream &os, MyInterger m)
//{
//	os << "m_Num = " << m.m_Num;
//	return os;
//}
//
//void test1()
//{
//	Man m1;
//	Man m2;
//	Man m3 = m1 + m2;
//	cout << m3.a << "      " << m3.b << endl;
//	Man m4 = m1 + 50;
//	cout << m4.a << "      " << m4.b << endl;
//	system("cls");
//
//
//	Man m5;
//	cout << m5 << endl;;
//	system("cls");
//
//	MyInterger M;
//	cout << M++ << endl;
//	cout << M << endl;
//	system("cls");
//
//	People p1(18);
//	People p2(20);
//	People p3(30);
//	p3 = p2 = p1;
//	cout << *p1.m_Age << endl;
//	cout << *p2.m_Age << endl;
//	cout << *p3.m_Age << endl;
//	system("cls");
//
//	Teacher t1("����", 18);
//	Teacher t2("����", 18);
//	if (t1 == t2)
//	{
//		cout << "���!" << endl;
//	}
//	system("cls");
//
//	MyPrint myPrint;
//	cout<<myPrint("hello world")<<endl;  //����ʹ�������ǳ��������ã����Գ�Ϊ�º���
//	//������������
//	cout << MyPrint()("hello world") << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}