#pragma once
#include"identity.h"

//��ʦ��
class Teacher :public Identity
{
public:

	//Ĭ�Ϲ���
	Teacher();

	//�вι���
	Teacher(int id, string name, string pwd);

	//��ʾ�˵�
	virtual void Menu();

	//�鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void valiOrder();

	int m_tId;                   //��ʦ���
};