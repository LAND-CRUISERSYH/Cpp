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

	ofs << "date:" << date << " ";
	ofs << "interval:" << interval << " ";
	ofs << "stuId:" << this->m_sId << " ";
	ofs << "stuName:" << this->m_Name << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:" << 1 << endl;

	ofs.close();
	system("pause");
	system("cls");
}

//�鿴����ԤԼ
void Student::showMyOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.m_Size; i++)
	{
		//string ת  int
		//string ���� .c_str() ת const char*
		//����atoi(const char*)תint
		if (this->m_sId == atoi(of.m_orderData[i]["stuId"].c_str()))    //�ҵ�����ԤԼ
		{
			cout << "ԤԼ����: ��" << of.m_orderData[i]["date"] << "  ";
			cout << "ʱ���: " << (of.m_orderData[i]["interval"] == "1" ? "����" : "����") << "  ";
			cout << "�������: " << of.m_orderData[i]["roomId"] << "  ";
			string status = "״̬: ";
			// 1 �����   2 ��ԤԼ  -1.ԤԼʧ��   0 ȡ��ԤԼ
			if (of.m_orderData[i]["status"] == "1")
				status += "�����";
			else if (of.m_orderData[i]["status"] == "2")
				status += "ԤԼ�ɹ�";
			else if (of.m_orderData[i]["status"] == "-1")
				status += "ԤԼʧ��,���δͨ��";
			else {
				status += "ȡ��ԤԼ";
			}
			cout << status << endl;
		}
	}
	system("pause");
	system("cls");
}

//�鿴����ԤԼ
void Student::showAllOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << "         ";
		cout << "ԤԼ����: ��" << of.m_orderData[i]["date"] << "  ";
		cout << "ʱ���: " << (of.m_orderData[i]["interval"] == "1" ? "����" : "����") << "  ";
		cout << "ѧ��ѧ��: " << of.m_orderData[i]["stuId"] << " ";
		cout << "ѧ������: " << of.m_orderData[i]["stuName"] << " ";

		cout << "�������: " << of.m_orderData[i]["roomId"] << "  ";
		string status = "״̬: ";
		// 1 �����   2 ��ԤԼ  -1.ԤԼʧ��   0 ȡ��ԤԼ
		if (of.m_orderData[i]["status"] == "1")
			status += "�����";
		else if (of.m_orderData[i]["status"] == "2")
			status += "ԤԼ�ɹ�";
		else if (of.m_orderData[i]["status"] == "-1")
			status += "ԤԼʧ��,���δͨ��";
		else {
			status += "ȡ��ԤԼ";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}


//ȡ��ԤԼ
void Student::cancelOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "����л�ԤԼ�ɹ��ļ�¼����ȡ����������ȡ���ļ�¼" << endl;
	int index = 1;
	vector<int> v;              //�������������е��±���
	for (int i = 0; i < of.m_Size; i++)
	{
		//���ж�������ѧ��
		if (m_sId == atoi(of.m_orderData[i]["stuId"].c_str()))
		{
			//��ɸѡ״̬
			if (of.m_orderData[i]["status"] == "1" || of.m_orderData[i]["status"] == "2")
			{
				v.push_back(i);
				cout << index++ << "     ";
				cout << "ԤԼ����: ��" << of.m_orderData[i]["date"] << "  ";
				cout << "ʱ���: " << (of.m_orderData[i]["interval"] == "1" ? "����" : "����") << "  ";
				cout << "�������: " << of.m_orderData[i]["roomId"] << " ";
				string status = "״̬";
				if (of.m_orderData[i]["status"] == "1")
					status += "�����";
				else if (of.m_orderData[i]["status"] == "2")
					status += "ԤԼ�ɹ�";
				cout << status << endl;
			}
		}
	}
	vector<int>::size_type select = 0;
	while (true)
	{
		cout << "������ȡ���ļ�¼(0������): ";
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
				break;
			else
			{
				of.m_orderData[v[select - 1]]["status"] = "0";
				of.updateOrder();
				cout << "ȡ���ɹ�!" << endl;
				break;
			}
		}
		cout << "������������������!" << endl;
	}
	system("pause");
	system("cls");
}