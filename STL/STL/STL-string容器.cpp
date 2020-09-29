#include<iostream>
#include<string>

using namespace std;
/*-----------------------string�����ص㼰���캯��------------------------------------*/
/*
	1.string��C++�����ַ�������string��������һ����
	2.string��char*����:
		char*��һ��ָ��
		string��һ���࣬���ڲ���װ��char*����������ַ�������һ��char*�͵�����
	3.�ص�:string���ڲ���װ�˺ܶ��Ա����
		����find,����copy,ɾ��delete,�滻replace,����insert��
		string����char*��������ڴ棬���õ��ĸ���Խ���ȡֵԽ���,�����ڲ����и���
	4.���캯��ԭ��:	
		string();						����һ���յ��ַ��������磺string str;
		string(const char* s);			ʹ���ַ���s��ʼ��
		string(const string& str);      ʹ��һ��string�����ʼ����һ��string����
		string(int n,char c);           ʹ��n���ַ�c��ʼ��
*/
/*-----------------------------------------------------------------------------------*/

//string���캯��ʹ��
void test1()
{
	string s1;        //Ĭ�Ϲ���
	const char* s = "hello world";
	string s2(s);

	string s3(s2);

	string s4(10, 'a');

	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
}

/*------------------------string��ֵ����---------------------------------------------*/
/*
	��ֵ�ĺ���ԭ��:
	string& operator=(const char* s);                 char*�����ַ�����ֵ����ǰ���ַ���
	string& operator=(const string &s);               ���ַ���s������ǰ���ַ���
	string& operator=(char c);                        ���ַ���ֵ����ǰ���ַ���
	string& assign(const char* s);                    ���ַ���s������ǰ���ַ���
	string& assign(const char* s,int n);              ���ַ���s��ǰn���ַ�������ǰ���ַ���
	string& assign(const string& s);                  ���ַ���s������ǰ�ַ���
	string& assign(int n,char c);                     ��n���ַ�c������ǰ�ַ���
*/
/*-----------------------------------------------------------------------------------*/

//string��ֵ����
void test2()
{
	string str1;
	str1 = "hello world";
	cout << str1 << endl;

	string str2;
	str2 = str1;
	cout << str2 << endl;

	string str3;
	str3 = 'a';
	cout << str3 << endl;

	string str4;
	str4.assign("hello C++");
	cout << str4 << endl;

	string str5;
	str5.assign("hello C++", 5);
	cout << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << str6 << endl;


	string str7;
	str7.assign(3, 'w');
	cout << str7 << endl;
}

/*------------------------string�ַ���ƴ��---------------------------------------------*/
/*
	����ԭ��:
	string& operator+=(const char* str);                      //����+=������
	string& operator+=(const char c);                         //����+=������
	string& operator+=(const string& str);                    //����+=������
	string& append(const char* s);                            //���ַ���s���ӵ���ǰ�ַ�����β
	string& append(const char* s,int n);                      //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
	string& append(const string& s);                          //ͬoperator+=(const string& str)
	string& append(const string& s,int pos,int n);            //�ַ���s�д�posλ�ÿ�ʼ��n���ַ����ӵ��ַ�����β
*/
/*-----------------------------------------------------------------------------------*/

//string�ַ���ƴ��
void test3()
{
	string str1 = "��";
	str1 += "������Ϸ";
	cout << str1 << endl;

	str1 += ':';
	cout << str1 << endl;

	string str2 = "LOL DNF";
	str1 += str2;
	cout << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	cout << str3 << endl;

	str3.append("gameasjdlakdja", 4);
	cout << str3 << endl;

	str3.append(str2);
	cout << str3 << endl;

	str3.append(str2, 0, 3);
	cout << str3 << endl;

}

/*------------------------string�ַ������Һ��滻---------------------------------------------*/
/*
	����:����ָ���ַ����Ƿ����
	�滻:��ָ����λ���滻�ַ���
	����ԭ��:
	int find(const string& str,int pos = 0) const;        ����str��һ�γ���λ�ã���pos��ʼ����
	int find(const char* s,int pos = 0) const;            ����s��һ�γ���λ�ã���pos��ʼ����
	int find(const char* s,int pos = 0,int n) const;      ��posλ�ò���s��ǰn���ַ���һ��λ��
	int find(const char c,int pos = 0) const;             �����ַ�c��һ�γ���λ��
	int rfind(const string& str,int pos = npos) const;    ����str���һ��λ�ã���pos��ʼ����
	int rfind(const char* s,int pos = npos) const;        ����s���һ�γ���λ�ã���pos��ʼ����
	int rfind(const char* s,int pos,int n) const;         ��posλ�ò���s��ǰn���ַ����һ��λ��
	int rfind(const char c,int pos = 0) const;            �����ַ�c���һ�γ���λ��
	string& replace(int pos,int n,const string& str);     �滻��pos��ʼn���ַ�Ϊ�ַ���str
	string& replace(int pos,int n,const char* s);         �滻��pos��ʼ��n���ַ���Ϊ�ַ���s
	1.find�����Ǵ������ң�rfind�Ǵ�������
	2.find�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ�λ�ã��Ҳ�������-1
	3.replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ� 
*/
/*-----------------------------------------------------------------------------------*/

//string���Һ��滻
void test4()
{
	string str1 = "abdecdefg";
	int pos = str1.find("de");
	if (pos == -1)
		cout << "δ�ҵ��ַ���" << endl;
	else
		cout << "�ַ�����λ��Ϊ: " << pos << endl;

	//find��rfind������:  
	//find�Ǵ������Ҳ��ң�rfind�Ǵ����������
	pos = str1.rfind("de");
	if (pos == -1)
		cout << "δ�ҵ��ַ���" << endl;
	else
		cout << "�ַ�����λ��Ϊ: " << pos << endl;

	string str2 = "abcdefg";
	str2.replace(1, 3, "BCDE");
	cout << str2 << endl;
}

/*------------------------string�ַ����Ƚ�---------------------------------------------*/
/*
	1.�ȽϷ�ʽ:�ַ����Ƚ��ǰ���ASCII����жԱ�(��ȷ���0�������С����1����С�Ҵ󷵻�-1)
	2.����ԭ��:
	int compare(const string& s) const;                         //���ַ���s�Ƚ�
	int compare(const char* s) const;                          //���ַ���s�Ƚ�
*/
/*-----------------------------------------------------------------------------------*/

//string�ַ����Ƚ�
void test5()
{
	string str1 = "hello";
	string str2 = "Hello";
	if (str1.compare(str2) == 0)
	{
		cout << "���!" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "���" << endl;
	}
	else
		cout << "�Ҵ�" << endl;
}

/*------------------------string�ַ���ȡ---------------------------------------------*/
/*
	����ԭ��:
	char& operator[](int n);                   //ͨ��[]��ʽȡ�ַ�
	char& at(int n);                            //ͨ��at������ȡ�ַ�
*/
/*-----------------------------------------------------------------------------------*/

//string�ַ���ȡ
void test6()
{
	string str = "hello world";
	//cout << str << endl;
	//cout << str.size() << endl;
	for (string::size_type i = 0; i < str.size(); i++)
	{
		cout << str[i];
	}
	cout << endl;
	for (string::size_type i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;
	str[0] = 'X';
	cout << str << endl;
	str.at(0) = 'H';
	cout << str << endl;
}

/*------------------------string�ַ��������ɾ��---------------------------------------------*/
/*
	����ԭ��:
	string& insert(int pos,const char* s);                  //�����ַ���
	string& insert(int pos,const string& str);               //�����ַ���
	string& insert(int pos,int n,char c);                    //��ָ��λ�ò���n���ַ�c
	string& erase(int pos,int n = npos);                      //ɾ����pos��ʼ��n���ַ�
*/
/*-----------------------------------------------------------------------------------*/

//string�ַ��������ɾ��
void test7()
{
	string str = "hello";
	str.insert(1, "LAND");
	cout << str << endl;

	str.erase(1, 4);
	cout << str << endl;

	str.insert(1, 5, 'c');
	cout << str << endl;
}

/*------------------------string�Ӵ�---------------------------------------------*/
/*
	����ԭ��:
	string substr(int pos = 0;int n = npos) const;      //������pos��ʼ��n���ַ���ɵ��ַ���
*/
/*-----------------------------------------------------------------------------------*/

//string�Ӵ�
void test8()
{
	string str = "hello world";
	string str2;
	str2 = str.substr(0, 5);
	cout << str2 << endl;
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	test8();
	return 0;
}