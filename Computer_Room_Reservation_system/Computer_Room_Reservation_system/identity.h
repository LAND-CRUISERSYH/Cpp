#pragma once         //��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;

//��ݳ������
class Identity
{
public:
	virtual void Menu() = 0;    //�����˵�   ���麯��

	string m_Name;            //�û���
	string m_pwd;				//����
};