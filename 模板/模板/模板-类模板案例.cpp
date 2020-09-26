#include<iostream>
#include<string>
#include"MyArray.hpp"

using namespace std;

/*
	实现一个通用的数组类，要求如下:
	1.可以对内置数据类型以及自定义数据类型进行存储
	2.将数组中的数据存储到堆区
	3.构造函数中可以传入数组的容量
	4.提供对应的拷贝构造函数以及operator=防止浅拷贝问题
	5.提供尾插法和尾删法对数组中的数据进行增加和删除
	6.可以通过下标的方式访问数组中的元素
	7.可以获取数组中当前元素个数和数组的容量
*/

void printArray(MyArray<int> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
		cout << arr[i] << " ";
}


//测试自定义类型
class Person
{
public:
	Person() {};
	Person(string name,int age):m_Name(name),m_Age(age){}
	string m_Name;
	int m_Age;
};

void test1()
{
	MyArray<int> arr1(10);
	/*MyArray<int> arr2(arr1);
	MyArray<int> arr3(6);
	arr3 = arr1;*/

	for (int i = 0; i < 10; i++)
	{
		//利用尾插法向数组中插入数据
		arr1.PushBack(i);
	}
	cout << "打印输出: ";
	printArray(arr1);
	cout << endl;
	cout << "容量: " << arr1.getCapacity() << endl;
	cout << "大小: " << arr1.getSize() << endl;
	arr1.PopBack();
	cout << "--------------------------------------" << endl;
	cout << "删除最后一个元素!" << endl;
	cout << "打印输出: ";
	printArray(arr1);
	cout << endl;
	cout << "容量: " << arr1.getCapacity() << endl;
	cout << "大小: " << arr1.getSize() << endl;
}

void printPerson(MyArray<Person> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名: " << arr[i].m_Name << "\t年龄: " << arr[i].m_Age << endl;
	}
}

void test2()
{
	MyArray<Person> arr(10);
	Person p1("张三", 15);
	Person p2("李四", 28);
	Person p3("王五", 50);
	Person p4("赵六", 99);
	Person p5("陈七", 12);

	//将数据插入到数组中
	arr.PushBack(p1);
	arr.PushBack(p2);
	arr.PushBack(p3);
	arr.PushBack(p4);
	arr.PushBack(p5);

	printPerson(arr);
	cout << "容量: " << arr.getCapacity() << endl;
	cout << "大小: " << arr.getSize() << endl;
	arr.PopBack();
	cout << "--------------------------------------" << endl;
	cout << "删除最后一个元素!" << endl;
	cout << "打印输出: ";
	printPerson(arr);
	cout << endl;
	cout << "容量: " << arr.getCapacity() << endl;
	cout << "大小: " << arr.getSize() << endl;
}


int main()
{
	//test1();
	test2();
	return 0;
}