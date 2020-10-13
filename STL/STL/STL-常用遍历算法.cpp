#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
	算法主要是由头文件<algorithm><functional><numeric>组成
	<algorithm>是所有STL头文件中最大的一个，范围涉及到比较、交换、查找、遍历操作、复制、修改等等
	<numeric>体积很小，只包括几个在序列上面进行简单数学运算的模板函数
	<functional>定义了一些模板类，用以声明函数对象
*/

/*-------------------常用遍历算法--------------------------*/
/*
	for_each;                      遍历容器
	transform;                     搬运容器到另一个容器中
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
//	vTarget.resize(v.size());           //目标容器需要提前开辟空间
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