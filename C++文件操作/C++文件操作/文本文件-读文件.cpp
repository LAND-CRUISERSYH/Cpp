#include<iostream>
#include<fstream>
#include<string>

using namespace std;

/*
	1.���ļ���������
		����ͷ�ļ�:                              #include<fstream>
		����������:                              ifstream ifs;
		���ļ����ж��ļ��Ƿ�򿪳ɹ�:          ifs.open("�ļ�·��",�򿪷�ʽ);
		������:                                  ���ַ�ʽ��ȡ
		�ر��ļ�:                                ifs.close();
*/

//void test1()
//{
//	ifstream ifs;             //����������
//	ifs.open("test.txt", ios::in);      //���ļ�
//	if (!ifs.is_open())          //�����ʧ��
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	//������
//	//��һ��
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}*/
//
//	//�ڶ���
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	//������
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//
//	//������
//	/*char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}*/
//
//	ifs.close();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}