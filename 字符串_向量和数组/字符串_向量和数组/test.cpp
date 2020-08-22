#include<iostream>
#include<string>

using std::cin;                      //using声明，当我们使用名字cin时，从命名空间std中获取它
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
	cout << "请输入两个数: ";
	cin >> v1 >> v2;
	cout << v1 << v2 << endl;*/

	///*使用whlie循环将50到100的整数相加*/
	//int i = 50;
	//int sum = 0;
	//while (i <= 100)
	//{
	//	sum += i;
	//	i++;
	//}
	//cout << "50-100的整数之和为: " << sum << endl;

	///*使用while循环打印10-0之间的整数*/
	//int num = 10;
	//while (num >= 0)
	//{
	//	cout << num << " ";
	//	num--;
	//}
	//cout << endl;

	///*提示用户输入两个整数，打印这两个整数所指定的范围内的所有整数*/
	//int v1, v2;
	//cout << "请输入两个整数: ";
	//cin >> v1 >> v2;
	//while (v1 <= v2)
	//{
	//	cout << v1 << " ";
	//	v1++;
	//}
	//cout << endl;

	///*书店程序*/
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
	//	cout << "无销售记录" << endl;
	//	return -1;
	//}

	//string s1;                                //默认初始化，s1是一个空串
	//string s2 = s1;                           //等价于s2(s1),s2是s1的副本
	//string s3 = "hello";                 //等价于s3("hello"),s3是字面值"value"的副本(除最后一个空字符)
	//string s4(10, 'c');                     //把s4初始化为由连续10个字符'c'组成的串

	//string s;                                  //空字符串
	//cin >> s;                              //将string对象读入s，遇到空白停止
	//cout << s << endl;                //输出s
	//return 0;

	//string word;
	//while (cin >> word)                             //反复读取，直至到达文件末尾
	//	cout << word << endl;                    //逐个输出单词，每个单词后面紧跟一个换行

	/*string line;
	while (getline(cin, line))
		cout << line << endl;*/

	/*string s;
	if (s.empty())
		cout << "字符串为空!" << endl;*/
	
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

	/*从标准输入中一次读入一整行，然后修改程序使其一次读入一个词*/
	//string s;
	///*while (getline(cin, s))
	//	cout << s << endl;*/
	//while (cin >> s)
	//	cout << s << endl;

	/*读入两个字符串，比较其是否相等并输出结果，如果不相等输出较大的那个字符串*/
	/*string s1, s2;
	cout << "请输入第一个字符串: ";
	cin >> s1;
	cout << "请输入第二个字符串: ";
	cin >> s2;
	if (s1 == s2)
	{
		cout << "两个字符串相等!" << endl;
	}
	else
	{
		if (s1 > s2)
			cout << "较大的字符串为: " << s1 << endl;
		else
			cout << "较大的字符串为: " << s2 << endl;
	}*/

	/*读入两个字符串，比较输入的两个字符串是否等长，如果不等长输出长度较大的那个字符串*/
	/*string s1, s2;
	cout << "请输入第一个字符串:";
	cin >> s1;
	cout << "请输入第二个字符串:";
	cin >> s2;
	if (s1.size() == s2.size())
		cout << "两个字符串长度相等，长度为: " << s1.size() << endl;
	else
	{
		if (s1.size() > s2.size())
			cout << "s1的长度较大，长度为: " << s1.size() << endl;
		else
			cout << "s2的长度较大，长度为: " << s2.size() << endl;
	}*/

	/*从标准输入中读入多个字符并将它们连接在一起，输出连接成的大字符串*/
	/*string s;
	string s1;
	while (cin >> s)
	{
		s1 += s;
	}
	cout << s1 << endl;*/

	/*修改上述程序，用空格把输入的多个字符串分隔开来*/
	/*string s;
	string s1;
	while (cin >> s)
	{
		s1 = s1+s+" ";
	}
	cout << s1 << endl;*/

	//string s = "hello world";
	//for (auto c : s)                                     //对于s中的每个字符
	//	cout << c << endl;                      //输出当前字符，后面紧跟一个换行符

	///*使用范围for语句和ispunct函数来统计string对象中标点符号的个数*/
	//string s = "hello world!!!";
	//decltype(s.size()) punct_cnt = 0;           //punct_cnt的类型和s.size的返回类型一样
	//for (auto c : s)                                      //对于s中的每个字符
	//{
	//	if (ispunct(c))                                    //如果该字符是标点符号
	//		punct_cnt++;                                   //将punct_cnt的值+1
	//}
	//cout << s << "中的标点符号有: " << punct_cnt << endl;

	//string s = "Hello World!!!";
	//for (auto &c : s)                                   //对于s中的每个字符(c是引用)
	//	c = toupper(c);                                //c是一个引用，因此赋值语句将改变s中字符的值
	//cout << s << endl;

	//string s = "hello world";
	//if (!s.empty())                                 //确保s[0]的位置确实有字符
	//	s[0] = toupper(s[0]);                  //为s的第一个字符赋一个新值
	//cout << s << endl;

	//string s = "some string";
	//for (decltype(s.size()) i = 0; i < s.size() && s[i] != ' '; i++)          //依次处理s中的字符直至处理完全部字符或者遇到一个空白
	//	s[i] = toupper(s[i]);
	//cout << s << endl;

	///*编写程序把0-15之间的十进制数转换成对应的十六进制形式*/
	//const string hexdigits = "0123456789ABCDEF";                //可能的十六进制数字
	//string result;                                                                //用于保存十六进制的字符串
	//string::size_type n;                                                        //用于保存从输入流读取的数
	//while (cin >> n)
	//{
	//	if (n < hexdigits.size())                                               //忽略无效输入
	//		result += hexdigits[n];                                            //得到对应的十六进制数字
	//}
	//cout << result << endl;

	///*使用范围for语句将字符串内的所有字符用X代替*/
	//string s = "hello world";
	//for (auto &c : s)
	//	c = 'X';
	//cout << s << endl;

	//string s = "hello world";
	//for (char c : s)
	//	c = 'X';                                                                        //并没有改变实际s中字符的值
	//cout << s << endl;

	///*使用while循环将字符串内的所有字符用X代替*/
	//string s = "hello world";
	//string::size_type i = 0;
	//while (i < s.size())
	//{
	//	s[i] = 'X';
	//	i++;
	//}
	//cout << s << endl;

	///*使用for循环将字符串内的所有字符用X代替*/
	//string s = "hello world";
	//for (string::size_type i = 0; i < s.size(); i++)
	//	s[i] = 'X';
	//cout << s << endl;

	///*读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分*/
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
	//	c = 'x';                                                   //c的类型为const char&,所以不能通过c改变字符的值
	//}
	return 0;
}