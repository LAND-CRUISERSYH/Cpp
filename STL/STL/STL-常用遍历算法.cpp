#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
	�㷨��Ҫ����ͷ�ļ�<algorithm><functional><numeric>���
	<algorithm>������STLͷ�ļ�������һ������Χ�漰���Ƚϡ����������ҡ��������������ơ��޸ĵȵ�
	<numeric>�����С��ֻ��������������������м���ѧ�����ģ�庯��
	<functional>������һЩģ���࣬����������������
*/

/*-------------------���ñ����㷨--------------------------*/
/*
	for_each;                      ��������
	transform;                     ������������һ��������
*/
/*---------------------------------------------------------*/

//void printVector(int val)
//{
//	cout << val << " ";
//}
//
//class printVector1
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), printVector1());
//	cout << endl;
//}
//
//class Transform
//{
//public:
//	int operator()(int val)
//	{
//		return val+100;
//	}
//};
//
//void test2()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int> vTarget;
//	vTarget.resize(v.size());           //Ŀ��������Ҫ��ǰ���ٿռ�
//	transform(v.begin(), v.end(), vTarget.begin(), Transform());
//	for_each(vTarget.begin(), vTarget.end(), printVector1());
//	cout << endl;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}