#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
	copy          ������ָ����Χ��Ԫ�ؿ�������һ������
	replace        ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
	replace_if      ������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
	swap             ��������������Ԫ��
*/

/*
	copy(iterator beg,iterator end,iterator dest);           ������ָ����Χ��Ԫ�ؿ�������һ������
*/

//void printVector(int val)
//{
//	cout << val << " ";
//}
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	vector<int> v2;
//	v2.resize(v.size());
//	copy(v.begin(), v.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), printVector);
//	cout << endl;
//}
//
///*
//	replace(iterator beg,iterator end,oldvalue,newvalue);            //�������ھ�Ԫ���滻����Ԫ��
//*/
//
//void test2()
//{
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//
//	cout << "�滻ǰ" << endl;
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
//	cout << "�滻��" << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
//}
//
///*
//	replace_if(iterator beg,iterator end,_pred,newvalue);            �������滻Ԫ�أ������������滻��ָ��Ԫ��
//*/
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test3()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	cout << "�滻ǰ" << endl;
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
//
//	cout << "�滻��" << endl;
//	replace_if(v.begin(), v.end(), GreaterFive(), 100);
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
//}
//
///*
//	swap(container c1,container c2);             ��������������Ԫ��
//*/
//
//void test4()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i * 100);
//	}
//
//	cout << "����ǰ" << endl;
//	for_each(v1.begin(), v1.end(), printVector);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), printVector);
//	cout << endl;
//
//	cout << "������" << endl;
//	swap(v1, v2);
//	for_each(v1.begin(), v1.end(), printVector);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), printVector);
//	cout << endl;
//
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}