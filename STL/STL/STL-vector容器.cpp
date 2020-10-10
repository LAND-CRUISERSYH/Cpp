#include<iostream>
#include<vector>

using namespace std;

///*--------------------------vector基本概念及构造函数-----------------------------*/
///*
//	1.vector数据结构和数组非常相似，也称为单端数组
//	2.vector与普通数组区别:
//		不同之处在于数组是静态空间，而vector可以动态扩展
//	3.动态扩展:并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间
//	4.vector容器的迭代器是支持随机访问的迭代器
//	函数原型:
//	vector<T> v;                     //采用模板实现类实现，默认构造函数
//	vector(v,begin(),v.end())         //将v[begin(),end())区间中的元素拷贝给本身
//	vector(n,elem);                 //构造函数将n个elem拷贝给本身
//	vector(const vector& vec);      //拷贝构造函数
//*/
///*-------------------------------------------------------------------------------*/
//
//void printVector(vector<int> &v);
////vector构造函数使用
//void test1()
//{
//	vector<int> v1;                             //默认构造  无参构造
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
////打印
//void printVector(vector<int> &v)
//{
//	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
//		cout << *i << " ";
//	cout << endl;
//}
//
///*--------------------------vector赋值操作-----------------------------*/
///*
//	函数原型:
//	vector& operator=(const vector& vec);        //重载等号操作符
//	assign(beg,end);                            //将[beg,ind)区间中的数据拷贝赋值给本身
//	assign(n,elem);                            //将n个elem拷贝赋值给本身
//*/
///*-------------------------------------------------------------------------------*/
//
////vector赋值操作
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
///*--------------------------vector容量和大小-----------------------------*/
///*
//	函数原型:
//	empty();                   //判断容器是否为空
//	capacity();                //容器的容量
//	size();                    //返回容器中元素的个数
//	resize(int num);         //重新指定容器的长度为num,若容器变长，则以默认值填充新位置;若容器变短，则末尾超出容器长度的元素被删除
//	resize(int num,elem);    //重新指定容器的长度为num，若容器变长，则以elem值填充新位置;如果容器变短，则末尾超出容器长度的元素被删除
//*/
///*-------------------------------------------------------------------------------*/
//
////vector容量和大小
//void test3()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//	printVector(v1);
//	if (v1.empty())
//		cout << "容器为空" << endl;
//	else
//	{
//		cout << "容器不为空" << endl;
//		cout << "容量: " << v1.capacity() << endl;
//		cout << "元素个数: " << v1.size() << endl;
//	}
//	
//	v1.resize(15);      //如果重新指定的比原来长，默认用0填充新的位值
//	printVector(v1);
//	cout << "容量: " << v1.capacity() << endl;
//	cout << "元素个数: " << v1.size() << endl;
//
//	v1.resize(5);          //如果重新指定的比原来段，超出部分会被删除
//	printVector(v1);
//	cout << "容量: " << v1.capacity() << endl;
//	cout << "元素个数: " << v1.size() << endl;
//
//	v1.resize(8, 20);       //利用重载版本，可以指定默认值填充
//	printVector(v1);                 
//	cout << "容量: " << v1.capacity() << endl;
//	cout << "元素个数: " << v1.size() << endl;
//
//}
//
///*--------------------------vector插入和删除-----------------------------*/
///*
//	函数原型:
//	push_back(ele);                      //尾部插入元素ele
//	pop_back();                          //删除最后一个元素
//	insert(const_iterator pos,ele);       //迭代器指向位置pos插入元素ele
//	insert(const_iterstor pos,int count,ele);      //迭代器指向位置pos插入count个元素ele
//	erase(const_iterator pos);               //删除迭代器指向的元素
//	erase(const_iterator start,const_iterator end);      //删除迭代器从start到end之间的元素
//	clear();                                 //删除容器中所有元素
//*/
///*-------------------------------------------------------------------------------*/
//
////vector插入和删除
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
//	v1.insert(v1.begin(), 0);             //第一个参数为迭代器
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
///*--------------------------vector数据存取-----------------------------*/
///*
//	函数原型:
//	at(int idx);                              //返回索引idx所指的数据
//	operator[];                              //返回索引idx所指的数据
//	front();                                 //返回容器中第一个数据元素
//	back();                                //返回容器中最后一个数据元素
//*/
///*-------------------------------------------------------------------------------*/
//
////vector数据存取
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
//	cout << endl << "第一个元素为: " << v1.front() << endl;
//	cout << "最后一个元素为: " << v1.back() << endl;
//}
//
///*--------------------------vector互换容器-----------------------------*/
///*
//	函数原型:
//	swap(vec);                         //将vec与本身的元素互换
//*/
///*-------------------------------------------------------------------------------*/
//
////vector互换容器
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
//	//巧用swap可以收缩内存空间
//	vector<int> v;
//	for (int i = 0; i < 10000; i++)
//		v.push_back(i);
//	cout << "容量为: " << v.capacity() << endl;
//	cout << "大小为: " << v.size() << endl;
//	v.resize(3);
//	cout << "容量为: " << v.capacity() << endl;
//	cout << "大小为: " << v.size() << endl;
//	vector<int>(v).swap(v);             //巧用swap可以收缩内存空间
//	cout << "容量为: " << v.capacity() << endl;
//	cout << "大小为: " << v.size() << endl;
//}
//
///*--------------------------vector预留空间-----------------------------*/
///*
//	减少vector在动态扩展容量时的扩展次数
//	函数原型:
//	reserve(int len);                 容器预留len个元素长度，预留位置不初始化，元素不可访问
//*/
///*-------------------------------------------------------------------------------*/
//
////vector预留空间
//void test7()
//{
//	vector<int> v;
//	v.reserve(10000);          //利用reserve预留空间
//
//	int num = 0;              //统计开辟次数
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