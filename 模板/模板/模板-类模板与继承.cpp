#include<iostream>

using namespace std;

/*
	1.������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
	2.�����ָ�����������޷�����������ڴ�
	3.��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
*/

//template<class T>
//class Base
//{
//public:
//	T m;
//};
//
////class Son :public Base       //���󣬱���Ҫ֪�������е�T���ͣ����ܼ̳и�����
//class Son:public Base<int>
//{
//
//};
//
////��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1������Ϊ: " << typeid(T1).name() << endl;
//		cout << "T2������Ϊ: " << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void test1()
//{
//	//Son s1;
//	Son2<int, char> s2;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}