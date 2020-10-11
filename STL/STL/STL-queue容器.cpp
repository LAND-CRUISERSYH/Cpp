#include<iostream>
#include<queue>

using namespace std;
/*
	1.Queue容器是一种先进先出的数据结构，它有两个出口
	2.队列容器允许从一端新增元素，从另一端移除元素
	3.队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为
	4.queue容器常用接口:
		queue<T> que;                 queue采用模板类实现，queue对象的默认构造形式
		queue(const queue& que);       拷贝构造函数
		queue& operator=(const queue& que);   重载等号操作符
		push(elem);                  往队尾添加元素
		pop();                     从队头移除第一个元素
		back();                    返回最后一个元素
		front();                   返回第一个元素
		empty();                  判断队列是否为空
		size();                   返回队列的大小
*/

//void test1()
//{
//	queue<int> q;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	q.push(40);
//
//	cout << "队头元素: " << q.front() << endl;
//	cout << "队尾元素: " << q.back() << endl;
//	cout << "队列大小: " << q.size() << endl;
//
//	while (!q.empty())
//	{
//		cout << q.front() << " ";
//		q.pop();
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}