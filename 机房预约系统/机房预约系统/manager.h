#pragma once
#include"identity.h"

//����Ա��
class Manager :public Identity
{
public:
	//Ĭ�Ϲ���
	Manager();

	//�вι���
	Manager(string name, string pwd);

	//��ʾ�˵�
	virtual void Menu();

	//����˺�
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��Ϣ
	void clearFile();
};