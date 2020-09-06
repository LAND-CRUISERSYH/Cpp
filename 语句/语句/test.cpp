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
	///*使用if else语句实现把数字成绩转换成字母成绩的要求*/
	//const vector<string> scores = { "F","D","C","B","A","A++" };
	//string lettergrade;
	//int grade;
	//cin >> grade;
	//if (grade < 60)                             //如果成绩不合格，不需要考虑添加加号减号的问题
	//	lettergrade = scores[0];
	//else
	//{
	//	lettergrade = scores[(grade - 50) / 10];                 //获得字母形式的成绩
	//	if (grade != 100)                                        //只要不是100，考虑加号或者减号
	//	{
	//		if (grade % 10 > 7)
	//			lettergrade += "+";                                 //末位是8或者9的成绩添加一个加号
	//		else if (grade % 10 < 3)
	//			lettergrade += '-';								//末位是0、1或者2的成绩添加一个减号
	//	}
	//}
	//cout << lettergrade << endl;

	///*使用条件运算符代替if else语句*/
	//const vector<string> scores = { "F","D","C","B","A","A++" };
	//string lettergrade;
	//int grade;
	//cin >> grade;
	//grade < 60 ? lettergrade = scores[0] : lettergrade = scores[(grade - 50) / 10];
	//(grade >= 60) && (grade != 100) && (grade % 10 <= 3) ? lettergrade += '-' : lettergrade += '+';
	//cout << lettergrade << endl;

	///*使用if-else语句统计cin读入的文本中有多少元音字母*/
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
	//cout << "元音字母a的个数为: " << sum_a << endl;
	//cout << "元音字母e的个数为: " << sum_e << endl;
	//cout << "元音字母i的个数为: " << sum_i << endl;
	//cout << "元音字母o的个数为: " << sum_o << endl;
	//cout << "元音字母u的个数为: " << sum_u << endl;

	///*使用if-else语句统计cin读入的文本中有多少元音字母(不区分大小写)*/
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
	//cout << "元音字母a的个数为: " << sum_a << endl;
	//cout << "元音字母e的个数为: " << sum_e << endl;
	//cout << "元音字母i的个数为: " << sum_i << endl;
	//cout << "元音字母o的个数为: " << sum_o << endl;
	//cout << "元音字母u的个数为: " << sum_u << endl;

	///*统计输入的文本中元音字母及空格、制表符和换行符的数量*/
	//char c;
	//unsigned sum_a = 0, sum_e = 0, sum_i = 0, sum_o = 0, sum_u = 0, sum_space = 0, sum_t = 0, sum_n = 0;
	//while (cin>>std::noskipws>>c)                   //std::noskipws表示不忽略空白(包括制表符和换行符)
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
	//cout << "元音字母a的个数为: " << sum_a << endl;
	//cout << "元音字母e的个数为: " << sum_e << endl;
	//cout << "元音字母i的个数为: " << sum_i << endl;
	//cout << "元音字母o的个数为: " << sum_o << endl;
	//cout << "元音字母u的个数为: " << sum_u << endl;
	//cout << "空格的个数为: " << sum_space << endl;
	//cout << "制表符的个数为: " << sum_t << endl;
	//cout << "换行符的个数为: " << sum_n << endl;

	///*统计输入的文本中元音字母及空格、制表符和换行符的数量*/
	//char c;
	//unsigned sum_a = 0, sum_e = 0, sum_i = 0, sum_o = 0, sum_u = 0, sum_space = 0, sum_t = 0, sum_n = 0;
	//while (cin>>std::noskipws>>c)                   //std::noskipws表示不忽略空白(包括制表符和换行符)
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
	//cout << "元音字母a的个数为: " << sum_a << endl;
	//cout << "元音字母e的个数为: " << sum_e << endl;
	//cout << "元音字母i的个数为: " << sum_i << endl;
	//cout << "元音字母o的个数为: " << sum_o << endl;
	//cout << "元音字母u的个数为: " << sum_u << endl;
	//cout << "空格的个数为: " << sum_space << endl;
	//cout << "制表符的个数为: " << sum_t << endl;
	//cout << "换行符的个数为: " << sum_n << endl;

	///*统计输入的文本中元音字母及空格、制表符和换行符的数量以及含有以下两个字符的字符序列的数量:ff、fl和fi*/
	//char c,last_c = '\0';
	//unsigned sum_a = 0, sum_e = 0, sum_i = 0, sum_o = 0, sum_u = 0, sum_space = 0, sum_t = 0, sum_n = 0, sum_ff = 0, sum_fl = 0, sum_fi = 0;
	//while (cin >> std::noskipws >> c)                   //std::noskipws表示不忽略空白(包括制表符和换行符)
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
	//cout << "元音字母a的个数为: " << sum_a << endl;
	//cout << "元音字母e的个数为: " << sum_e << endl;
	//cout << "元音字母i的个数为: " << sum_i << endl;
	//cout << "元音字母o的个数为: " << sum_o << endl;
	//cout << "元音字母u的个数为: " << sum_u << endl;
	//cout << "空格的个数为: " << sum_space << endl;
	//cout << "制表符的个数为: " << sum_t << endl;
	//cout << "换行符的个数为: " << sum_n << endl;
	//cout << "字符序列ff的个数为: " << sum_ff << endl;
	//cout << "字符序列fl的个数为: " << sum_fl << endl;
	//cout << "字符序列fi的个数为: " << sum_fi << endl;

	///*从标准输入中读取若干string对象并查找连续重复出现的单词
	//	连续重复: 一个单词后面紧跟这个单词本身*/
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
	//	cout << "任何单词都没有连续出现过" << endl;

	///*检验其中一个vector对象是否是另一个的前缀*/
	//vector<int> ivec1 = { 1,2,3,4,5,6 };
	//vector<int> ivec2 = { 1,2,3,5};
	//int small_size = ivec1.size() > ivec2.size() ? ivec2.size() : ivec1.size();
	//for (int i = 0; i < small_size; i++)
	//{
	//	if (ivec1[i] != ivec2[i])
	//	{
	//		cout << "不是" << endl;
	//		return 0;
	//	}
	//}
	//cout << "是" << endl;

	/*do
	{
		int v1, v2;
		cout << "请输入两个数";
		if (cin >> v1 >> v2)
			cout << "和为: " << v1 + v2 << endl;
	} while (cin);*/

	///*使用do-while语句:首先提示用户输入两个string对象,然后挑出较短的那个输出*/
	//string s1, s2;
	//do
	//{
	//	cout << "请输入两个string对象: ";
	//	cin >> s1 >> s2;
	//	if (s1.size() < s2.size())
	//		cout << s1 << endl;
	//	else
	//		cout << s2 << endl;
	//} while(cin);
	return 0;
}