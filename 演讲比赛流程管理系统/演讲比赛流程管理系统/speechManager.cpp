#include"speechManager.h"


//构造函数
SpeechManager::SpeechManager()
{
	//初始化容器和属性
	this->initSpeech();

	//创建12名选手
	this->createSpeaker();

	//加载往届记录
	this->loadRecord();
}

//展示菜单
void SpeechManager::show_Menu()
{
	cout << "***************************************" << endl;
	cout << "**********  欢迎参加演讲比赛  *********" << endl;
	cout << "**********   1.开始演讲比赛   *********" << endl;
	cout << "**********   2.查看往届记录   *********" << endl;
	cout << "**********   3.清空比赛记录   *********" << endl;
	cout << "**********   0.退出比赛程序   *********" << endl;
	cout << "***************************************" << endl;
	cout << endl;
}

//退出系统
void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用!" << endl;
	system("pause");
	exit(0);
}

//初始化容器和属性
void SpeechManager::initSpeech()
{
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	this->m_Record.clear();

	this->m_Index = 1;
}

//创建12名选手
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (string::size_type i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 2; j++)
			sp.m_Score[j] = 0;	
		v1.push_back(i + 10001);                //12名选手编号添加到v1
		m_Speaker.insert(make_pair(i + 10001, sp));       //选手编号以及对应的选手 存放到map容器
	}
}

//开始比赛  比赛流程控制
void SpeechManager::startSpeech()
{
	//第一轮开始比赛

	//抽签
	this->speechDraw();
	//比赛
	this->speechContest();
	//显示晋级结果
	this->showScore();
	//第二轮比赛
	this->m_Index++;
	//抽签
	this->speechDraw();
	//比赛
	this->speechContest();
	//显示最终结果
	this->showScore();
	//保存分数到文件中
	this->saveRecord();

	//重置比赛
	//初始化容器和属性
	this->initSpeech();

	//创建12名选手
	this->createSpeaker();

	//加载往届记录
	this->loadRecord();
	cout << "本届比赛完毕!" << endl;
	system("pause");
	system("cls");
}

//抽签
void SpeechManager::speechDraw()
{
	cout << "第" << this->m_Index << "轮比赛选手正在抽签! " << endl;
	cout << "---------------------------------" << endl;
	cout << "抽签后演讲顺序如下: " << endl;

	if (this->m_Index == 1)          //第一轮
	{ 
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else                            //第二轮
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

//比赛
void SpeechManager::speechContest()
{
	cout << "-------------------第" << this->m_Index << "轮比赛正式开始!------------------------" << endl;

	//准备临时容器存放小组成绩
	multimap<double, int, greater<double>> groupScore;
	int num = 0;            //记录人员个数   6人一组

	vector<int> v_Src;                        //比赛选手容器
	if (this->m_Index == 1)                //第一轮比赛
	{
		v_Src = v1;
	}
	else                                    //第二轮比赛
	{
		v_Src = v2;
	}
	//遍历所有选手
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;
		//评委打分
		deque<double> d;
		for (int i = 0; i < 10; i++ )
		{
			double score = (rand() % 401 + 600) / 10.f;       
			d.push_back(score);
		}
		sort(d.begin(), d.end(), greater<double>());         //从大到小排
		d.pop_back();                    //去除最低分
		d.pop_front();                    //去除最高分
		double sum = accumulate(d.begin(), d.end(),0.0f);         //总分
		double avg = sum / (double)d.size();              //平均分

		//将平均分放入到map容器中
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

		//将打分数据 放入到临时小组容器中
		groupScore.insert(make_pair(avg, *it));            //key是得分  ，value是具体选手编号

		//每6人取出前三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "组比赛名次: " << endl;
			for (multimap<double, int, greater<double>>::iterator i = groupScore.begin(); i != groupScore.end(); i++)
			{
				cout << "编号: " << i->second << "  姓名:" << this->m_Speaker[i->second].m_Name << "  成绩:" << this->m_Speaker[i->second].m_Score[this->m_Index - 1] << endl;
			}
			//取走前三名
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
	cout << "-------------------第" << this->m_Index << "轮比赛正式结束!------------------------" << endl;
	system("pause");
}

//显示分数
void SpeechManager::showScore()
{
	cout << "-------------------第" << this->m_Index << "轮晋级选手信息如下: ------------------------" << endl;
	vector<int> v;
	if (this->m_Index == 1)
		v = v2;
	else
		v = vVictory;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "编号: " << *it << "  姓名: " << this->m_Speaker[*it].m_Name << "  成绩: " << this->m_Speaker[*it].m_Score[this->m_Index-1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->show_Menu();
}

//保存记录
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);   //用追加的方式写文件
	//将每个选手数据  写入到文件中
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;

	ofs.close();
	cout << "记录已经保存" << endl;
	fileIsEmpty = false;            //更新文件状态
}

//读取记录
void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);       //读文件
	if (!ifs.is_open())               //文件打开失败
	{
		this->fileIsEmpty = true;
		//cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	//文件为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		this->fileIsEmpty = true;
		//cout << "文件为空" << endl;
		ifs.close();
		return;
	}

	//文件不为空
	this->fileIsEmpty = false;
	ifs.putback(ch);                   //将上面读取的单个字符放回来
	string data;
	int index = 0;
	while (ifs >> data)
	{
		vector<string> v;       //存放6个string字符串
		int pos = -1;       //找到","位置的变量
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

//显示往届得分
void SpeechManager::showRecord()
{
	if (fileIsEmpty)
		cout << "文件不存在或记录为空!" << endl;
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "第" << i + 1 << "届: " << "    "
			     << "冠军编号: " << m_Record[i][0] << "    得分: " << m_Record[i][1] << "   "
				 << "亚军编号: " << m_Record[i][2] << "    得分: " << m_Record[i][3] << "   "
				 << "季军编号: " << m_Record[i][4] << "    得分: " << m_Record[i][5] << endl;
		}
	}
	system("pause");
	system("cls");
}

//清空记录
void SpeechManager::clearRecord()
{
	cout << "确认清空?(1.确认  2.返回): ";
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs;
		ofs.open("speech.csv", ios::trunc);       //文件存在则删除重新创建
		ofs.close();

		//初始化容器和属性
		this->initSpeech();

		//创建12名选手
		this->createSpeaker();

		//加载往届记录
		this->loadRecord();
		cout << "清空成功!" << endl;
	}
	system("pause");
	system("cls");
}

//析构函数
SpeechManager::~SpeechManager()
{

}