#include<iostream>
#include<vector>

using namespace std;

///*--------------------------vector����������캯��-----------------------------*/
///*
//	1.vector���ݽṹ������ǳ����ƣ�Ҳ��Ϊ��������
//	2.vector����ͨ��������:
//		��֮ͬ�����������Ǿ�̬�ռ䣬��vector���Զ�̬��չ
//	3.��̬��չ:��������ԭ�ռ�֮�������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ����¿ռ䣬�ͷ�ԭ�ռ�
//	4.vector�����ĵ�������֧��������ʵĵ�����
//	����ԭ��:
//	vector<T> v;                     //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//	vector(v,begin(),v.end())         //��v[begin(),end())�����е�Ԫ�ؿ���������
//	vector(n,elem);                 //���캯����n��elem����������
//	vector(const vector& vec);      //�������캯��
//*/
///*-------------------------------------------------------------------------------*/
//
//void printVector(vector<int> &v);
////vector���캯��ʹ��
//void test1()
//{
//	vector<int> v1;                             //Ĭ�Ϲ���  �޲ι���
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//	printVector(v1);
//
//	vector<int> v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	vector<int> v3(9, 10);
//	printVector(v3);
//
//	vector<int> v4(v3);
//	printVector(v4);
//}
//
////��ӡ
//void printVector(vector<int> &v)
//{
//	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
//		cout << *i << " ";
//	cout << endl;
//}
//
///*--------------------------vector��ֵ����-----------------------------*/
///*
//	����ԭ��:
//	vector& operator=(const vector& vec);        //���صȺŲ�����
//	assign(beg,end);                            //��[beg,ind)�����е����ݿ�����ֵ������
//	assign(n,elem);                            //��n��elem������ֵ������
//*/
///*-------------------------------------------------------------------------------*/
//
////vector��ֵ����
//void test2()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//
//	vector<int> v2;
//	v2 = v1;
//	printVector(v2);
//
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	vector<int> v4;
//	v4.assign(9, 10);
//	printVector(v4);
//}
//
///*--------------------------vector�����ʹ�С-----------------------------*/
///*
//	����ԭ��:
//	empty();                   //�ж������Ƿ�Ϊ��
//	capacity();                //����������
//	size();                    //����������Ԫ�صĸ���
//	resize(int num);         //����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ��;��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//	resize(int num,elem);    //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��;���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//*/
///*-------------------------------------------------------------------------------*/
//
////vector�����ʹ�С
//void test3()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//	printVector(v1);
//	if (v1.empty())
//		cout << "����Ϊ��" << endl;
//	else
//	{
//		cout << "������Ϊ��" << endl;
//		cout << "����: " << v1.capacity() << endl;
//		cout << "Ԫ�ظ���: " << v1.size() << endl;
//	}
//	
//	v1.resize(15);      //�������ָ���ı�ԭ������Ĭ����0����µ�λֵ
//	printVector(v1);
//	cout << "����: " << v1.capacity() << endl;
//	cout << "Ԫ�ظ���: " << v1.size() << endl;
//
//	v1.resize(5);          //�������ָ���ı�ԭ���Σ��������ֻᱻɾ��
//	printVector(v1);
//	cout << "����: " << v1.capacity() << endl;
//	cout << "Ԫ�ظ���: " << v1.size() << endl;
//
//	v1.resize(8, 20);       //�������ذ汾������ָ��Ĭ��ֵ���
//	printVector(v1);                 
//	cout << "����: " << v1.capacity() << endl;
//	cout << "Ԫ�ظ���: " << v1.size() << endl;
//
//}
//
///*--------------------------vector�����ɾ��-----------------------------*/
///*
//	����ԭ��:
//	push_back(ele);                      //β������Ԫ��ele
//	pop_back();                          //ɾ�����һ��Ԫ��
//	insert(const_iterator pos,ele);       //������ָ��λ��pos����Ԫ��ele
//	insert(const_iterstor pos,int count,ele);      //������ָ��λ��pos����count��Ԫ��ele
//	erase(const_iterator pos);               //ɾ��������ָ���Ԫ��
//	erase(const_iterator start,const_iterator end);      //ɾ����������start��end֮���Ԫ��
//	clear();                                 //ɾ������������Ԫ��
//*/
///*-------------------------------------------------------------------------------*/
//
////vector�����ɾ��
//void test4()
//{
//	vector<int> v1;
//	for (int i = 1; i <= 5; i++)
//		v1.push_back(i);
//	printVector(v1);
//
//	v1.pop_back();
//	printVector(v1);
//
//	v1.insert(v1.begin(), 0);             //��һ������Ϊ������
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, -5);
//	printVector(v1);
//
//	v1.erase(v1.begin() + 3);
//	printVector(v1);
//
//	v1.erase(v1.begin(), v1.begin() + 2);
//	printVector(v1);
//
//	v1.clear();
//	printVector(v1);
//}
//
///*--------------------------vector���ݴ�ȡ-----------------------------*/
///*
//	����ԭ��:
//	at(int idx);                              //��������idx��ָ������
//	operator[];                              //��������idx��ָ������
//	front();                                 //���������е�һ������Ԫ��
//	back();                                //�������������һ������Ԫ��
//*/
///*-------------------------------------------------------------------------------*/
//
////vector���ݴ�ȡ
//void test5()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//	for (string::size_type i = 0; i < v1.size(); i++)
//		cout << v1[i] << " ";
//	cout << endl;
//	for (string::size_type i = 0; i < v1.size(); i++)
//		cout << v1.at(i) << " ";
//
//	cout << endl << "��һ��Ԫ��Ϊ: " << v1.front() << endl;
//	cout << "���һ��Ԫ��Ϊ: " << v1.back() << endl;
//}
//
///*--------------------------vector��������-----------------------------*/
///*
//	����ԭ��:
//	swap(vec);                         //��vec�뱾���Ԫ�ػ���
//*/
///*-------------------------------------------------------------------------------*/
//
////vector��������
//void test6()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//	printVector(v1);
//
//	vector<int> v2;
//	for (int i = 10; i > 0; i--)
//		v2.push_back(i);
//	printVector(v2);
//	cout << endl;
//
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//
//	//����swap���������ڴ�ռ�
//	vector<int> v;
//	for (int i = 0; i < 10000; i++)
//		v.push_back(i);
//	cout << "����Ϊ: " << v.capacity() << endl;
//	cout << "��СΪ: " << v.size() << endl;
//	v.resize(3);
//	cout << "����Ϊ: " << v.capacity() << endl;
//	cout << "��СΪ: " << v.size() << endl;
//	vector<int>(v).swap(v);             //����swap���������ڴ�ռ�
//	cout << "����Ϊ: " << v.capacity() << endl;
//	cout << "��СΪ: " << v.size() << endl;
//}
//
///*--------------------------vectorԤ���ռ�-----------------------------*/
///*
//	����vector�ڶ�̬��չ����ʱ����չ����
//	����ԭ��:
//	reserve(int len);                 ����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
//*/
///*-------------------------------------------------------------------------------*/
//
////vectorԤ���ռ�
//void test7()
//{
//	vector<int> v;
//	v.reserve(10000);          //����reserveԤ���ռ�
//
//	int num = 0;              //ͳ�ƿ��ٴ���
//	int *p = NULL;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << num << endl;
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	test7();
//	return 0;
//}