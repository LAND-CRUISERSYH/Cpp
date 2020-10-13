#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
	copy          容器内指定范围的元素拷贝到另一容器中
	replace        将容器内指定范围的旧元素修改为新元素
	replace_if      容器内指定范围满足条件的元素替换为新元素
	swap             互换两个容器的元素
*/

/*
	copy(iterator beg,iterator end,iterator dest);           容器内指定范围的元素拷贝到另一容器中
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
//	replace(iterator beg,iterator end,oldvalue,newvalue);            //将区间内旧元素替换成新元素
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
//	cout << "替换前" << endl;
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
//	cout << "替换后" << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
//}
//
///*
//	replace_if(iterator beg,iterator end,_pred,newvalue);            按条件替换元素，满足条件的替换成指定元素
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
//	cout << "替换前" << endl;
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
//
//	cout << "替换后" << endl;
//	replace_if(v.begin(), v.end(), GreaterFive(), 100);
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
//}
//
///*
//	swap(container c1,container c2);             互换两个容器的元素
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
//	cout << "交换前" << endl;
//	for_each(v1.begin(), v1.end(), printVector);
//	cout << endl;
//	for_each(v2.begin(), v2.end(), printVector);
//	cout << endl;
//
//	cout << "交换后" << endl;
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