#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<map>

using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2
/*
	��������:
		1.��˾������Ƹ��10��Ա��(ABCDEFGHIJ),10��Ա�����빫˾֮����Ҫָ��Ա�����ĸ����Ź���
		2.Ա����Ϣ��:�������������  ���ŷ�Ϊ: �߻����������з�
		3.�����10��Ա�����䲿�ź͹���
		4.ͨ��multimap������Ϣ�Ĳ��롢key(���ű��) value(Ա��)
		5.�ֲ�����ʾԱ����Ϣ
	ʵ�ֲ���:
		1.����10��Ա�����ŵ�vector��
		2.����vector������ȡ��ÿ��Ա���������������
		3.����󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue�����뵽multimap������
		4.�ֲ�����ʾԱ����Ϣ
*/

//class Person
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//
//void createPerson(vector<Person> &v)
//{
//	string TempName = "ABCDEFGHIJ";
//	for (vector<int>::size_type i = 0; i < 10; i++)
//	{
//		Person p;
//		p.m_Name = "Ա��";
//		p.m_Name += TempName[i];
//		p.m_Salary = rand() % 10000 + 10000;                //10000~19999
//		v.push_back(p);                    //���Ա��
//	}
//}
//
//void setGroup(vector<Person> &v, multimap<int, Person> &m)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����������ű��
//		int tempID = rand() % 3;           //0 1 2
//		//��Ա�����뵽������
//		m.insert(make_pair(tempID, (*it)));
//	}
//}
//
//void showPersonByGroup(multimap<int, Person> &m)
//{
//	cout << "�߻�����: " << endl;
//	multimap<int, Person>::iterator pos = m.find(CEHUA);
//	int num = m.count(CEHUA);
//	int index = 0;
//	for (; pos != m.end() && index != num; pos++, index++)
//	{
//		cout << "����: " << pos->second.m_Name << " ����: " << pos->second.m_Salary << endl;
//	}
//	cout << "-----------------------------------------"<<endl;
//	cout << "��������: " << endl;
//	pos = m.find(MEISHU);
//	num = m.count(MEISHU);
//	index = 0;
//	for (; pos != m.end() && index != num; pos++, index++)
//	{
//		cout << "����: " << pos->second.m_Name << " ����: " << pos->second.m_Salary << endl;
//	}
//	cout << "-----------------------------------------" << endl;
//	cout << "�з�����: " << endl;
//	pos = m.find(YANFA);
//	num = m.count(YANFA);
//	index = 0;
//	for (; pos != m.end() && index != num; pos++, index++)
//	{
//		cout << "����: " << pos->second.m_Name << " ����: " << pos->second.m_Salary << endl;
//	}
//}
//
//int main()
//{
//	srand((int)time(NULL));
//	//����Ա��
//	vector<Person> vPerson;
//	createPerson(vPerson);
//	
//	//Ա������
//	multimap<int, Person> mPerson;
//	setGroup(vPerson,mPerson);
//
//	//�ֲ�����ʾԱ����Ϣ
//	showPersonByGroup(mPerson);
//
//	/*for (vector<Person>::iterator it = vPerson.begin(); it != vPerson.end(); it++)
//	{
//		cout << "����: " << it->m_Name << " ����: " << it->m_Salary << endl;
//	}
//	cout << endl;
//	*/
//
//	return 0;
//}