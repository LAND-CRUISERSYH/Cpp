#include"orderFile.h"

//���캯��
OrderFile::OrderFile()
{
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);
	 
	string date;            //����
	string interval;		//ʱ���
	string stuId;			//ѧ�����
	string stuName;			//ѧ������
	string roomId;			//�������
	string status;			//ԤԼ״̬

	this->m_Size = 0;          //ԤԼ��¼����

	while (ifs >> date && ifs >> interval && ifs >> stuId && ifs >> stuName && ifs >> roomId && ifs >> status)
	{
		string key;
		string value;
		map<string, string> m;

		//��ȡ����
		int pos = date.find(":");
		if (pos != -1)
		{
			key = date.substr(0, pos);
			value = date.substr(pos + 1, date.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		//��ȡʱ���
	    pos = interval.find(":");
		if (pos != -1)
		{
			key = interval.substr(0, pos);
			value = interval.substr(pos + 1, interval.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		//��ȡѧ�����
		pos = stuId.find(":");
		if (pos != -1)
		{
			key = stuId.substr(0, pos);
			value = stuId.substr(pos + 1, stuId.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		//��ȡѧ������
		pos = stuName.find(":");
		if (pos != -1)
		{
			key = stuName.substr(0, pos);
			value = stuName.substr(pos + 1, stuName.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		//��ȡ�������
		pos = roomId.find(":");
		if (pos != -1)
		{
			key = roomId.substr(0, pos);
			value = roomId.substr(pos + 1, roomId.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		//��ȡԤԼ״̬
		pos = status.find(":");
		if (pos != -1)
		{
			key = status.substr(0, pos);
			value = status.substr(pos + 1, status.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		//��Сmap�������뵽���map������
		m_orderData.insert(make_pair(this->m_Size, m));
		this->m_Size++;
	}
	ifs.close();
}

//����ԤԼ��¼
void OrderFile::updateOrder()
{
	if (this->m_Size == 0)
		return;
	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);
	for (int i = 0; i < m_Size; i++)
	{
		ofs << "����: " << this->m_orderData[i]["����"] << " ";
		ofs << "ʱ���: " << this->m_orderData[i]["ʱ���"] << " ";
		ofs << "ѧ��ѧ�� " << this->m_orderData[i]["ѧ��ѧ��"] << " ";
		ofs << "ѧ������: " << this->m_orderData[i]["ѧ������"] << " ";
		ofs << "�������: " << this->m_orderData[i]["�������"] << " ";
		ofs << "���״̬: " << this->m_orderData[i]["���״̬"] << endl;
	}
	ofs.close();
}