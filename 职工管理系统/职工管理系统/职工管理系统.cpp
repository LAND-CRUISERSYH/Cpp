#include<iostream>
#include"workerManager.h"
//#include"boss.h"
//#include"employee.h"
//#include"manager.h"
//#include"worker.h"
using namespace std;

/*
	1.ְ������ϵͳ������������˾������Ա������Ϣ������C++��ʵ��һ�����ڶ�̬��ְ������ϵͳ
	2.��˾��ְ����Ϊ����:��ͨԱ���������ϰ�;
	3.��ʾ��Ϣʱ����Ҫ��ʾְ����ţ�ְ��������ְ����λ���Լ�ְ��
		��ͨԱ��ְ��:��ɾ�����������
		����ְ��:����ϰ彻�������񣬲��·������Ա��
		�ϰ�ְ��:����˾��������
*/

/*
	����ϵͳ����Ҫʵ�ֵĹ�������:
		1.�˳��������:�˳���ǰ����ϵͳ
		2.����ְ����Ϣ:ʵ���������ְ�����ܣ�����Ϣ¼�뵽�ļ��У�ְ����ϢΪ:ְ����ţ����������ű��
		3.��ʾְ����Ϣ:��ʾ��˾�ڲ�����ְ������Ϣ
		4.ɾ����ְְ��:���ձ��ɾ��ָ����ְ��
		5.�޸�ְ����Ϣ:���ձ���޸�ְ��������Ϣ
		6.����ְ����Ϣ:����ְ���ı�Ż���ְ�����������в�����ص���Ա��Ϣ
		7.���ձ������:����ְ����ţ�������������������û�ָ��
		8.��������ĵ�:����ļ��м�¼������ְ����Ϣ(���ǰ��Ҫ�ٴ�ȷ�ϣ���ֹ��ɾ)
*/

//void test1()
//{
//	worker *w1 = new employee(1, "����", 1);
//	w1->showInfo();
//	delete w1;
//	w1 = NULL;
//
//	worker *w2 = new manager(2, "����", 2);
//	w2->showInfo();
//	delete w2;
//	w2 = NULL;
//
//	worker *w3 = new boss(3, "����", 3);
//	w3->showInfo();
//	delete w3;
//	w3 = NULL;
//}

int main()
{
	//test1();
	workerManager wm;                        //ʵ���������߶���
	int choice = 0;                        //�洢�û���ѡ��
	while (true)
	{
		wm.Show_Menu();                             //����չʾ�����߲˵�
		cout << "����������ѡ��:  ";
		cin >> choice;                     //�����û���ѡ��
		switch (choice)
		{
		case 0:                               //�˳�ϵͳ
			wm.exitSystem();
			break;
		case 1:                           //����ְ��
			wm.Add();
			break;
		case 2:							//��ʾְ��
			wm.show_Emp();
			break;
		case 3:								//ɾ��ְ��
			wm.Del_Emp();
			break;
		case 4:							//�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5:							//����ְ��
			wm.Find_Emp();
			break;
		case 6:							//����ְ��
			wm.Sort_Emp();
			break;
		case 7:								//����ĵ�
			wm.Clean_File();
			break;
		default:
			cout << "�������,����������" << endl;
			system("cls");
			break;
		}
	}
	return 0;
}