#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

/*
	���������㷨����С���㷨��ʹ��ʱ������ͷ�ļ�Ϊ#include<numeric>
*/

/*
	accumulate(iterator beg,iterator end,value);             ��������Ԫ���ۼ��ܺ�
*/

//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i <= 100; i++)
//		v.push_back(i);
//	//����3   ��ʼ�ۼ�ֵ
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << "total = " << total << endl;
//}
//
///*
//	fill(iteartor beg,iterator end,value);          �����������Ԫ��
//*/
//
//class PrintVector
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test2()
//{
//	vector<int> v;
//	v.resize(10);
//	//�����������
//	fill(v.begin(), v.end(), 100);
//	for_each(v.begin(), v.end(), PrintVector());
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}