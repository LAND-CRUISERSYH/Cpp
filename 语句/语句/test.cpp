#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
	///*ʹ��if else���ʵ�ְ����ֳɼ�ת������ĸ�ɼ���Ҫ��*/
	//const vector<string> scores = { "F","D","C","B","A","A++" };
	//string lettergrade;
	//int grade;
	//cin >> grade;
	//if (grade < 60)                             //����ɼ����ϸ񣬲���Ҫ������ӼӺż��ŵ�����
	//	lettergrade = scores[0];
	//else
	//{
	//	lettergrade = scores[(grade - 50) / 10];                 //�����ĸ��ʽ�ĳɼ�
	//	if (grade != 100)                                        //ֻҪ����100�����ǼӺŻ��߼���
	//	{
	//		if (grade % 10 > 7)
	//			lettergrade += "+";                                 //ĩλ��8����9�ĳɼ����һ���Ӻ�
	//		else if (grade % 10 < 3)
	//			lettergrade += '-';								//ĩλ��0��1����2�ĳɼ����һ������
	//	}
	//}
	//cout << lettergrade << endl;

	///*ʹ���������������if else���*/
	//const vector<string> scores = { "F","D","C","B","A","A++" };
	//string lettergrade;
	//int grade;
	//cin >> grade;
	//grade < 60 ? lettergrade = scores[0] : lettergrade = scores[(grade - 50) / 10];
	//(grade >= 60) && (grade != 100) && (grade % 10 <= 3) ? lettergrade += '-' : lettergrade += '+';
	//cout << lettergrade << endl;

	///*ʹ��if-else���ͳ��cin������ı����ж���Ԫ����ĸ*/
	//char c;
	//unsigned sum_a = 0, sum_e = 0, sum_i = 0, sum_o = 0, sum_u = 0;
	//while (cin >> c)
	//{
	//	if (c == 'a')
	//		sum_a++;
	//	else if (c == 'e')
	//		sum_e++;
	//	else if (c == 'i')
	//		sum_i++;
	//	else if (c == 'o')
	//		sum_o++;
	//	else if (c == 'u')
	//		sum_u++;
	//}
	//cout << "Ԫ����ĸa�ĸ���Ϊ: " << sum_a << endl;
	//cout << "Ԫ����ĸe�ĸ���Ϊ: " << sum_e << endl;
	//cout << "Ԫ����ĸi�ĸ���Ϊ: " << sum_i << endl;
	//cout << "Ԫ����ĸo�ĸ���Ϊ: " << sum_o << endl;
	//cout << "Ԫ����ĸu�ĸ���Ϊ: " << sum_u << endl;

	///*ʹ��if-else���ͳ��cin������ı����ж���Ԫ����ĸ(�����ִ�Сд)*/
	//char c;
	//unsigned sum_a = 0, sum_e = 0, sum_i = 0, sum_o = 0, sum_u = 0;
	//while (cin >> c)
	//{
	//	if (c == 'a'||c=='A')
	//		sum_a++;
	//	else if (c == 'e'||c=='E')
	//		sum_e++;
	//	else if (c == 'i'||c=='I')
	//		sum_i++;
	//	else if (c == 'o'||c=='O')
	//		sum_o++;
	//	else if (c == 'u'||c=='U')
	//		sum_u++;
	//}
	//cout << "Ԫ����ĸa�ĸ���Ϊ: " << sum_a << endl;
	//cout << "Ԫ����ĸe�ĸ���Ϊ: " << sum_e << endl;
	//cout << "Ԫ����ĸi�ĸ���Ϊ: " << sum_i << endl;
	//cout << "Ԫ����ĸo�ĸ���Ϊ: " << sum_o << endl;
	//cout << "Ԫ����ĸu�ĸ���Ϊ: " << sum_u << endl;

	///*ͳ��������ı���Ԫ����ĸ���ո��Ʊ���ͻ��з�������*/
	//char c;
	//unsigned sum_a = 0, sum_e = 0, sum_i = 0, sum_o = 0, sum_u = 0, sum_space = 0, sum_t = 0, sum_n = 0;
	//while (cin>>std::noskipws>>c)                   //std::noskipws��ʾ�����Կհ�(�����Ʊ���ͻ��з�)
	//{
	//	switch (c)
	//	{
	//	case 'a':
	//	case 'A':
	//		sum_a++;
	//		break;
	//	case 'e':
	//	case 'E':
	//		sum_e++;
	//		break;
	//	case 'i':
	//	case 'I':
	//		sum_i++;
	//		break;
	//	case 'o':
	//	case 'O':
	//		sum_o++;
	//		break;
	//	case 'u':
	//	case 'U':
	//		sum_u++;
	//		break;
	//	case ' ':
	//		sum_space++;
	//		break;
	//	case '\t':
	//		sum_t++;
	//		break;
	//	case '\n':
	//		sum_n++;
	//		break;
	//	}
	//}
	//cout << "Ԫ����ĸa�ĸ���Ϊ: " << sum_a << endl;
	//cout << "Ԫ����ĸe�ĸ���Ϊ: " << sum_e << endl;
	//cout << "Ԫ����ĸi�ĸ���Ϊ: " << sum_i << endl;
	//cout << "Ԫ����ĸo�ĸ���Ϊ: " << sum_o << endl;
	//cout << "Ԫ����ĸu�ĸ���Ϊ: " << sum_u << endl;
	//cout << "�ո�ĸ���Ϊ: " << sum_space << endl;
	//cout << "�Ʊ���ĸ���Ϊ: " << sum_t << endl;
	//cout << "���з��ĸ���Ϊ: " << sum_n << endl;

	///*ͳ��������ı���Ԫ����ĸ���ո��Ʊ���ͻ��з�������*/
	//char c;
	//unsigned sum_a = 0, sum_e = 0, sum_i = 0, sum_o = 0, sum_u = 0, sum_space = 0, sum_t = 0, sum_n = 0;
	//while (cin>>std::noskipws>>c)                   //std::noskipws��ʾ�����Կհ�(�����Ʊ���ͻ��з�)
	//{
	//	switch (c)
	//	{
	//	case 'a':
	//	case 'A':
	//		sum_a++;
	//		break;
	//	case 'e':
	//	case 'E':
	//		sum_e++;
	//		break;
	//	case 'i':
	//	case 'I':
	//		sum_i++;
	//		break;
	//	case 'o':
	//	case 'O':
	//		sum_o++;
	//		break;
	//	case 'u':
	//	case 'U':
	//		sum_u++;
	//		break;
	//	case ' ':
	//		sum_space++;
	//		break;
	//	case '\t':
	//		sum_t++;
	//		break;
	//	case '\n':
	//		sum_n++;
	//		break;
	//	}
	//}
	//cout << "Ԫ����ĸa�ĸ���Ϊ: " << sum_a << endl;
	//cout << "Ԫ����ĸe�ĸ���Ϊ: " << sum_e << endl;
	//cout << "Ԫ����ĸi�ĸ���Ϊ: " << sum_i << endl;
	//cout << "Ԫ����ĸo�ĸ���Ϊ: " << sum_o << endl;
	//cout << "Ԫ����ĸu�ĸ���Ϊ: " << sum_u << endl;
	//cout << "�ո�ĸ���Ϊ: " << sum_space << endl;
	//cout << "�Ʊ���ĸ���Ϊ: " << sum_t << endl;
	//cout << "���з��ĸ���Ϊ: " << sum_n << endl;

	///*ͳ��������ı���Ԫ����ĸ���ո��Ʊ���ͻ��з��������Լ��������������ַ����ַ����е�����:ff��fl��fi*/
	//char c,last_c = '\0';
	//unsigned sum_a = 0, sum_e = 0, sum_i = 0, sum_o = 0, sum_u = 0, sum_space = 0, sum_t = 0, sum_n = 0, sum_ff = 0, sum_fl = 0, sum_fi = 0;
	//while (cin >> std::noskipws >> c)                   //std::noskipws��ʾ�����Կհ�(�����Ʊ���ͻ��з�)
	//{
	//	switch (c)
	//	{
	//	case 'a':
	//	case 'A':
	//		sum_a++;
	//		break;
	//	case 'e':
	//	case 'E':
	//		sum_e++;
	//		break;
	//	case 'i':
	//		if (last_c == 'f')
	//		{
	//			sum_fi++;
	//		}
	//	case 'I':
	//		sum_i++;
	//		break;
	//	case 'o':
	//	case 'O':
	//		sum_o++;
	//		break;
	//	case 'u':
	//	case 'U':
	//		sum_u++;
	//		break;
	//	case ' ':
	//		sum_space++;
	//		break;
	//	case '\t':
	//		sum_t++;
	//		break;
	//	case '\n':
	//		sum_n++;
	//		break;
	//	case 'f':
	//		if (last_c == 'f')
	//		{
	//			sum_ff++;
	//		}
	//		break;
	//	case 'l':
	//		if (last_c == 'f')
	//		{
	//			sum_fl++;
	//		}
	//		break;
	//	}
	//	last_c = c;
	//}
	//cout << "Ԫ����ĸa�ĸ���Ϊ: " << sum_a << endl;
	//cout << "Ԫ����ĸe�ĸ���Ϊ: " << sum_e << endl;
	//cout << "Ԫ����ĸi�ĸ���Ϊ: " << sum_i << endl;
	//cout << "Ԫ����ĸo�ĸ���Ϊ: " << sum_o << endl;
	//cout << "Ԫ����ĸu�ĸ���Ϊ: " << sum_u << endl;
	//cout << "�ո�ĸ���Ϊ: " << sum_space << endl;
	//cout << "�Ʊ���ĸ���Ϊ: " << sum_t << endl;
	//cout << "���з��ĸ���Ϊ: " << sum_n << endl;
	//cout << "�ַ�����ff�ĸ���Ϊ: " << sum_ff << endl;
	//cout << "�ַ�����fl�ĸ���Ϊ: " << sum_fl << endl;
	//cout << "�ַ�����fi�ĸ���Ϊ: " << sum_fi << endl;

	///*�ӱ�׼�����ж�ȡ����string���󲢲��������ظ����ֵĵ���
	//	�����ظ�: һ�����ʺ������������ʱ���*/
	//string s;
	//string temp;
	//unsigned sum = 0;
	//cin >> temp;
	//while (cin >> s)
	//{
	//	if (temp == s)
	//	{
	//		sum++;
	//	}
	//	else
	//		temp = s;
	//}
	//if (sum != 0)
	//	cout << sum;
	//else
	//	cout << "�κε��ʶ�û���������ֹ�" << endl;

	///*��������һ��vector�����Ƿ�����һ����ǰ׺*/
	//vector<int> ivec1 = { 1,2,3,4,5,6 };
	//vector<int> ivec2 = { 1,2,3,5};
	//int small_size = ivec1.size() > ivec2.size() ? ivec2.size() : ivec1.size();
	//for (int i = 0; i < small_size; i++)
	//{
	//	if (ivec1[i] != ivec2[i])
	//	{
	//		cout << "����" << endl;
	//		return 0;
	//	}
	//}
	//cout << "��" << endl;

	/*do
	{
		int v1, v2;
		cout << "������������";
		if (cin >> v1 >> v2)
			cout << "��Ϊ: " << v1 + v2 << endl;
	} while (cin);*/

	///*ʹ��do-while���:������ʾ�û���������string����,Ȼ�������϶̵��Ǹ����*/
	//string s1, s2;
	//do
	//{
	//	cout << "����������string����: ";
	//	cin >> s1 >> s2;
	//	if (s1.size() < s2.size())
	//		cout << s1 << endl;
	//	else
	//		cout << s2 << endl;
	//} while(cin);
	return 0;
}