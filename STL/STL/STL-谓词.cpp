#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
	1.����bool���͵ķº�����Ϊν��
	2.���operator()����һ����������ô����һԪν��
	3.���operator()����������������ô������Ԫν��
*/

//class GreateFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
////һԪν��
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//���Ҵ���5������
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreateFive());
//	if (it == v.end())
//		cout << "û���ҵ�����5������" << endl;
//	else
//		cout << "�ҵ��˴���5������: " << *it << endl;
//}
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2) {
//		return v1 > v2;
//	}
//};
//
////��Ԫν��
//void test2()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	sort(v.begin(), v.end(),MyCompare());     //ʹ�÷º����ı��㷨����
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}