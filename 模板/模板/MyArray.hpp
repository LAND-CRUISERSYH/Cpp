//自己通用的数组类
#pragma once
#include<iostream>

using namespace std;

template<class T>
class MyArray
{
public:
	//有参构造  参数容量
	MyArray(int capacity)
	{
		//cout << "有参构造函数调用" << endl;
		m_Capacity = capacity;
		m_Size = 0;
		pAddress = new T[m_Capacity];
	}

	//拷贝构造
	MyArray(const MyArray& arr)
	{
		//cout << "拷贝构造函数调用" << endl;
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;
		//pAddress = arr.pAddress;                  //浅拷贝会导致堆区内容重复释放
		//深拷贝
		pAddress = new T[arr.m_Capacity];
		//将arr中的数据都拷贝过来
		for (int i = 0; i < m_Size; i++)
		{
			pAddress[i] = arr.pAddress[i];
		}
	}

	//operator=   防止浅拷贝问题
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "operator=函数调用" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (pAddress != NULL)
		{
			delete[] pAddress;
			pAddress = NULL;
			m_Capacity = 0;
			m_Size = 0;
		}
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;
		//深拷贝
		pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++)
			pAddress[i] = arr.pAddress[i];
		return *this;
		
	}

	//尾插法
	void PushBack(const T& val)
	{
		//判断数组是否已满
		if (m_Capacity == m_Size)
			cout << "数组已满!" << endl;
		else
		{
			pAddress[m_Size] = val;				//在数组末尾插入数据
			m_Size++;                        //更新数组大小
		}
	}

	//尾删法
	void PopBack()
	{
		//让用户访问不到最后一个元素，逻辑删除
		//判断数组是否为空
		if (m_Size == 0)
			cout << "数组为空!" << endl;
		else
		{
			m_Size--;                           //更新数组大小
		}
	}

	//通过下标方式访问数组元素
	T& operator[](int index)                //函数返回作为左值，则返回引用
	{
		return pAddress[index];
	}

	//返回数组容量
	int getCapacity()
	{
		return m_Capacity;
	}

	//返回数组大小
	int getSize()
	{
		return m_Size;
	}

	//析构函数
	~MyArray()
	{
		if (pAddress != NULL)
		{
			//cout << "析构函数调用" << endl;
			delete[] pAddress;
			pAddress = NULL;
		}
	}
	T* pAddress;                   //指针指向堆区开辟的内存空间
	int m_Capacity;                 //数组容量
	int m_Size;						//数组大小
};