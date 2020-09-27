#include<iostream>
#include<vector>
#include<algorithm>          //��׼�㷨ͷ�ļ�
#include<string>

using namespace std;

/*
	1.C++���������ͷ��ͱ��˼�룬Ŀ�ľ��Ǹ����Ե�����
	2.�������£����ݽṹ���㷨��δ����һ�ױ�׼�����±��ȴ��´����ظ�����
	3.Ϊ�˽������ݽṹ���㷨��һ�ױ�׼��������STL
	4.STL(Standard Template Library,��׼ģ���)
	5.STL�ӹ����Ϸ�Ϊ: ���� �㷨 ������
	6.�������㷨֮��ͨ�������������޷�����
	7.STL�������еĴ��붼������ģ�������ģ�庯��

	STL�����Ϊ�������: �������㷨�����������º�����������(�����)���ռ�������
		1.����:�������ݽṹ����vector��list��deque��set��map�ȣ������������
		2.�㷨:���ֳ��õ��㷨����sort��find��copy��for_each��
		3.������:�������������㷨֮��Ľ��ϼ�
		4.�º���:��Ϊ���ƺ���������Ϊ�㷨��ĳ�ֲ���
		5.������:һ�����������������߷º�����������ӿڵĶ���
		6.�ռ�������:����ռ�����������

	����:
		1.STL�������ǽ�������㷺��һЩ���ݽṹʵ�ֳ���
		2.���õ����ݽṹ:���顢��������ջ�����С����ϡ�ӳ����
		3.��Щ������Ϊ����ʽ�����͹���ʽ��������:
			����ʽ����:ǿ��ֵ����������ʽ�����е�ÿ��Ԫ�ؾ��й̶���λ��
			����ʽ����:�������ṹ����Ԫ��֮��û���ϸ�������ϵ�˳���ϵ

	�㷨:
		1.���޵Ĳ��裬����߼�����ѧ�ϵ����⣬��һ��ѧ�����ǽ����㷨(Algorithms)
		2.�㷨��Ϊ:�ʱ��㷨�ͷ��ʱ��㷨
			�ʱ��㷨:��ָ��������л���������ڵ�Ԫ�ص����ݡ����翽�����滻��ɾ���ȵ�
			���ʱ��㷨:��ָ��������в�����������ڵ�Ԫ�����ݣ�������ҡ�������������Ѱ�Ҽ�ֵ�ȵ�

	������(�������㷨֮��ճ�ϼ�):
		1.�ṩһ�ַ�����ʹ֮�ܹ�����Ѱ��ĳ�����������ĸ���Ԫ�أ��������豩¶���������ڲ���ʾ��ʽ
		2.ÿ�����������Լ�ר���ĵ�����
		3.������ʹ�÷ǳ�����ָ��
		4.����������:
			����					����									֧������
		   ���������			�����ݵ�ֻ������						ֻ����֧��++��==��!��=
		   ���������			�����ݵ�ֻд����						ֻд��֧��++
		   ǰ�������			��д������������ǰ�ƽ�������			��д��֧��++��==��!��=
		   ˫�������			��д������������ǰ��������			��д��֧��++��--
		   ������ʵ�����		��д��������������Ծ�ķ�ʽ������������	��д��֧��++��--��[n]��-n��<��<=��>��>=
		5.���õ������е���������Ϊ˫���������������ʵ�����
*/

//class Person
//{
//public:
//	Person(string name,int age):m_Name(name),m_Age(age){}
//
//	string m_Name;
//	int m_Age;
//};
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
////�����������
//void test1()
//{
//	//������һ��vector����
//	vector<int> ivec;
//
//	//�������в�������
//	ivec.push_back(10);
//	ivec.push_back(20);
//	ivec.push_back(30);
//	ivec.push_back(40);
//
//	////ͨ�����������������е�����
//	//vector<int>::iterator itBegin = ivec.begin();              //��ʼ��������ָ�������е�һ��Ԫ��
//	//vector<int>::iterator itEnd = ivec.end();                  //������������ָ���������һ��Ԫ�ص���һ��λ��
//
//	////��һ�ֱ�����ʽ
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << " ";
//	//	itBegin++;
//	//}
//
//	////�ڶ��ֱ�����ʽ
//	//for (vector<int>::iterator it = ivec.begin(); it != ivec.end(); it++)
//	//{
//	//	cout << *it << " ";
//	//}
//
//	//�����ֱ�����ʽ    ����STL�ṩ�ı����㷨
//	for_each(ivec.begin(), ivec.end(), myPrint);
//}
//
////����Զ�����������
//void test2()
//{
//	vector<Person> vec;
//
//	Person p1("����", 10);
//	Person p2("����", 20);
//	Person p3("����", 30);
//	Person p4("����", 40);
//	Person p5("����", 50);
//
//	//���������������
//	vec.push_back(p1);
//	vec.push_back(p2);
//	vec.push_back(p3);
//	vec.push_back(p4);
//	vec.push_back(p5);
//
//	//���������е�����
//	for (vector<Person>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << "����: " << it->m_Name << "\t����: " << it->m_Age << endl;
//	}
//}
//
////����Զ�������ָ��
//void test3()
//{
//	vector<Person*> vec;
//
//	Person p1("����", 10);
//	Person p2("����", 20);
//	Person p3("����", 30);
//	Person p4("����", 40);
//	Person p5("����", 50);
//
//	//���������������
//	vec.push_back(&p1);
//	vec.push_back(&p2);
//	vec.push_back(&p3);
//	vec.push_back(&p4);
//	vec.push_back(&p5);
//
//	//���������е�����
//	for (vector<Person*>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << "����: " << (*it)->m_Name << "\t����: " << (*it)->m_Age << endl;
//	}
//}
//
////Ƕ������
//void test4()
//{
//	vector<vector<int>> ivec;
//	//����С����
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	//��С�����������
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 10);
//		v3.push_back(i + 100);
//		v4.push_back(i + 1000);
//	}
//
//	//��С�������뵽��������
//	ivec.push_back(v1);
//	ivec.push_back(v2);
//	ivec.push_back(v3);
//	ivec.push_back(v4);
//
//	//ͨ����������������
//	for (vector<vector<int>>::iterator it = ivec.begin(); it != ivec.end(); it++)
//	{
//		//(*it)   -- ���� vector<int>
//		for (vector<int>::iterator i = (*it).begin(); i != (*it).end(); i++)
//		{
//			cout << *i << "\t";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	return 0;
}