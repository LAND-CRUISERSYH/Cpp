#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<ctime>

using namespace std;

/*
	sort                 对容器内元素进行排序
	random_shuffle          洗牌 指定范围内的元素随机调整次序
	merge                容器元素合并 并存储到另一容器中
	reverse              反转指定范围的元素
*/

/*
	sort(iterator beg,iterator end,_Pred);       对容器内元素进行排序
*/

//void printVector(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
//
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
//
//}
//
///*
//	random_shuffle(iterator beg,iterator end);           指定范围内的元素随机调整次序
//*/
//
//void test2()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	srand((int)time(NULL));
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
//}
//
///*
//	merge(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);   容器元素合并，并存储到另一容器中
//	两个容器必须是有序的 同升同降
//*/
//
//void test3()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//
//	vector<int> v3;
//	v3.resize(v1.size() + v2.size());             //提前给目标容器分配空间
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), v3.end(), printVector);
//	cout << endl;
//}
//
///*
//	reverse(iterator beg,iterator end);                 //反转指定范围的元素
//*/
//
//void test4()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	reverse(v.begin(), v.end());
//	for_each(v.begin(), v.end(), printVector);
//	cout << endl;
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