#include<iostream>
#include<functional>          //内建函数对象头文件
#include<vector>
#include<algorithm>

using namespace std;

/*
	1.内建函数对象分为: 算术仿函数、关系仿函数、逻辑仿函数
	2.这些仿函数所产生的的对象，用法和一般函数完全相同
	3.使用内建函数对象，需要引入头文件#include<functional>
*/

/*--------------------算术仿函数-----------------------*/
/*
	功能描述: 实现四则运算、其中negate是一元运算，其他都是二元运算
	仿函数原型:
		template<class T> T plus<T>                    加法仿函数
		template<class T> T minus<T>                   减法仿函数
		template<class T> T multiplies<T>                    乘法仿函数
		template<class T> T divides<T>                    除法仿函数
		template<class T> T modulus<T>                    取模仿函数
		template<class T> T negate<T>                    取反仿函数
*/
/*------------------------------------------------------*/

////算术仿函数
//void test1()
//{
//	negate<int> n;
//	cout<<n(50)<<endl;
//
//	plus<int> p;
//	cout << p(10, 20) << endl;
//}
//
///*--------------------关系仿函数-----------------------*/
///*
//	仿函数原型:
//		template<class T> bool equal_to<T>                    等于
//		template<class T> bool not_equal_to<T>                 不等于
//		template<class T> bool greater<T>                    大于
//		template<class T> bool greater_equal<T>                 大于等于
//		template<class T> bool less<T>                    小于
//		template<class T> bool less_equal<T>                   小于等于
//*/
///*------------------------------------------------------*/
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
////关系仿函数
//void test2()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	//sort(v.begin(), v.end(), MyCompare());
//	sort(v.begin(), v.end(), greater<int>());         //使用内建函数对象
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
///*--------------------逻辑仿函数-----------------------*/
///*
//	仿函数原型:
//		template<class T> bool logical_and<T>                   逻辑与
//		template<class T> bool logical_or<T>					逻辑或
//		template<class T> bool logical_not<T>                   逻辑非
//*/
///*------------------------------------------------------*/
//
////逻辑仿函数
//void test3()
//{
//	vector<bool> v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(false);
//	v.push_back(true);
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//利用逻辑非 将容器v搬运到容器v2中 并执行取反
//	vector<bool> v2;
//	v2.resize(v.size());                  //需要提前指定大小
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
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