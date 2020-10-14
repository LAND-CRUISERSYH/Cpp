#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

/*
	算术生成算法属于小型算法，使用时包含的头文件为#include<numeric>
*/

/*
	accumulate(iterator beg,iterator end,value);             计算容器元素累计总和
*/

//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i <= 100; i++)
//		v.push_back(i);
//	//参数3   起始累加值
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << "total = " << total << endl;
//}
//
///*
//	fill(iteartor beg,iterator end,value);          向容器内填充元素
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
//	//后期重新填充
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