#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"speaker.h"
#include<string>
#include<algorithm>
#include<deque>
#include<numeric>
#include<functional>
#include<fstream>

using namespace std;

//����ݽ�������
class SpeechManager
{
public:
	
	//���캯��
	SpeechManager();

	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~SpeechManager();

	//��ʼ������������
	void initSpeech();

	//����12��ѡ��
	void createSpeaker();

	//��ʼ����  --�������̿���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�������
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//��ʾ����÷�
	void showRecord();

	//��ռ�¼
	void clearRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;

	//��������¼
	map<int, vector<string>> m_Record;

	//��һ�ֱ���ѡ�� ����  12��
	vector<int> v1;

	//��һ�ֽ�������  6��
	vector<int> v2;

	//ʤ��ǰ�������� 3��
	vector<int> vVictory;

	//��ű��  �Լ���Ӧ�ľ���ѡ������
	map<int, Speaker> m_Speaker;

	//��¼��������
	int m_Index;

};