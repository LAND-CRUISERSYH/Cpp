#include"manager.h"

//Ĭ�Ϲ���
Manager::Manager()
{

}

//�вι���
Manager::Manager(string name, string pwd)
{
	//��ʼ������Ա��Ϣ
	m_Name = name;
	m_pwd = pwd;
	   
	//��ʼ������   ��ȡ�ļ�����ʦ��ѧ������Ϣ
	this->initVector();

	//��ʼ��������Ϣ
	this->initRoom();
}

//��ʾ�˵�
void Manager::Menu()
{
	cout << "************       ��ӭ����Ա: " << this->m_Name << "    *************" << endl;
	cout << "************        1.   ����˺�       *************" << endl;
	cout << "************        2.   �鿴�˺�       *************" << endl;
	cout << "************        3.   �鿴����       *************" << endl;
	cout << "************        4.   ���ԤԼ       *************" << endl;
	cout << "************        0.   ע����¼       *************" << endl;
	cout << "******************************************************" << endl;
	cout << "����������ѡ��: ";
}

//����˺�
void Manager::addPerson()
{
	cout << "�������������(1.ѧ��    2.��ʦ): ";
	string fileName;            //�����ļ���
	string tip;                 //��ʾID��
	string errorTip;            //�ظ�������ʾ

	ofstream ofs;               //�ļ���������
	int select = 0;               //���ڽ����û�����
	cin >> select;
	if (select == 1)               //���ѧ��
	{
		fileName = STUDENT_FILE;
		tip = "������ѧ��: ";
		errorTip = "ѧ�������ظ�������������!";
	}
	else                            //��ӽ�ʦ
	{
		fileName = TEACHER_FILE;
		tip = "�������ʦ���: ";
		errorTip = "��ʦ��������ظ�������������!";
	}

	int id;           //ѧ�Ż�ְ�����
	string name;			//����
	string pwd;				//����

	while (true)
	{
		cout << tip;
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret)       //���ظ�
			cout << errorTip << endl;
		else
			break;
	}
	cout << "����������: ";
	cin >> name;
	cout << "����������: ";
	cin >> pwd;

	ofs.open(fileName, ios::out | ios::app);           //����׷�ӵķ�ʽд�ļ�
	ofs << id << " " << name << " " << pwd << " " << endl;       //���ļ����������

	ofs.close();
	cout << "��ӳɹ�!" << endl;

	system("pause");
	system("cls");

	//���ó�ʼ�������ṹ�����»�ȡ�ļ�������
	this->initVector();
	return;
}

void printStudent(Student &s)
{
	cout << "ѧ��: " << s.m_sId << "    ����: " << s.m_Name << "    ����: " << s.m_pwd << endl;
}

void printTeacher(Teacher &t)
{
	cout << "��ʦ���: " << t.m_tId << "    ����: " << t.m_Name << "    ����: " << t.m_pwd << endl;
}

//�鿴�˺�
void Manager::showPerson()
{
	cout << "��ѡ��鿴������(1.ѧ����Ϣ   2.��ʦ��Ϣ):";
	int select = 0;                  //���ڽ����û�ѡ��
	cin >> select;

	if (select == 1)
	{
		cout << "����ѧ����Ϣ����: " << endl;
		for_each(vStu.begin(), vStu.end(), printStudent);
	}
	else
	{
		cout << "������ʦ��Ϣ����: " << endl;
		for_each(vTea.begin(), vTea.end(), printTeacher);
	}
	system("pause");
	system("cls");
}

void printRoom(ComputerRoom &c)
{
	cout << "�������:  " << c.m_id << "    ��������:  " << c.m_size << endl;
}

//�鿴������Ϣ
void Manager::showComputer()
{
	cout << "������Ϣ����: " << endl;
	for_each(vCom.begin(), vCom.end(), printRoom);
	system("pause");
	system("cls");
}

//���ԤԼ��Ϣ
void Manager::clearFile()
{
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();

	cout << "��ճɹ�!" << endl;
	system("pause");
	system("cls");
}

//��ʼ������
void Manager::initVector()
{
	//ȷ���������״̬
	vStu.clear();
	vTea.clear();
	//��ȡѧ��
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��!" << endl;
		return;
	}

	Student s;
	while (ifs >> s.m_sId&&ifs >> s.m_Name&&ifs >> s.m_pwd)
	{
		vStu.push_back(s);
	}
	ifs.close();

	//��ȡ��ʦ��Ϣ
	ifs.open(TEACHER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��!" << endl;
		return;
	}

	Teacher t;
	while (ifs >> t.m_tId&&ifs >> t.m_Name&&ifs >> t.m_pwd)
	{
		vTea.push_back(t);
	}
	ifs.close();
}

//����ظ�      ����1  ���ѧ�Ż��ʦ���   ����2  �������
bool Manager::checkRepeat(int id, int type)
{ 
	if (type == 1)           //���ѧ��
	{
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (id == it->m_sId)
				return true;
		}
	}
	else                                //�����ʦ
	{
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++)
		{
			if (id == it->m_tId)
				return true;
		}
	}
	return false;
}

//��ʼ��������Ϣ
void Manager::initRoom()
{
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	ComputerRoom com;
	while (ifs >> com.m_id&&ifs >> com.m_size)
	{
		vCom.push_back(com);
	}
	ifs.close();
}