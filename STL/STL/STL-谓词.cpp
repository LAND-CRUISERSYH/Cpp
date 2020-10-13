#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
	1.返回bool类型的仿函数称为谓词
	2.如果operator()接收一个参数，那么叫做一元谓词
	3.如果operator()接收两个参数，那么叫做二元谓词
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
////一元谓词
//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//查找大于5的数字
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreateFive());
//	if (it == v.end())
//		cout << "没有找到大于5的数字" << endl;
//	else
//		cout << "找到了大于5的数字: " << *it << endl;
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
////二元谓词
//void test2()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	sort(v.begin(), v.end(),MyCompare());     //使用仿函数改变算法策略
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