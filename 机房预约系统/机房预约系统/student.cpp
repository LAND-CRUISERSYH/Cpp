#include"student.h"

//Ĭ�Ϲ���
Student::Student()
{

}

//�вι���
Student::Student(int id, string name, string pwd)
{
	//��ʼ������
	this->m_sId = id;
	this->m_Name = name;
	this->m_pwd = pwd;

	//��ʼ��������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	
	ComputerRoom com;
	while (ifs >> com.m_id&&ifs >> com.m_size)
	{
		vCom.push_back(com);         //����ȡ����Ϣ����������
	}
	ifs.close();
}

//��ʾ�˵�
void Student::Menu()
{
	cout << "************        ��ӭѧ��: " << this->m_Name << "      *************" << endl;
	cout << "************        1.   ����ԤԼ       *************" << endl;
	cout << "************        2.   �鿴����ԤԼ   *************" << endl;
	cout << "************        3.   �鿴����ԤԼ   *************" << endl;
	cout << "************        4.   ȡ��ԤԼ       *************" << endl;
	cout << "************        0.   ע����¼       *************" << endl;
	cout << "******************************************************" << endl;
	cout << "����������ѡ��: ";
}

//����ԤԼ
void Student::ApplyOrder()
{
	cout << "��������ʱ��Ϊ��һ������!" << endl;
	 
	int date = 0;        //����
	int interval = 0;		//ʱ���
	int room = 0;			//�������

	while (true)
	{
		cout << "����������ԤԼʱ��(1.��һ  2.�ܶ�  3.����  4.����  5.����): ";
		cin >> date;
		if (date >= 1 && date <= 5)
			break;
		else
			cout << "������������������" << endl;
	}
	while (true)
	{
		cout << "����������ԤԼ��ʱ���(1.����  2.����): ";
		cin >> interval;
		if (interval >= 1 && interval <= 2)
			break;
		else
			cout << "������������������" << endl;
	}
	cout << "������Ϣ����: " << endl;
	for (vector<ComputerRoom>::size_type i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].m_id << "�Ż���--" << "����: " << vCom[i].m_size << endl;
	}
	while (true)
	{
		cout << "��ѡ�����: ";
		cin >> room;
		if (room >= 1 && room <= 3)
			break;
		else
			cout << "������������������" << endl;
	}
	cout << "ԤԼ�ɹ�!�����!" << endl;
	
	//����Ϣд�뵽�ļ���
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);

	ofs << "����: " << date << " ";
	ofs << "ʱ���: " << interval << " ";
	ofs << "ѧ��ѧ��: " << this->m_sId << " ";
	ofs << "ѧ������: " << this->m_Name << " ";
	ofs << "�������: " << room << " ";
	ofs << "���״̬: " << 1 << endl;

	ofs.close();
	system("pause");
	system("cls");
}

//�鿴����ԤԼ
void Student::showMyOrder()
{

}

//�鿴����ԤԼ
void Student::showAllOrder()
{

}

//ȡ��ԤԼ
void Student::cancelOrder()
{

}