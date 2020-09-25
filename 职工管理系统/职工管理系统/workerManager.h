#pragma once  //��ֹͷ�ļ����ظ�����

#include<iostream>           //�������������ͷ�ļ�
#include<fstream>
#include"worker.h"
#include"boss.h"
#include"employee.h"
#include"manager.h"
#include"worker.h"

#define FILENAME "empFile.txt"

/*
	�����ฺ�������:
		1.���û��Ĺ�ͨ�˵�����
		2.��ְ������ɾ��Ĳ���
		3.���ļ��Ķ�д����
*/

using namespace std;                    //ʹ�ñ�׼�����ռ�

class workerManager
{	
public:
	//���캯��
	workerManager();
	
	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//���ְ��
	void Add();

	//�����ļ�
	void save();

	//ͳ���ļ�������
	int getEmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//���ݱ���ж�ְ���Ƿ���ڣ����ڷ���ְ���������е�λ�ã������ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����Ա��
	void Find_Emp();

	//����Ա��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��������
	~workerManager();
	 
	int m_EmpNum;                         //��¼ְ������
	worker** m_EmpArray;				//ְ������ָ��
	bool m_FileIsEmpty;                   //��־�ļ��Ƿ�Ϊ��
};