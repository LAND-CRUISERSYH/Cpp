#include<iostream>
#include<deque>
#include<algorithm>        //��׼�㷨ͷ�ļ�

using namespace std;

///*-------------------deque��������������캯��----------------------*/
///*
//	1.����:˫�����飬���Զ�ͷ�˽��в���ɾ������
//	2.deque��vector����:
//		vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ��
//		deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻ��vector��
//		vector����Ԫ��ʱ���ٶȻ��deque�죬������ߵ��ڲ�ʵ���й�
//	3.deque�ڲ�����ԭ��:
//		deque�ڲ��и��п���:ά��ÿ�λ������е����ݣ��������д����ʵ����
//		�п���ά������ÿ���������ĵ�ַ��ʹ��ʹ��dequeʱ��һƬ�������ڴ�ռ�
//	4.deque�����ĵ�����Ҳ��֧��������ʵ�
//	5.deque���캯��:
//		deque<T> deq;                      //Ĭ�Ϲ�����ʽ
//		deque(beg,end);                     //���캯����[beg,end)�����е�Ԫ�ؿ���������
//		deque(n,elem);                     //���캯����n��elem����������
//		deque(const deque &deq);              //�������캯��
//*/
///*------------------------------------------------------------------- */
//
//void printDeque(const deque<int> &deq)
//{
//	for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//
////deque���캯��
//void test1()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//	printDeque(d1);
//
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int> d3(9, 5);
//	printDeque(d3);
//
//	deque<int> d4(d3);
//	printDeque(d4);
//}
//
///*-----------------------------deque��ֵ����--------------------------*/
///*
//	����ԭ��:
//		deque& operator=(const deque& deq);              ���صȺŲ�����
//		assign(beg,end);                                ��[beg,end)�����е����ݿ�����ֵ������
//		assign(n,elem);                                 ��n��elem������ֵ������
//*/
///*------------------------------------------------------------------- */
//
////deque��ֵ����
//void test2()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//
//	deque<int> d2 = d1;
//	printDeque(d2);
//
//	deque<int> d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//	
//	deque<int> d4;
//	d4.assign(9, 5);
//	printDeque(d4);
//}
//
///*-----------------------------deque��С����--------------------------*/
///*
//	����ԭ��:
//		deque.empty();             �ж������Ƿ�Ϊ��
//		deque.size();              ����������Ԫ�صĸ���
//		deque.resize(num);      ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//		deque.resize(num,elem); ����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�ã���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//*/
///*------------------------------------------------------------------- */
//
////deque��С����
//void test3()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//	if (d1.empty())
//		cout << "deque����Ϊ��!" << endl;
//	else
//		cout << "deque������Ϊ��!" << endl;
//	cout << "deque������Ԫ�ظ���Ϊ: " << d1.size() << endl;
//
//	d1.resize(5);
//	printDeque(d1);
//	cout << "deque������Ԫ�ظ���Ϊ: " << d1.size() << endl;
//
//	d1.resize(8, 1);
//	printDeque(d1);
//	cout << "deque������Ԫ�ظ���Ϊ: " << d1.size() << endl;
//}
//
///*-----------------------------deque�����ɾ��--------------------------*/
///*
//	����ԭ��:
//	���˲���ɾ������:
//		push_back(elem);                  ������β�����һ������
//		push_front(elem);                 ������ͷ������һ������
//		pop_back();                       ɾ���������һ������
//		pop_front();                      ɾ��������һ������
//	ָ��λ�ò���:
//		insert(pos,elem);                 ��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
//		insert(pos,n.elem);               ��posλ�ò���n��elem���ݣ��޷���ֵ
//		insert(pos,beg,end);              ��posλ�ò���[beg,end)��������ݣ��޷���ֵ
//		clear();                          �����������������
//		erase(beg,end);                   ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��
//		erase(pos);                       ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//*/
///*------------------------------------------------------------------- */
//
////deque�����ɾ��
//void test4()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//
//	d1.pop_back();
//	d1.pop_front();
//	printDeque(d1);
//
//	deque<int> d2;
//	d2.push_back(10);
//	d2.push_back(20);
//	d2.push_front(100);
//	d2.push_front(200);
//	printDeque(d2);
//
//	d2.insert(d2.begin(), 1000);
//	printDeque(d2);
//
//	d2.insert(d2.begin()+1, 2, 700);
//	printDeque(d2);
//
//	deque<int> d3;
//	for (int i = 0; i < 10; i++)
//		d3.push_back(i);
//
//	d2.insert(d2.begin() + 2, d3.begin() + 1, d3.end());
//	printDeque(d2);
//
//	d2.erase(d2.begin() + 6, d2.begin() + 8);
//	printDeque(d2);
//
//	d2.erase(d2.begin() + 2);
//	printDeque(d2);
//
//	d2.clear();
//	if (d2.empty())
//		cout << "����Ϊ��" << endl;
//	else
//		cout << "������Ϊ��" << endl;
//	cout << d2.size() << endl;
//	printDeque(d2);
//}
//
///*-----------------------------deque���ݴ�ȡ--------------------------*/
///*
//	����ԭ��:
//		at(int idx);                ��������idx��ָ������
//		operator[];                 ��������idx��ָ������
//		front();                    ���������е�һ������Ԫ��
//		back();                     �������������һ������Ԫ��
//*/
///*------------------------------------------------------------------- */
//
////deque���ݴ�ȡ
//void test5()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//	cout << d1[5] << endl;
//	cout << d1.at(5) << endl;
//	cout << "�����е�һ������Ԫ��Ϊ: " << d1.front() << endl;
//	cout << "���������һ������Ԫ��Ϊ: " << d1.back() << endl;
//}
//
///*-----------------------------deque����--------------------------*/
///*
//	����ԭ��:
//		sort(iterator beg,iterator end)       ��beg��end������Ԫ�ؽ�������
//*/
///*------------------------------------------------------------------- */
//
////deque����
//void test6()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//	printDeque(d1);
//
//	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
//	sort(d1.begin(), d1.end());           //Ĭ���������:��С����
//	printDeque(d1);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	test6();
//
//	return 0;
//}