#include<iostream>
#include<stack>

using namespace std;

/*
	1.stack������һ���Ƚ���������ݽṹ����ֻ��һ������
	2.ջ��ֻ�ж���Ԫ�زſ��Ա����ʹ�ã����ջ�������б�����Ϊ
	3.ջ�������õĶ���ӿ�:
		stack<T> stk;                      //stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
		stack(const stack& stk);           //�������캯��
		stack& operator=(const stack& stk);    ���صȺŲ�����
		push(elem);                ��ջ�����Ԫ��
		pop();                    ��ջ���Ƴ���һ��Ԫ��
		top();                    ����ջ��Ԫ��
		empty();                  �ж϶�ջ�Ƿ�Ϊ��
		size();                   ����ջ�Ĵ�С
*/

//void test1()
//{
//	stack<int> stk;
//	stk.push(10);
//	stk.push(20);
//	stk.push(30);
//	stk.push(40);
//	cout << "ջ�Ĵ�С: " << stk.size() << endl;
//
//	while (!stk.empty())
//	{
//		cout << stk.top() << " ";
//		stk.pop();
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}