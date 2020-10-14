#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
	set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);   求两个集合的交集
	1.求交集的两个集合必须是有序序列
	2.目标容器开辟空间需要从两个容器中取小值
	3.set_intersection返回值是交集中最后一个元素的位置
*/

//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	vector<int> v2;            //两个集合必须是有序序列
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);             //0~9
//		v2.push_back(i + 5);		//5~14
//	}
//	vector<int> vTarget;
//	vTarget.resize(min(v1.size(), v2.size()));        //特殊情况 大容器包含小容器 取小容器的大小给目标容器开辟空间
//	//返回目标容器的最后一个元素的迭代器地址
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//}
//
///*
//	set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);  求两个集合的并集
//	1.两个集合必须是有序序列
//	2.目标容器开辟空间需要两个容器相加
//	3.set_union返回值是并集中最有一个元素的位置
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
//	vTarget.resize(v1.size() + v2.size());  //特殊情况 两个容器没有交集 并集就是两个容器size相加
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//}
//
///*
//	set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);   求两个集合的差集
//	1.两个集合必须是有序序列
//	2.目标容器开辟空间需要从两个容器中取较大值
//	3.set_difference返回值是差集中最后一个元素的位置
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
//	vTarget.resize(max(v1.size(), v2.size()));   //特殊情况 两个容器没有交集啊 取两个容器中大的size作为目标容器的大小
//	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	cout << "v1和v2容器的差集: " << endl;
//	for_each(vTarget.begin(), itEnd, myPrint);
//	cout << endl;
//
//	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
//	cout << "v2和v1容器的差集: " << endl;
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