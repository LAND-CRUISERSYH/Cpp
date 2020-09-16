#include<iostream>
#include<string>
#include<vector>
#include<initializer_list>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::initializer_list;

/*返回数组的引用并且该数组包含10个string对象*/
string arr[10];
string (&func())[10];
using arrS = string[10];
arrS &fun7();
auto func8()->string(&)[10];
decltype(arr) &func9();

/*求数的阶乘*/
int fact(int val)
{
	int ret = 1;
	while (val > 1)
	{
		ret *= val;
		val--;
	}
	return ret;
}

/*与用户交互，提示用户输入一个数字，计算生成该数字的阶乘*/
void func1()
{
	int num;
	int ret = 1;
	cout << "请输入一个数字:  ";
	cin >> num;
	while (num > 1)
	{
		ret *= num;
		num--;
	}
	cout <<"阶乘为: " << ret << endl;
}

/*输出其实参的绝对值*/
int func2(int val)
{
	if (val < 0)
		val = -val;
	return val;
}

/*统计函数被调用多少次*/
size_t count_calls()
{
	static size_t ctr = 0;
	return ++ctr;
}

/*同时用到形参、局部变量及局部静态变量，理解区别*/
void func3(int val)
{
	int num = 6;
	num++;
	cout << num << endl;
	val++;
	cout << val << endl;
	static int sum = 8;
	sum++;
	cout << sum<<endl;
}

/*第一次被调用时返回0，以后每次被调用返回值加1*/
int func4()
{
	static int count = -1;
	return ++count;
}

/*使用指针形参交换两个整数的值*/
void change(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/*使用引用形参交换两个整数*/
void reset(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

/*判断string对象中是否含有大写字母*/
bool Upper(const string &s)
{
	for (string::size_type i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A'&&s[i] <= 'Z')
			return true;
	}
	return false;
}

/*把string对象全都改写成小写形式*/
string my_reset(string &s)
{
	for (string::size_type i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A'&&s[i] <= 'Z')
			s[i] = s[i] + 32;
	}
	return s;
}

/*函数接收两个参数:一个是int型的数，另一个是int指针，函数比较int的值和指针所指的值，返回较大的那个*/
int Max_num(const int a, const int *p)
{
	return a > *p ? a : *p;
}

/*交换两个int指针*/
void change_ptr(int *&a, int *&b)
{
	int *temp;
	temp = a;
	a = b;
	b = temp;
}

void print(const int ia[10])
{
	for (size_t i = 0; i != 10; i++)
		cout << ia[i] << endl;
}

/*函数参数为initializer_list<int>类型的对象，函数的功能是计算列表中所有元素的和*/
int sum_val(initializer_list<int> il)
{
	int sum = 0;
	for (const auto &i : il)
	{
		sum += i;
	}
	return sum;
}
//
///*因为含有不正确的返回值，所以这段代码无法通过编译*/
//bool str_subrange(const string &str1, const string &str2)
//{
//	//大小相同:此时用普通的相等性判断结果作为返回值
//	if (str1.size() == str2.size())
//		return str1 == str2;                                                 //正确:==运算符返回布尔值
//	//得到较短string对象的大小,
//	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
//	//检查两个string对象的对应字符是否相等，以较短的字符串长度为限
//	for (decltype(size) i = 0; i != size; i++)
//	{
//		if (str1[i] != str2[i])
//			return;                      //错误:没有返回值
//	}
//	//错误(编译器未检查出):控制流可能尚未返回任何值就结束了函数的执行
//}

/*使用递归输出vector对象的内容*/
void print_vector(vector<int> i,int n)
{
	if (n != -1)
	{
		cout << i[n] << " ";
		n--;
		print_vector(i, n);
	}
}

void print()
{
	cout << __func__ << endl;
}

void print(int a)
{
	cout << "只有一个int型参数" << endl;
}

void print(int a, int b)
{
	cout << "有两个int型参数" << endl;
}

void print(double a, double b)
{
	cout << "有两个double型参数" << endl;
}


/*使用默认实参输出单词success和failure的单数形式和复数形式*/
string make_plural(int ctr, const string &word, const string &ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}

int func_54(int, int);

int func_551(int a, int b)
{
	return a + b;
}

int func_552(int a, int b)
{
	return a - b;
}

int func_553(int a, int b)
{
	return a * b;
}

int func_554(int a, int b)
{
	return a / b;
}

vector<int(*)(int, int)> ivec = { func_551,func_552,func_553,func_554 };

//int main(int argc,char **argv)
//{
	/*int num = fact(5);
	cout << num << endl;*/

	/*func1();*/

	/*cout << func2(-5) << endl;*/

	/*for (size_t i = 0; i < 10; i++)
		cout << count_calls() << endl;*/

	/*for (int i = 0; i < 10; i++)
		func3(i);*/

	/*for (int i = 0; i < 10; i++)
		cout << func4();
	cout << endl;*/

	/*int i = 4, j = 9;
	cout << "i = " << i << "," << "j = " << j << endl;
	change(&i, &j);
	cout << "i = " << i << "," << "j = " << j << endl;*/

	/*int i = 4, j = 9;
	cout << "i = " << i << "," << "j = " << j << endl;
	reset(i, j);
	cout << "i = " << i << "," << "j = " << j << endl;*/
	
	/*int a = 6,b = 7;
	cout << Max_num(a, &b) << endl;*/

	/*int a = 6, b = 5;
	int *p1 = &a;
	int *p2 = &b;
	cout << "交换之前: " << *p1 << "    " << *p2 << endl;
	change_ptr(p1, p2);
	cout << "交换之后: " << *p1 << "    " << *p2 << endl;*/

	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	print(arr);*/

	/*string str;
	for (int i = 1; i != argc; i++)
	{
		str += argv[i];
		str += " ";
	}
	cout << str << endl;*/

	/*cout << sum_val({ 1,2,3,4,5,6,7,8,9,10}) << endl;*/

	/*vector<int> ivec = { 1,2,3,4,5,6,7,8,9,10 };
	print_vector(ivec, ivec.size()-1);*/

	/*int c = 'Z';
	cout << c << endl;*/

	//cout << "单词的单数形式: " << make_plural(1, "success", "es") << " " << make_plural(1, "failure") << endl;
	//cout << "单词的复数形式: " << make_plural(2, "success", "es") << " " << make_plural(2, "failure") << endl;
	
	//cout << __func__ << endl;

	////print(2.56, 42);               //具有二义性
	//print(42);                          //只有一个int型参数
	//print(42, 0);						//有两个int型参数
	//print(2.56, 3.14);					//有两个double型参数

	/*for (auto f : ivec)
	{
		cout << f(10, 5) << endl;
	}*/

	//return 0;
//}