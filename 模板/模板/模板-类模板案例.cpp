#include<iostream>
#include<string>
#include"MyArray.hpp"

using namespace std;

/*
	ʵ��һ��ͨ�õ������࣬Ҫ������:
	1.���Զ��������������Լ��Զ����������ͽ��д洢
	2.�������е����ݴ洢������
	3.���캯���п��Դ������������
	4.�ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
	5.�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
	6.����ͨ���±�ķ�ʽ���������е�Ԫ��
	7.���Ի�ȡ�����е�ǰԪ�ظ��������������
*/

void printArray(MyArray<int> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
		cout << arr[i] << " ";
}


//�����Զ�������
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
		//����β�巨�������в�������
		arr1.PushBack(i);
	}
	cout << "��ӡ���: ";
	printArray(arr1);
	cout << endl;
	cout << "����: " << arr1.getCapacity() << endl;
	cout << "��С: " << arr1.getSize() << endl;
	arr1.PopBack();
	cout << "--------------------------------------" << endl;
	cout << "ɾ�����һ��Ԫ��!" << endl;
	cout << "��ӡ���: ";
	printArray(arr1);
	cout << endl;
	cout << "����: " << arr1.getCapacity() << endl;
	cout << "��С: " << arr1.getSize() << endl;
}

void printPerson(MyArray<Person> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "����: " << arr[i].m_Name << "\t����: " << arr[i].m_Age << endl;
	}
}

void test2()
{
	MyArray<Person> arr(10);
	Person p1("����", 15);
	Person p2("����", 28);
	Person p3("����", 50);
	Person p4("����", 99);
	Person p5("����", 12);

	//�����ݲ��뵽������
	arr.PushBack(p1);
	arr.PushBack(p2);
	arr.PushBack(p3);
	arr.PushBack(p4);
	arr.PushBack(p5);

	printPerson(arr);
	cout << "����: " << arr.getCapacity() << endl;
	cout << "��С: " << arr.getSize() << endl;
	arr.PopBack();
	cout << "--------------------------------------" << endl;
	cout << "ɾ�����һ��Ԫ��!" << endl;
	cout << "��ӡ���: ";
	printPerson(arr);
	cout << endl;
	cout << "����: " << arr.getCapacity() << endl;
	cout << "��С: " << arr.getSize() << endl;
}


int main()
{
	//test1();
	test2();
	return 0;
}