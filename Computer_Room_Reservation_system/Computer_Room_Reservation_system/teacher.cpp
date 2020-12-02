#include"teacher.h"

//Ĭ�Ϲ���
Teacher::Teacher()
{

}

//�вι���
Teacher::Teacher(int id, string name, string pwd)
{
	//��ʼ������
	this->m_tId = id;
	this->m_Name = name;
	this->m_pwd = pwd;
}

//��ʾ�˵�
void Teacher::Menu()
{
	cout << "************        ��ӭ��ʦ: " << this->m_Name << "      *************" << endl;
	cout << "************        1.   �鿴����ԤԼ   *************" << endl;
	cout << "************        2.   ���ԤԼ       *************" << endl;
	cout << "************        0.   ע����¼       *************" << endl;
	cout << "******************************************************" << endl;
	cout << "����������ѡ��: ";
}

//�鿴����ԤԼ
void Teacher::showAllOrder()
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

//���ԤԼ
void Teacher::valiOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼!" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "����˵�ԤԼ��¼����" << endl;
	int index = 0;
	vector<int> v;              //�������������е��±���
	for (int i = 0; i < of.m_Size; i++)
	{
		if (of.m_orderData[i]["status"] == "1")
		{
			v.push_back(i);
			cout << ++index << "     ";
			cout << "ԤԼ����: ��" << of.m_orderData[i]["date"] << "  ";
			cout << "ʱ���: " << (of.m_orderData[i]["interval"] == "1" ? "����" : "����") << "  ";
			cout << "ѧ��ѧ��: " << of.m_orderData[i]["stuId"] << " ";
			cout << "ѧ������: " << of.m_orderData[i]["stuName"] << " ";
			cout << "�������: " << of.m_orderData[i]["roomId"] << "  ";
			cout << "���״̬: �����" << endl;
		}
	}
	vector<int>::size_type select = 0;
	int ret = 0;    //������ʦ��˽��
	while (true)
	{
		cout << "��������˵�ԤԼ��¼(0������): ";
		cin >> select;        //�����û�������
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
				break;
			else
			{
				cout << "��������˽��(1.ͨ��    2.��ͨ��): ";
				cin >> ret;
				if (ret == 1)
				{
					//ͨ�����
					of.m_orderData[v[select - 1]]["status"] = "2";
				}
				else
				{
					//��ͨ�����
					of.m_orderData[v[select - 1]]["status"] = "-1";
				}
				of.updateOrder();         //����ԤԼ��¼
				cout << "������" << endl;
				break;
			}
		}
		cout << "������������������!" << endl;
	}
	system("pause");
	system("cls");
}