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


int main(int argc,char **argv)
{
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

	cout << sum_val({ 1,2,3,4,5,6,7,8,9,10}) << endl;
	return 0;
}