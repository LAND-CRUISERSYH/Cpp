#include"workerManager.h"

//���캯��
workerManager::workerManager()
{
	//1.�ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);          //���ļ�
	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;
		//��ʼ������
		m_EmpNum = 0;                //��ʼ����¼����
		m_EmpArray = NULL;			//��ʼ������ָ��
		m_FileIsEmpty = true;		//��ʼ���ļ��Ƿ�Ϊ��
		ifs.close();
		return;
	}
	//2.�ļ�������û�м�¼
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��" << endl;
		//��ʼ������
		m_EmpNum = 0;                //��ʼ����¼����
		m_EmpArray = NULL;			//��ʼ������ָ��
		m_FileIsEmpty = true;		//��ʼ���ļ��Ƿ�Ϊ��
		ifs.close();
		return;
	}

	//3.�ļ��������м�¼
	int num = getEmpNum();
	//cout << "ְ������Ϊ: " << num << endl;
	m_EmpNum = num;
	//���ٿռ�
	m_EmpArray = new worker*[m_EmpNum];
	//���ļ��е����ݣ��浽������
	init_Emp();

}

//��������
workerManager::~workerManager()
{
	if (m_EmpArray != NULL)
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			if (m_EmpArray[i] != NULL)
			{
				delete m_EmpArray[i];
				m_EmpArray[i] = NULL;
			}
		}
		delete[] m_EmpArray;
		m_EmpArray = NULL;
	}
}


//չʾ�˵�
void workerManager::Show_Menu()
{
	cout << "**************************************" << endl;
	cout << "******** ��ӭʹ��ְ������ϵͳ ********" << endl;
	cout << "********    0.�˳�����ϵͳ    ********" << endl;
	cout << "********    1.����ְ����Ϣ    ********" << endl;
	cout << "********    2.��ʾְ����Ϣ    ********" << endl;
	cout << "********    3.ɾ��ְ����Ϣ    ********" << endl;
	cout << "********    4.�޸�ְ����Ϣ    ********" << endl;
	cout << "********    5.����ְ����Ϣ    ********" << endl;
	cout << "********    6.���ձ������    ********" << endl;
	cout << "********    7.��������ĵ�    ********" << endl;
	cout << "**************************************" << endl;
}

//�˳�ϵͳ
void workerManager::exitSystem()
{
	cout << "��ӭ���´�ʹ��!" << endl;
	exit(0);                                 //�˳�����
}

//���ְ��
void workerManager::Add()
{
	int id;            //����Ա�����
	string name;         //����Ա������
	int dId;              //����Ա�����ű��

	int count;                //�����û������Ա������

	cout << "��������Ҫ��ӵ�Ա������: ";
	cin >> count;
	if (count > 0)
	{
		int newSize = m_EmpNum + count;                  //��������¿ռ��С �¿ռ�����=ԭ����¼����+����ӵ�����
		worker** newSpace = new worker*[newSize];         //�����¿ռ�
		if (m_EmpArray != NULL)                     //��ԭ���ռ������ݣ��������¿ռ�
		{
			for (int i = 0; i < m_EmpNum; i++)
				newSpace[i] = m_EmpArray[i];
		}
		for (int i = 0; i < count; i++)                      //�������������
		{
			cout << "�������" << i + 1 << "����Ա�����: ";
			cin >> id;
			cout << "�������" << i + 1 << "����Ա������: ";
			cin >> name;
			cout << "��ѡ���ְ����λ(1.Ա��  2.����  3.�ϰ�):  ";
			cin >> dId;

			worker* w = NULL;
			switch (dId)
			{
			case 1:
				w = new employee(id, name, 1);
				break;
			case 2:
				w = new manager(id, name, 2);
				break;
			case 3:
				w = new boss(id, name, 3);
				break;
			default:
				break;
			}
			newSpace[m_EmpNum + i] = w;              //��������ְ��ָ�뱣�浽������
		}
		delete[] m_EmpArray;                     //�ͷ�ԭ�пռ�
		m_EmpArray = newSpace;                     //�����¿ռ�ָ��
		m_EmpNum = newSize;                  //�����µ�ְ������
		m_FileIsEmpty = false;                   //����ְ����¼��Ϊ��
		cout << "�ɹ����" << count << "����ְ��!" << endl;           //��ʾ��ӳɹ�
		save();                        //�������ݵ��ļ���
	}
	else
	{
		cout << "����������!" << endl;
	}
	system("pause");        //��������������ص��ϼ�Ŀ¼
	system("cls");
}


//�����ļ�
void workerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);            //������ķ�ʽ���ļ�     д�ļ�
	for (int i = 0; i < m_EmpNum; i++)
	{
		ofs << m_EmpArray[i]->m_Id << "  " << m_EmpArray[i]->m_Name << "  " << m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}

//ͳ���ļ�������
int workerManager::getEmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);       //���ļ�        ���ļ�

	int id;
	string name;
	int dId;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
		//ͳ������
		num++;
	ifs.close();
	return num;
}

//��ʼ��Ա��
void workerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		worker *w = NULL;
		if (dId == 1)               //��ͨԱ��
			w = new employee(id, name, dId);
		else if (dId == 2)                 //����
			w = new manager(id, name, dId);
		else                          //�ϰ�
			w = new boss(id, name, dId);
		m_EmpArray[index] = w;
		index++;
	}
	ifs.close();
}

//��ʾְ��
void workerManager::show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (m_FileIsEmpty)
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	else
		for (int i = 0; i < m_EmpNum; i++)
			//���ö�̬���ó���ӿ�
			m_EmpArray[i]->showInfo();
	system("pause");         //�������������
	system("cls");
}

//ɾ��ְ��
void workerManager::Del_Emp()
{
	if (m_FileIsEmpty)
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	else
	{
		//����ְ����Ž���ɾ��
		cout << "��������Ҫɾ����ְ�����: ";
		int id = 0;
		cin >> id;
		int index = IsExist(id);
		if (index != -1)              //˵��ְ�����ڲ�ɾ����λ��ְ��
		{
			//����ǰ��
			for (int i = index; i < m_EmpNum-1; i++)
			{
				m_EmpArray[i] = m_EmpArray[i + 1];
			}
			m_EmpNum--;               //���������м�¼��Ա����
			save();                   //����ͬ�����µ��ļ���
			cout << "ɾ���ɹ�!" << endl;
		}
		else
			cout << "��ְ��������!" << endl;
	}
	system("pause");           //�������������
	system("cls");
}

//���ݱ���ж�ְ���Ƿ���ڣ����ڷ���ְ���������е�λ�ã������ڷ���-1
int workerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < m_EmpNum; i++)
	{
		if (m_EmpArray[i]->m_Id == id)            //����ҵ�ְ��
		{
			index = i;
			break;
		}
	}
	return index;
}

//�޸�ְ��
void workerManager::Mod_Emp()
{
	if (m_FileIsEmpty)
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	else
	{
		cout << "��������Ҫ�޸ĵ�Ա�����: ";
		int id;
		cin >> id;
		int ret = IsExist(id);
		if (ret != -1)               //�ҵ���Ա��
		{
			delete m_EmpArray[ret];
			int Id;
			string name;
			int dId;
			cout << "�鵽" << id << "��Ա��!" << endl;
			cout << "��������Ա�����: ";
			cin >> Id;
			cout << "��������Ա������: ";
			cin >> name;
			cout << "��������Ա����λ(1.��ְͨ�� 2.���� 3.�ϰ�): ";
			cin >> dId;
			worker *w = NULL;
			switch (dId)
			{
			case 1:
				w = new employee(Id, name, dId);
				break;
			case 2:
				w = new manager(Id, name, dId);
				break;
			case 3:
				w = new boss(Id, name, dId);
				break;
			default:
				break;
			}
			//�������ݵ�������
			m_EmpArray[ret] = w;
			//ͬ�����ݵ��ļ���
			save();
			cout << "�޸ĳɹ�!" << endl;
		}
		else
			cout << "��ְ��������!" << endl;
	}
	system("pause");               //�������������
	system("cls");            
}

//����Ա��
void workerManager::Find_Emp()
{
	if (m_FileIsEmpty)
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	else
	{
		cout << "��������Ҫ���ҵķ�ʽ(1.��Ա����Ų���   2.��Ա����������):";
		int select;
		cin >> select;
		if (select == 1)
		{
			cout << "��������Ҫ���ҵ�Ա�����: ";
			int id;
			cin >> id;
			int ret = IsExist(id);
			if (ret != -1)           //�ҵ���ְ��
			{
				cout << "���ҳɹ�����Ϣ����!" << endl;
				m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "��ְ��������!" << endl;
			}
		}
		else if (select == 2)
		{
			cout << "��������Ҫ���ҵ�Ա������: ";
			string name;
			bool flag = false;             //�ж��Ƿ�鵽
			cin >> name;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_Name == name)
				{
					flag = true;
					cout << "���ҳɹ�����Ϣ����!" << endl;
					m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
				cout << "��ְ��������!" << endl;

		}
		else {
			cout << "�����ѡ������" << endl;
		}
	}
	system("pause");          //�����������
	system("cls");
}

//����Ա��
void workerManager::Sort_Emp()
{
	if (m_FileIsEmpty)
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	else
	{
		cout << "��ѡ������ʽ(1.��Ա�������������  2.��Ա����Ž�������): ";
		int select;
		cin >> select;     
		for (int i = 0; i < m_EmpNum; i++)
		{
			int Index = i;             //������Сֵ�����ֵ�±�
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1)                          //����
				{
					if (m_EmpArray[Index]->m_Id > m_EmpArray[j]->m_Id)
						Index = j;
				}
				else                                     //����
				{
					if (m_EmpArray[Index]->m_Id < m_EmpArray[j]->m_Id)
						Index = j;
				}
			}
			//�ж�һ��ʼ�϶�����Сֵ�����ֵ �ǲ��� �������Сֵ�����ֵ ������� ��������
			if (i != Index)
			{
				worker* w = m_EmpArray[i];
				m_EmpArray[i] = m_EmpArray[Index];
				m_EmpArray[Index] = w;
			}
		}
		cout << "����ɹ�!" << endl;
		save();               //���������浽�ļ���
	}
	system("pause");        //�����������
	system("cls");
}

//����ļ�
void workerManager::Clean_File()
{
	cout << "ȷ�����(1.ȷ��  2.ȡ��): ";
	int select;
	cin >> select;
	if (select == 1)
	{
		//����ļ�
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc);                    //ɾ���ļ������´���
		ofs.close();

		if (m_EmpArray != NULL)
		{
			//ɾ��������ÿ��ְ������
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i] != NULL)
				{
					delete m_EmpArray[i];
					m_EmpArray[i] = NULL;
				}
			}
			m_EmpNum = 0;
			//ɾ����������ָ��
			delete[] m_EmpArray;
			m_EmpArray = NULL;
			m_FileIsEmpty = true;
		}
		cout << "��ճɹ�!" << endl;
	}
	system("pause");
	system("cls");
}