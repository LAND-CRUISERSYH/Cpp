#include<iostream>
#include<string>

using std::cin;                      //using������������ʹ������cinʱ���������ռ�std�л�ȡ��
using std::cout;
using std::endl;
using std::string;

//struct Book
//{
//	string name;
//	double price = 0;
//	unsigned sales_volume = 0;
//	double revenue = 0;
//};
int main()
{
	/*int i = 0;
	cin >> i;
	std::cout << i << std::endl;
	return 0;*/

	/*int v1, v2;
	cout << "������������: ";
	cin >> v1 >> v2;
	cout << v1 << v2 << endl;*/

	///*ʹ��whlieѭ����50��100���������*/
	//int i = 50;
	//int sum = 0;
	//while (i <= 100)
	//{
	//	sum += i;
	//	i++;
	//}
	//cout << "50-100������֮��Ϊ: " << sum << endl;

	///*ʹ��whileѭ����ӡ10-0֮�������*/
	//int num = 10;
	//while (num >= 0)
	//{
	//	cout << num << " ";
	//	num--;
	//}
	//cout << endl;

	///*��ʾ�û�����������������ӡ������������ָ���ķ�Χ�ڵ���������*/
	//int v1, v2;
	//cout << "��������������: ";
	//cin >> v1 >> v2;
	//while (v1 <= v2)
	//{
	//	cout << v1 << " ";
	//	v1++;
	//}
	//cout << endl;

	///*������*/
	//Book book1, book2;
	//unsigned sum_sales;
	//double sum_revenue;
	//if (cin >> book1.name >> book1.sales_volume >> book1.price)
	//{
	//	book1.revenue = book1.price*book1.sales_volume;
	//	sum_sales = book1.sales_volume;
	//	sum_revenue = book1.revenue;
	//	while (cin >> book2.name >> book2.sales_volume >> book2.price)
	//	{
	//		book2.revenue = book2.price*book2.sales_volume;
	//		if (book1.name == book2.name)
	//		{
	//			sum_sales += book2.sales_volume;
	//			sum_revenue += book2.revenue;
	//		}
	//		else
	//		{
	//			cout << book1.name << " " << sum_sales << " " << sum_revenue << " " << sum_revenue / sum_sales << endl;
	//			sum_sales = book2.sales_volume;
	//			sum_revenue = book2.revenue;
	//			book1 = book2;
	//		}
	//	}
	//	cout << book1.name << " " << sum_sales << " " << sum_revenue << " " << sum_revenue / sum_sales << endl;
	//}
	//else
	//{
	//	cout << "�����ۼ�¼" << endl;
	//	return -1;
	//}

	//string s1;                                //Ĭ�ϳ�ʼ����s1��һ���մ�
	//string s2 = s1;                           //�ȼ���s2(s1),s2��s1�ĸ���
	//string s3 = "hello";                 //�ȼ���s3("hello"),s3������ֵ"value"�ĸ���(�����һ�����ַ�)
	//string s4(10, 'c');                     //��s4��ʼ��Ϊ������10���ַ�'c'��ɵĴ�

	//string s;                                  //���ַ���
	//cin >> s;                              //��string�������s�������հ�ֹͣ
	//cout << s << endl;                //���s
	//return 0;

	//string word;
	//while (cin >> word)                             //������ȡ��ֱ�������ļ�ĩβ
	//	cout << word << endl;                    //���������ʣ�ÿ�����ʺ������һ������

	/*string line;
	while (getline(cin, line))
		cout << line << endl;*/

	/*string s;
	if (s.empty())
		cout << "�ַ���Ϊ��!" << endl;*/
	
	/*string s = "hello world";
	cout << s.size() << endl;*/

	/*string s = "hello";
	cout << s[0] << endl;*/

	/*string s1 = "LAND_", s2 = "CRUISER";
	cout << s1 + s2 << endl;*/

	/*string s1 = "hello", s2 = "world";
	string s3 = s1 + ',' + s2 + '!';
	cout << s3 << endl;*/
						
	/*string s1 = "hello", s2 = "world";
	char c = 97;
	string s3 = s1 + "hello" + "world";
	cout << c << endl;*/

	/*�ӱ�׼������һ�ζ���һ���У�Ȼ���޸ĳ���ʹ��һ�ζ���һ����*/
	//string s;
	///*while (getline(cin, s))
	//	cout << s << endl;*/
	//while (cin >> s)
	//	cout << s << endl;

	/*���������ַ������Ƚ����Ƿ���Ȳ���������������������ϴ���Ǹ��ַ���*/
	/*string s1, s2;
	cout << "�������һ���ַ���: ";
	cin >> s1;
	cout << "������ڶ����ַ���: ";
	cin >> s2;
	if (s1 == s2)
	{
		cout << "�����ַ������!" << endl;
	}
	else
	{
		if (s1 > s2)
			cout << "�ϴ���ַ���Ϊ: " << s1 << endl;
		else
			cout << "�ϴ���ַ���Ϊ: " << s2 << endl;
	}*/

	/*���������ַ������Ƚ�����������ַ����Ƿ�ȳ���������ȳ�������Ƚϴ���Ǹ��ַ���*/
	/*string s1, s2;
	cout << "�������һ���ַ���:";
	cin >> s1;
	cout << "������ڶ����ַ���:";
	cin >> s2;
	if (s1.size() == s2.size())
		cout << "�����ַ���������ȣ�����Ϊ: " << s1.size() << endl;
	else
	{
		if (s1.size() > s2.size())
			cout << "s1�ĳ��Ƚϴ󣬳���Ϊ: " << s1.size() << endl;
		else
			cout << "s2�ĳ��Ƚϴ󣬳���Ϊ: " << s2.size() << endl;
	}*/

	/*�ӱ�׼�����ж������ַ���������������һ��������ӳɵĴ��ַ���*/
	/*string s;
	string s1;
	while (cin >> s)
	{
		s1 += s;
	}
	cout << s1 << endl;*/

	/*�޸����������ÿո������Ķ���ַ����ָ�����*/
	/*string s;
	string s1;
	while (cin >> s)
	{
		s1 = s1+s+" ";
	}
	cout << s1 << endl;*/

	//string s = "hello world";
	//for (auto c : s)                                     //����s�е�ÿ���ַ�
	//	cout << c << endl;                      //�����ǰ�ַ����������һ�����з�

	///*ʹ�÷�Χfor����ispunct������ͳ��string�����б����ŵĸ���*/
	//string s = "hello world!!!";
	//decltype(s.size()) punct_cnt = 0;           //punct_cnt�����ͺ�s.size�ķ�������һ��
	//for (auto c : s)                                      //����s�е�ÿ���ַ�
	//{
	//	if (ispunct(c))                                    //������ַ��Ǳ�����
	//		punct_cnt++;                                   //��punct_cnt��ֵ+1
	//}
	//cout << s << "�еı�������: " << punct_cnt << endl;

	//string s = "Hello World!!!";
	//for (auto &c : s)                                   //����s�е�ÿ���ַ�(c������)
	//	c = toupper(c);                                //c��һ�����ã���˸�ֵ��佫�ı�s���ַ���ֵ
	//cout << s << endl;

	//string s = "hello world";
	//if (!s.empty())                                 //ȷ��s[0]��λ��ȷʵ���ַ�
	//	s[0] = toupper(s[0]);                  //Ϊs�ĵ�һ���ַ���һ����ֵ
	//cout << s << endl;

	//string s = "some string";
	//for (decltype(s.size()) i = 0; i < s.size() && s[i] != ' '; i++)          //���δ���s�е��ַ�ֱ��������ȫ���ַ���������һ���հ�
	//	s[i] = toupper(s[i]);
	//cout << s << endl;

	///*��д�����0-15֮���ʮ������ת���ɶ�Ӧ��ʮ��������ʽ*/
	//const string hexdigits = "0123456789ABCDEF";                //���ܵ�ʮ����������
	//string result;                                                                //���ڱ���ʮ�����Ƶ��ַ���
	//string::size_type n;                                                        //���ڱ������������ȡ����
	//while (cin >> n)
	//{
	//	if (n < hexdigits.size())                                               //������Ч����
	//		result += hexdigits[n];                                            //�õ���Ӧ��ʮ����������
	//}
	//cout << result << endl;

	///*ʹ�÷�Χfor��佫�ַ����ڵ������ַ���X����*/
	//string s = "hello world";
	//for (auto &c : s)
	//	c = 'X';
	//cout << s << endl;

	//string s = "hello world";
	//for (char c : s)
	//	c = 'X';                                                                        //��û�иı�ʵ��s���ַ���ֵ
	//cout << s << endl;

	///*ʹ��whileѭ�����ַ����ڵ������ַ���X����*/
	//string s = "hello world";
	//string::size_type i = 0;
	//while (i < s.size())
	//{
	//	s[i] = 'X';
	//	i++;
	//}
	//cout << s << endl;

	///*ʹ��forѭ�����ַ����ڵ������ַ���X����*/
	//string s = "hello world";
	//for (string::size_type i = 0; i < s.size(); i++)
	//	s[i] = 'X';
	//cout << s << endl;

	///*����һ�����������ŵ��ַ�������������ȥ��������ַ���ʣ��Ĳ���*/
	//string s = "hello,world!!!";
	//for (string::size_type i = 0; i < s.size(); i++)
	//{
	//	if (!ispunct(s[i]))
	//		cout << s[i];
	//}
	//cout << endl;

	//const string s = "hello world!";
	//for (auto &c : s)
	//{
	//	c = 'x';                                                   //c������Ϊconst char&,���Բ���ͨ��c�ı��ַ���ֵ
	//}
	return 0;
}