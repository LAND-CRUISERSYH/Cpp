#include<iostream>
using namespace std;
#include"identity.h"
#include<fstream>
#include<string>
#include"globalFile.h"
#include"student.h"
#include"manager.h"
#include"teacher.h"

void show_Menu()                    //ҳ�����˵�
{
	cout << "****************��ӭ��������ԤԼϵͳ******************" << endl;
	cout << "************         1.   ѧ��          **************" << endl;
	cout << "************         2.   ��ʦ          **************" << endl;
	cout << "************         3.   ����Ա        **************" << endl;
	cout << "************         0.   �˳�ϵͳ      **************" << endl;
	cout << "******************************************************" << endl;
	cout << "����������ѡ��: ";	
}

//��¼����         ����1  �����ļ���    ����2   �����������
void LoginIn(string fileName, int type)
{
	//����ָ��   ����ָ���������
	Identity *person = NULL;

	//���ļ�
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//�ж��ļ��Ƿ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������!" << endl;
		ifs.close();
		return;
	}

	//׼�������û���Ϣ
	int id = 0;
	string name;
	string pwd;

	//�жϵ�¼���
	if (type == 1)
	{
		cout << "������ѧ��: ";
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "������ְ����: ";
		cin >> id;
	}

	cout << "�������û���: ";
	cin >> name;
	cout << "����������: ";
	cin >> pwd;

	if (type == 1)
	{
		//ѧ����¼��֤
		int fid;            //���ļ��ж�ȡ��id��
		string fname;		//���ļ��ж�ȡ������
		string fpwd;		//���ļ��ж�ȡ������
		while (ifs >> fid && ifs >> fname && ifs >> fpwd)
		{
			if (fid == id && fname == name && fpwd == pwd)
			{
				cout << "ѧ�������֤�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//����ѧ������Ӳ˵�
				return;
			}
		}
	}
	else if (type == 2)
	{
		//��ʦ��¼��֤
		int fid;                 //���ļ��ж�ȡ��id��
		string fname;				//���ļ��ж�ȡ������
		string fpwd;				//���ļ��ж�ȡ������
		while (ifs >> fid && ifs >> fname && ifs >> fpwd)
		{
			if (fid == id && fname == name && fpwd == pwd)
			{
				cout << "��ʦ�����֤�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//�����ʦ����Ӳ˵�
				return;
			}
		}
	}
	else if (type == 3)
	{
		//����Ա��¼��֤
		string fname;				//���ļ��ж�ȡ������
		string fpwd;				//���ļ��ж�ȡ������
		while (ifs >> fname && ifs >> fpwd)
		{
			if (fname == name && fpwd == pwd)
			{
				cout << "����Ա�����֤�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);
				//�������Ա����Ӳ˵�
				return;
			}
		}
	}
	cout << "��֤��¼ʧ��!" << endl;
	system("pause");
	system("cls");
	return;
}

int main()
{
	int select = 0;              //���ڽ����û�����
	while (true)
	{
		show_Menu();
		if (cin >> select)               //�����û����벢�ж��Ƿ���ȷ
		{
			switch (select)
			{
			case 1:                        //ѧ�����
				LoginIn(STUDENT_FILE, 1);
				break;
			case 2:                       //��ʦ���
				LoginIn(TEACHER_FILE, 2);
				break;
			case 3:                        //����Ա���
				LoginIn(ADMIN_FILE, 3);
				break;
			case 0:                      //�˳�ϵͳ
				cout << "��ӭ�´�ʹ��!" << endl;
				system("pause");
				return 0;
			default:
				cout << "�����������������!" << endl;
				system("pause");
				system("cls");
				break;
			}
		}
		else
		{
			cin.clear();
			cin.ignore(INT_MAX,'\n');                //������뻺����
			cout << "�����������������!" << endl;
			system("pause");
			system("cls");
		}
	}
	system("pause");
	return 0;
}