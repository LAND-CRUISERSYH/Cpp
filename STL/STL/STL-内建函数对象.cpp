#include<iostream>
#include<functional>          //�ڽ���������ͷ�ļ�
#include<vector>
#include<algorithm>

using namespace std;

/*
	1.�ڽ����������Ϊ: �����º�������ϵ�º������߼��º���
	2.��Щ�º����������ĵĶ����÷���һ�㺯����ȫ��ͬ
	3.ʹ���ڽ�����������Ҫ����ͷ�ļ�#include<functional>
*/

/*--------------------�����º���-----------------------*/
/*
	��������: ʵ���������㡢����negate��һԪ���㣬�������Ƕ�Ԫ����
	�º���ԭ��:
		template<class T> T plus<T>                    �ӷ��º���
		template<class T> T minus<T>                   �����º���
		template<class T> T multiplies<T>                    �˷��º���
		template<class T> T divides<T>                    �����º���
		template<class T> T modulus<T>                    ȡģ�º���
		template<class T> T negate<T>                    ȡ���º���
*/
/*------------------------------------------------------*/

////�����º���
//void test1()
//{
//	negate<int> n;
//	cout<<n(50)<<endl;
//
//	plus<int> p;
//	cout << p(10, 20) << endl;
//}
//
///*--------------------��ϵ�º���-----------------------*/
///*
//	�º���ԭ��:
//		template<class T> bool equal_to<T>                    ����
//		template<class T> bool not_equal_to<T>                 ������
//		template<class T> bool greater<T>                    ����
//		template<class T> bool greater_equal<T>                 ���ڵ���
//		template<class T> bool less<T>                    С��
//		template<class T> bool less_equal<T>                   С�ڵ���
//*/
///*------------------------------------------------------*/
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
////��ϵ�º���
//void test2()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	//sort(v.begin(), v.end(), MyCompare());
//	sort(v.begin(), v.end(), greater<int>());         //ʹ���ڽ���������
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
///*--------------------�߼��º���-----------------------*/
///*
//	�º���ԭ��:
//		template<class T> bool logical_and<T>                   �߼���
//		template<class T> bool logical_or<T>					�߼���
//		template<class T> bool logical_not<T>                   �߼���
//*/
///*------------------------------------------------------*/
//
////�߼��º���
//void test3()
//{
//	vector<bool> v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(false);
//	v.push_back(true);
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//�����߼��� ������v���˵�����v2�� ��ִ��ȡ��
//	vector<bool> v2;
//	v2.resize(v.size());                  //��Ҫ��ǰָ����С
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
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