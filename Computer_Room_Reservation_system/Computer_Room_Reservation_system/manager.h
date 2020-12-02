#pragma once
#include"identity.h"
#include<string>
#include<fstream>
#include"globalFile.h"
#include<vector>
#include"student.h"
#include"teacher.h"
#include<algorithm>
#include"computerRoom.h"

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

	//��ʼ������
	void initVector();

	//��ʼ��������Ϣ
	void initRoom();

	//����ظ�      ����1  ���ѧ�Ż��ʦ���   ����2  �������
	bool checkRepeat(int id, int type);

	//ѧ������
	vector<Student> vStu;

	//��ʦ����
	vector<Teacher> vTea;

	//��������
	vector<ComputerRoom> vCom;
};
