#include<iostream>
#include<queue>

using namespace std;
/*
	1.Queue������һ���Ƚ��ȳ������ݽṹ��������������
	2.�������������һ������Ԫ�أ�����һ���Ƴ�Ԫ��
	3.������ֻ�ж�ͷ�Ͷ�β�ſ��Ա����ʹ�ã���˶��в������б�����Ϊ
	4.queue�������ýӿ�:
		queue<T> que;                 queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
		queue(const queue& que);       �������캯��
		queue& operator=(const queue& que);   ���صȺŲ�����
		push(elem);                  ����β���Ԫ��
		pop();                     �Ӷ�ͷ�Ƴ���һ��Ԫ��
		back();                    �������һ��Ԫ��
		front();                   ���ص�һ��Ԫ��
		empty();                  �ж϶����Ƿ�Ϊ��
		size();                   ���ض��еĴ�С
*/

//void test1()
//{
//	queue<int> q;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	q.push(40);
//
//	cout << "��ͷԪ��: " << q.front() << endl;
//	cout << "��βԪ��: " << q.back() << endl;
//	cout << "���д�С: " << q.size() << endl;
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