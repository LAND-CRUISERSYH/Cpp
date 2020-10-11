#include<iostream>
#include<stack>

using namespace std;

/*
	1.stack容器是一种先进后出的数据结构，它只有一个出口
	2.栈中只有顶端元素才可以被外界使用，因此栈不允许有遍历行为
	3.栈容器常用的对外接口:
		stack<T> stk;                      //stack采用模板类实现，stack对象的默认构造形式
		stack(const stack& stk);           //拷贝构造函数
		stack& operator=(const stack& stk);    重载等号操作符
		push(elem);                向栈顶添加元素
		pop();                    从栈顶移出第一个元素
		top();                    返回栈顶元素
		empty();                  判断堆栈是否为空
		size();                   返回栈的大小
*/

//void test1()
//{
//	stack<int> stk;
//	stk.push(10);
//	stk.push(20);
//	stk.push(30);
//	stk.push(40);
//	cout << "栈的大小: " << stk.size() << endl;
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