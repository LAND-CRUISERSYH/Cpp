#pragma once
#include"identity.h"

//ѧ����
class Student :public Identity
{
public:
	//Ĭ�Ϲ���
	Student();

	//�вι���
	Student(int id, string name, string pwd);

	//��ʾ�˵�
	virtual void Menu();

	//����ԤԼ
	void ApplyOrder();

	//�鿴����ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();


	int m_sId;               //ѧ��
};