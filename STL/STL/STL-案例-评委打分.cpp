#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<cstdlib>
#include<ctime>
#include<algorithm>

using namespace std;

/*
	��������:
		��5��ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ����
	ʵ�ֲ���:
		1.����5��ѡ�ַ���vector��
		2.����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ浽deque������
		3.sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
		4.deque��������һ�飬�ۼ��ܷ�
		5.��ȡƽ����
*/

//double getAverage(const deque<int>& d1)
////{
////	int num = 0;
////	double aver = 0;
////	for (deque<int>::size_type i = 0; i < d1.size(); i++)
////	{
////		num += d1[i];
////	}
////	return num / d1.size();
////}
////
////void test()
////{
////	vector<string> v;
////	v.push_back("A");
////	v.push_back("B");
////	v.push_back("C");
////	v.push_back("D");
////	v.push_back("E");
////	for (vector<string>::size_type i = 0; i < v.size(); i++)
////	{
////		deque<int> d;
////		for (int i = 0; i < 10; i++)
////		{
////			d.push_back((rand()%50+50));                        //�����ִ���deque������
////		}
////		sort(d.begin(), d.end());                            //����
////		d.pop_back();									   //ȥ����߷�
////		d.pop_front();										//ȥ����ͷ�
////		cout << v[i] << "��ƽ����Ϊ: " << getAverage(d) << endl;
////	}
////}
///*--------------------------------------------------------------------------------------------------*/
//
////ѡ����
//class Person
//{
//public:
//	Person(string name, int score) :m_Name(name), m_Score(score) {};
//	string m_Name;							//����
//	int m_Score;							//ƽ����
//};
//
//void createPerson(vector<Person> &v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameSeed[i];
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);                            //��������person������뵽������
//	}
//}
//
//void setScore(vector<Person> &v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����ί�ķ������뵽deque������
//		deque<int> d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		sort(d.begin(), d.end());             //����
//		d.pop_back();							//ȥ����߷�
//		d.pop_front();								//ȥ����ͷ�
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;
//		}
//		int avg = sum / d.size();
//		(*it).m_Score = avg;
//	}
//}
//
//void printPerson(vector<Person> &v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it).m_Name << ": " << it->m_Score << endl;
//	}
//}
//
//int main()
//{
//	//srand((int)time(0));
//	//test();
//	srand((int)time(0));
//	vector<Person> v;            //���ѡ������
//	createPerson(v);
//	setScore(v);                   //��ί���
//
//	printPerson(v);
//	return 0;
//}