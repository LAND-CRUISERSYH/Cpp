//�Լ�ͨ�õ�������
#pragma once
#include<iostream>

using namespace std;

template<class T>
class MyArray
{
public:
	//�вι���  ��������
	MyArray(int capacity)
	{
		//cout << "�вι��캯������" << endl;
		m_Capacity = capacity;
		m_Size = 0;
		pAddress = new T[m_Capacity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
		//cout << "�������캯������" << endl;
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;
		//pAddress = arr.pAddress;                  //ǳ�����ᵼ�¶��������ظ��ͷ�
		//���
		pAddress = new T[arr.m_Capacity];
		//��arr�е����ݶ���������
		for (int i = 0; i < m_Size; i++)
		{
			pAddress[i] = arr.pAddress[i];
		}
	}

	//operator=   ��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "operator=��������" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (pAddress != NULL)
		{
			delete[] pAddress;
			pAddress = NULL;
			m_Capacity = 0;
			m_Size = 0;
		}
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;
		//���
		pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++)
			pAddress[i] = arr.pAddress[i];
		return *this;
		
	}

	//β�巨
	void PushBack(const T& val)
	{
		//�ж������Ƿ�����
		if (m_Capacity == m_Size)
			cout << "��������!" << endl;
		else
		{
			pAddress[m_Size] = val;				//������ĩβ��������
			m_Size++;                        //���������С
		}
	}

	//βɾ��
	void PopBack()
	{
		//���û����ʲ������һ��Ԫ�أ��߼�ɾ��
		//�ж������Ƿ�Ϊ��
		if (m_Size == 0)
			cout << "����Ϊ��!" << endl;
		else
		{
			m_Size--;                           //���������С
		}
	}

	//ͨ���±귽ʽ��������Ԫ��
	T& operator[](int index)                //����������Ϊ��ֵ���򷵻�����
	{
		return pAddress[index];
	}

	//������������
	int getCapacity()
	{
		return m_Capacity;
	}

	//���������С
	int getSize()
	{
		return m_Size;
	}

	//��������
	~MyArray()
	{
		if (pAddress != NULL)
		{
			//cout << "������������" << endl;
			delete[] pAddress;
			pAddress = NULL;
		}
	}
	T* pAddress;                   //ָ��ָ��������ٵ��ڴ�ռ�
	int m_Capacity;                 //��������
	int m_Size;						//�����С
};