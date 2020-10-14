#include"speechManager.h"


//���캯��
SpeechManager::SpeechManager()
{
	//��ʼ������������
	this->initSpeech();

	//����12��ѡ��
	this->createSpeaker();

	//���������¼
	this->loadRecord();
}

//չʾ�˵�
void SpeechManager::show_Menu()
{
	cout << "***************************************" << endl;
	cout << "**********  ��ӭ�μ��ݽ�����  *********" << endl;
	cout << "**********   1.��ʼ�ݽ�����   *********" << endl;
	cout << "**********   2.�鿴�����¼   *********" << endl;
	cout << "**********   3.��ձ�����¼   *********" << endl;
	cout << "**********   0.�˳���������   *********" << endl;
	cout << "***************************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��!" << endl;
	system("pause");
	exit(0);
}

//��ʼ������������
void SpeechManager::initSpeech()
{
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	this->m_Record.clear();

	this->m_Index = 1;
}

//����12��ѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (string::size_type i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 2; j++)
			sp.m_Score[j] = 0;	
		v1.push_back(i + 10001);                //12��ѡ�ֱ����ӵ�v1
		m_Speaker.insert(make_pair(i + 10001, sp));       //ѡ�ֱ���Լ���Ӧ��ѡ�� ��ŵ�map����
	}
}

//��ʼ����  �������̿���
void SpeechManager::startSpeech()
{
	//��һ�ֿ�ʼ����

	//��ǩ
	this->speechDraw();
	//����
	this->speechContest();
	//��ʾ�������
	this->showScore();
	//�ڶ��ֱ���
	this->m_Index++;
	//��ǩ
	this->speechDraw();
	//����
	this->speechContest();
	//��ʾ���ս��
	this->showScore();
	//����������ļ���
	this->saveRecord();

	//���ñ���
	//��ʼ������������
	this->initSpeech();

	//����12��ѡ��
	this->createSpeaker();

	//���������¼
	this->loadRecord();
	cout << "����������!" << endl;
	system("pause");
	system("cls");
}

//��ǩ
void SpeechManager::speechDraw()
{
	cout << "��" << this->m_Index << "�ֱ���ѡ�����ڳ�ǩ! " << endl;
	cout << "---------------------------------" << endl;
	cout << "��ǩ���ݽ�˳������: " << endl;

	if (this->m_Index == 1)          //��һ��
	{ 
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else                            //�ڶ���
	{
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "---------------------------------" << endl;
	system("pause");
	cout << endl;
}

//����
void SpeechManager::speechContest()
{
	cout << "-------------------��" << this->m_Index << "�ֱ�����ʽ��ʼ!------------------------" << endl;

	//׼����ʱ�������С��ɼ�
	multimap<double, int, greater<double>> groupScore;
	int num = 0;            //��¼��Ա����   6��һ��

	vector<int> v_Src;                        //����ѡ������
	if (this->m_Index == 1)                //��һ�ֱ���
	{
		v_Src = v1;
	}
	else                                    //�ڶ��ֱ���
	{
		v_Src = v2;
	}
	//��������ѡ��
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		//��ί���
		deque<double> d;
		for (int i = 0; i < 10; i++ )
		{
			double score = (rand() % 401 + 600) / 10.f;       
			d.push_back(score);
		}
		sort(d.begin(), d.end(), greater<double>());         //�Ӵ�С��
		d.pop_back();                    //ȥ����ͷ�
		d.pop_front();                    //ȥ����߷�
		double sum = accumulate(d.begin(), d.end(),0.0f);         //�ܷ�
		double avg = sum / (double)d.size();              //ƽ����

		//��ƽ���ַ��뵽map������
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

		//��������� ���뵽��ʱС��������
		groupScore.insert(make_pair(avg, *it));            //key�ǵ÷�  ��value�Ǿ���ѡ�ֱ��

		//ÿ6��ȡ��ǰ����
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "���������: " << endl;
			for (multimap<double, int, greater<double>>::iterator i = groupScore.begin(); i != groupScore.end(); i++)
			{
				cout << "���: " << i->second << "  ����:" << this->m_Speaker[i->second].m_Name << "  �ɼ�:" << this->m_Speaker[i->second].m_Score[this->m_Index - 1] << endl;
			}
			//ȡ��ǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator i = groupScore.begin(); i != groupScore.end()&&count<3; i++,count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back(i->second);
				}
				else
					vVictory.push_back(i->second);
			}
			cout << endl;
			groupScore.clear();
		}
	}
	cout << "-------------------��" << this->m_Index << "�ֱ�����ʽ����!------------------------" << endl;
	system("pause");
}

//��ʾ����
void SpeechManager::showScore()
{
	cout << "-------------------��" << this->m_Index << "�ֽ���ѡ����Ϣ����: ------------------------" << endl;
	vector<int> v;
	if (this->m_Index == 1)
		v = v2;
	else
		v = vVictory;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "���: " << *it << "  ����: " << this->m_Speaker[*it].m_Name << "  �ɼ�: " << this->m_Speaker[*it].m_Score[this->m_Index-1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->show_Menu();
}

//�����¼
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);   //��׷�ӵķ�ʽд�ļ�
	//��ÿ��ѡ������  д�뵽�ļ���
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;

	ofs.close();
	cout << "��¼�Ѿ�����" << endl;
	fileIsEmpty = false;            //�����ļ�״̬
}

//��ȡ��¼
void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);       //���ļ�
	if (!ifs.is_open())               //�ļ���ʧ��
	{
		this->fileIsEmpty = true;
		//cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	//�ļ�Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		this->fileIsEmpty = true;
		//cout << "�ļ�Ϊ��" << endl;
		ifs.close();
		return;
	}

	//�ļ���Ϊ��
	this->fileIsEmpty = false;
	ifs.putback(ch);                   //�������ȡ�ĵ����ַ��Ż���
	string data;
	int index = 0;
	while (ifs >> data)
	{
		vector<string> v;       //���6��string�ַ���
		int pos = -1;       //�ҵ�","λ�õı���
		int start = 0;
		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				break;
			}
			string temp = data.substr(start, pos - start);
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();
}

//��ʾ����÷�
void SpeechManager::showRecord()
{
	if (fileIsEmpty)
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "��" << i + 1 << "��: " << "    "
			     << "�ھ����: " << m_Record[i][0] << "    �÷�: " << m_Record[i][1] << "   "
				 << "�Ǿ����: " << m_Record[i][2] << "    �÷�: " << m_Record[i][3] << "   "
				 << "�������: " << m_Record[i][4] << "    �÷�: " << m_Record[i][5] << endl;
		}
	}
	system("pause");
	system("cls");
}

//��ռ�¼
void SpeechManager::clearRecord()
{
	cout << "ȷ�����?(1.ȷ��  2.����): ";
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs;
		ofs.open("speech.csv", ios::trunc);       //�ļ�������ɾ�����´���
		ofs.close();

		//��ʼ������������
		this->initSpeech();

		//����12��ѡ��
		this->createSpeaker();

		//���������¼
		this->loadRecord();
		cout << "��ճɹ�!" << endl;
	}
	system("pause");
	system("cls");
}

//��������
SpeechManager::~SpeechManager()
{

}