#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<cstdlib>
#include<ctime>
#include<algorithm>

using namespace std;

/*
	案例描述:
		有5名选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分
	实现步骤:
		1.创建5名选手放入vector中
		2.遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分存到deque容器中
		3.sort算法对deque容器中分数排序，去除最高和最低分
		4.deque容器遍历一遍，累加总分
		5.获取平均分
*/

//double getAverage(const deque<int>& d1)
////{
////	int num = 0;
////	double aver = 0;
////	for (deque<int>::size_type i = 0; i < d1.size(); i++)
////	{
////		num += d1[i];
////	}
////	return num / d1.size();
////}
////
////void test()
////{
////	vector<string> v;
////	v.push_back("A");
////	v.push_back("B");
////	v.push_back("C");
////	v.push_back("D");
////	v.push_back("E");
////	for (vector<string>::size_type i = 0; i < v.size(); i++)
////	{
////		deque<int> d;
////		for (int i = 0; i < 10; i++)
////		{
////			d.push_back((rand()%50+50));                        //随机打分存入deque容器中
////		}
////		sort(d.begin(), d.end());                            //排序
////		d.pop_back();									   //去除最高分
////		d.pop_front();										//去除最低分
////		cout << v[i] << "的平均分为: " << getAverage(d) << endl;
////	}
////}
///*--------------------------------------------------------------------------------------------------*/
//
////选手类
//class Person
//{
//public:
//	Person(string name, int score) :m_Name(name), m_Score(score) {};
//	string m_Name;							//姓名
//	int m_Score;							//平均分
//};
//
//void createPerson(vector<Person> &v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += nameSeed[i];
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);                            //将创建的person对象放入到容器中
//	}
//}
//
//void setScore(vector<Person> &v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//将评委的分数放入到deque容器中
//		deque<int> d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		sort(d.begin(), d.end());             //排序
//		d.pop_back();							//去除最高分
//		d.pop_front();								//去除最低分
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;
//		}
//		int avg = sum / d.size();
//		(*it).m_Score = avg;
//	}
//}
//
//void printPerson(vector<Person> &v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it).m_Name << ": " << it->m_Score << endl;
//	}
//}
//
//int main()
//{
//	//srand((int)time(0));
//	//test();
//	srand((int)time(0));
//	vector<Person> v;            //存放选手容器
//	createPerson(v);
//	setScore(v);                   //评委打分
//
//	printPerson(v);
//	return 0;
//}