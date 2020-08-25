#include<iostream>
#include<string>
#include<vector>

using std::cin;                      //using声明，当我们使用名字cin时，从命名空间std中获取它
using std::cout;
using std::endl;
using std::string;
using std::vector;

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

	//vector<int> ivec;                                      //ivec保存int类型的对象
	//vector<char> c;										//c保存char类型的对象
	//vector<vector<string>> file;                      //该向量的元素是vector对象
	
	//vector<int> ivec;                                          //初始状态为空
	//vector<int> ivec2(ivec);                               //把ivec的元素拷贝给ivec2
	//vector<int> ivec3 = ivec;                               //把ivec的元素拷贝给ivec3
	//vector<string> svec(ivec2);                       //错误:svec的元素是string对象，不是int
                   
	//vector<int> v1(10);										//v1有10个元素，每个元素的值为0
	//vector<int> v2{ 10 };									//v2有1个元素，该元素的值为10
	//vector<int> v3(10, 1);									//v3有10个元素，每个元素的值为1
	//vector<int> v4{ 10,1 };									//v4有2个元素，元素值分别为10和1

	//vector<string> v5{ "hi" };                                 //列表初始化:v5有一个元素
	//vector<string> v6("hi");                                   //错误:不能使用字符串字面值构建vector对象
	//vector<string> v7{ 10 };                                    //v7有10个默认初始化的元素
	//vector<string> v8{ 10,"hi" };                              //v8有10个值为"hi"的元素

	//vector<vector<int>> ivec;
	////vector<string> svec = ivec
	//vector<string> svec(10, "null");

	//vector<int> v2;                                               //空vector对象
	//for (int i = 0; i < 100; i++)								//依次把整数值放到v2尾端
	//	v2.push_back(i);                                           //循环结束后v2有100个元素，值从0到99

	///*从标准输入中读取单词，将其作为vector对象的元素存储*/
	//string word;
	//vector<string> text;                                 //空vector对象
	//while (cin >> word)
	//	text.push_back(word);							//把word添加到text后面

	///*用cin读入一组整数并把它们存入到一个vector对象*/
	//vector<int> ivec;
	//int i;
	//while (cin >> i)
	//	ivec.push_back(i);

	///*用cin读入一组字符串并把它们存入到一个vector对象*/
	//vector<string> svec;
	//string s;
	//while (cin >> s)
	//	svec.push_back(s);

	//vector<int> v{ 1,2,3,4,5,6,7,8,9 };
	//for (auto &i : v)                 //对于v中的每个元素
	//	i = i * i;                          //求元素值的平方
	//for (auto i : v)                   //对于v中的每个元素
	//	cout << i << " ";          //输出该元素
	//cout << endl;

	///*假设有一组成绩的集合，其中成绩的取值是从0-100，以10分为一个分数段，要求统计各个分数段有多少个成绩*/
	//vector<unsigned> scores(11, 0);                 //11个分数段，全都初始化为0
	//unsigned grade;
	//while (cin >> grade)                                       //读取成绩
	//{
	//	if (grade <= 100)                                        //只处理有效的成绩
	//		scores[grade / 10]++;                            //将对应分数段的计数值+1
	//}
	//for (auto i : scores)
	//	cout << i << " ";
	//cout << endl;

	//string s;
	//for (decltype(s.size()) i = 0; i < s.size(); i++)
	//	s[i] = 'X';                         //错误: vector对象以及string对象的下标运算符㐓用于访问已存在的元素，而不能用于添加元素
	//cout << s << endl;

	//vector<int> v1;
	//for (auto i : v1)
	//	cout << i << " ";                                     //NULL
	//cout <<endl<< v1.size() << endl;                         //0
	//vector<int> v2(10);
	//for (auto i : v2)
	//	cout << i << " ";                       //十个0
	//cout << endl<<v2.size() << endl;           //10
	//vector<int> v3(10, 42);
	//for (auto i : v3)
	//	cout << i << " ";                                //10个42
	//cout << endl << v3.size() << endl;      //10
	//vector<int> v4{ 10 };
	//for (auto i : v4)
	//	cout << i;                                         //10
	//cout << endl << v4.size() << endl;    //1
	//vector<int> v5{ 10,42 };
	//for (auto i : v5)
	//	cout << i << " ";                                   //10 42
	//cout << endl << v5.size() << endl;         //2
	//vector<string> v6{ 10 };
	//for (auto s : v6)
	//	cout << s << " ";                                 //NULL
	//cout << endl << v6.size() << endl;          //10
	//vector<string> v7{ 10,"hi" };
	//for (auto s : v7) 
	//	cout << s << " ";                                   //10个hi
	//cout << endl << v7.size() << endl;               //10

	///*从cin读入一组词并存入vector对象，设法把所有词都改写成大写形式，输出改变后的结果*/
	//vector<string> text;
	//string s;
	//while (cin >> s)
	//	text.push_back(s);
	//for (decltype(text.size()) i = 0; i < text.size(); i++)
	//{
	//	for (decltype(text[i].size()) j = 0; j < text[i].size(); j++)
	//	{
	//		text[i][j] = toupper(text[i][j]);
	//	}
	//}
	//for (auto s : text)
	//{
	//	cout << s << endl;
	//}

	// /*定义一个含有10个元素的vector对象，所有元素的值都是42*/
	//vector<int> ivec(10, 42);
	//vector<int> ivec1{ 42,42,42,42,42,42,42,42,42,42 };
	//vector<int> ivec2 = { 42,42,42,42,42,42,42,42,42,42 };

	///*读入一组整数并把它们存入一个vector对象，将每对相邻整数的和输出出来*/
	//vector<int> ivec;
	//int i;
	//while (cin >> i)
	//{
	//	ivec.push_back(i);
	//}
	//for (decltype(ivec.size()) i = 0; i < ivec.size(); i += 2)
	//{
	//	if (i == ivec.size() - 1)
	//		cout << ivec[i] << endl;
	//	else
	//		cout << ivec[i] + ivec[i + 1] << " ";
	//}

	/*读入一组整数并把它们存入一个vector对象，先输出第一个和最后一个元素的和，然后输出第二个和倒数第二个元素的和*/
	/*vector<int> ivec;
	int i;
	while (cin >> i)
		ivec.push_back(i);
	if (ivec.size() % 2 == 0)
	{
		for (decltype(ivec.size()) i = 0; i < ivec.size() / 2; i++)
		{
			cout << ivec[i] + ivec[ivec.size() - i - 1] << " ";
		}
	}
	else
	{
		for (decltype(ivec.size()) i = 0; i < ivec.size() / 2; i++)
		{
			cout << ivec[i] + ivec[ivec.size() - i - 1] << " ";
		}
		cout << ivec[ivec.size() / 2];
	}
	cout << endl;*/

	///*将第一个字符改写成大写字母*/
	//string s = "some string";
	//if (s.begin() != s.end())                         //确保s非空
	//{
	//	auto it = s.begin();						 //it表示s的第一个字符
	//	*it = toupper(*it);							//将当前字符改写成大写形式
	//}
	//cout << s << endl;

	///*将第一个单词改写成大写字母*/
	//string s = "hello world";
	//for (auto it = s.begin(); it != s.end() && !isspace(*it); it++)  //依次处理s的字符直至处理完全部字符或遇到空白
	//{
	//	*it = toupper(*it);                                              //将当前字符改写成大写形式
	//}
	//cout << s << endl;

	//vector<int>::iterator it;                            //it能读写vector<int>的元素
	//string::iterator it2;                                 //it2能读写string对象中的字符
	//vector<int>::const_iterator;                   //it3只能读元素，不能写元素
	//string::const_iterator it4;							//it4只能读元素，不能写字符

	//vector<int> v;
	//const vector<int> v2; 
	//auto it1 = v.begin();                       //it1的类型是vector<int>::iterator
	//auto it2 = v2.begin();                    //it2的类型是vector<int>::const_iterator

	/*vector<string> svec = { "hello","world","i","am","land_cruisersyh" };
	for (auto it = svec.begin(); it != svec.end() && !it->empty(); it++)
	{
		for (auto it2 = it->begin(); it2 != it->end(); it2++)
			*it2 = toupper(*it2);
	}
	for (auto s : svec)
	{
		cout << s << " ";
	}
	cout << endl;*/

	///*创建一个含有10个整数的vector对象，使用迭代器将所有元素的值都变成原来的两倍*/
	//vector<int> ivec = { 1,2,3,4,5,6,7,8,9,10 };
	//for (auto it = ivec.begin(); it != ivec.end(); it++)
	//{
	//	(*it) = (*it) * 2;
	//	cout << (*it) << " ";
	//}
	//cout << endl;

	///*使用迭代器进行二分查找*/
	//vector<int> text = { 1,2,3,4,5,6,7,8,9 };               //text必须是有序的
	//int num = 7;
	//auto beg = text.begin(), end = text.end();         //beg和end表示我们搜索的范围
	//auto mid = text.begin() + (end - beg) / 2;                //初始状态下的中间点
	//while (mid != end && *mid != num)                 //当还有元素尚未检查并且还没有找到num则继续执行循环
	//{
	//	if (num < *mid)                                 //如果要找的元素比*mid小，则在前半部分进行查找
	//		end = mid;
	//	else                                                     //如果要找的元素比*mid大，则在后半部分进行查找
	//		beg = mid + 1;
	//	mid = beg+(end-beg)/2;                   //新的中间点
	//}

	///*读入一组整数并存入vector对象，将每对相邻整数的和输出*/
	//vector<int> ivec;
	//int i;
	//while (cin >> i)
	//{
	//	ivec.push_back(i);
	//}
	//for (auto it = ivec.begin(); it != ivec.end(); it += 2)
	//{
	//	if (it != ivec.end() - 1)
	//		cout << *it + *(it + 1) << " ";
	//	else
	//	{
	//		cout << *it;
	//		break;
	//	}
	//}
	//cout << endl;

	///*读入一组整数并存入vector对象，先输出第一个和最后一个元素的和，接着输出第二个和倒数第二个元素的和，...*/
	//vector<int> ivec;
	//int i;
	//while (cin >> i)
	//	ivec.push_back(i);
	//for (auto it = ivec.begin(), it2 = ivec.end() - 1; it <= it2; it++, it2--)
	//{
	//	if (it == it2)
	//		cout << *it;
	//	else
	//		cout << *it + *it2 << " ";
	//}
	//cout << endl;

	///*以10分为一个分数段统计成绩的数量*/
	//vector<unsigned> ivec(11,0);
	//unsigned grade;
	//while (cin >> grade)
	//{
	//	if (grade <= 100)
	//	{
	//		(*(ivec.begin() + grade / 10))++;
	//	}
	//}
	//for (auto i : ivec)
	//{
	//	cout << i << " ";
	//}
	//cout << endl;
	return 0;
}