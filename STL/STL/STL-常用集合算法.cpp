#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
	set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);   ���������ϵĽ���
	1.�󽻼����������ϱ�������������
	2.Ŀ���������ٿռ���Ҫ������������ȡСֵ
	3.set_intersection����ֵ�ǽ��������һ��Ԫ�ص�λ��
*/

//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	vector<int> v2;            //�������ϱ�������������
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);             //0~9
//		v2.push_back(i + 5);		//5~14
//	}
//	vector<int> vTarget;
//	vTarget.resize(min(v1.size(), v2.size()));        //������� ����������С���� ȡС�����Ĵ�С��Ŀ���������ٿռ�
//	//����Ŀ�����������һ��Ԫ�صĵ�������ַ
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//}
//
///*
//	set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);  ���������ϵĲ���
//	1.�������ϱ�������������
//	2.Ŀ���������ٿռ���Ҫ�����������
//	3.set_union����ֵ�ǲ���������һ��Ԫ�ص�λ��
//*/
//
//void test2()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int> vTarget;
//	vTarget.resize(v1.size() + v2.size());  //������� ��������û�н��� ����������������size���
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//}
//
///*
//	set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);   ���������ϵĲ
//	1.�������ϱ�������������
//	2.Ŀ���������ٿռ���Ҫ������������ȡ�ϴ�ֵ
//	3.set_difference����ֵ�ǲ�����һ��Ԫ�ص�λ��
//*/
//
//void test3()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int> vTarget;
//	vTarget.resize(max(v1.size(), v2.size()));   //������� ��������û�н����� ȡ���������д��size��ΪĿ�������Ĵ�С
//	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	cout << "v1��v2�����Ĳ: " << endl;
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//
//	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
//	cout << "v2��v1�����Ĳ: " << endl;
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}