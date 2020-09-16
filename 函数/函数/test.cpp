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

/*������������ò��Ҹ��������10��string����*/
string arr[10];
string (&func())[10];
using arrS = string[10];
arrS &fun7();
auto func8()->string(&)[10];
decltype(arr) &func9();

/*�����Ľ׳�*/
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

/*���û���������ʾ�û�����һ�����֣��������ɸ����ֵĽ׳�*/
void func1()
{
	int num;
	int ret = 1;
	cout << "������һ������:  ";
	cin >> num;
	while (num > 1)
	{
		ret *= num;
		num--;
	}
	cout <<"�׳�Ϊ: " << ret << endl;
}

/*�����ʵ�εľ���ֵ*/
int func2(int val)
{
	if (val < 0)
		val = -val;
	return val;
}

/*ͳ�ƺ��������ö��ٴ�*/
size_t count_calls()
{
	static size_t ctr = 0;
	return ++ctr;
}

/*ͬʱ�õ��βΡ��ֲ��������ֲ���̬�������������*/
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

/*��һ�α�����ʱ����0���Ժ�ÿ�α����÷���ֵ��1*/
int func4()
{
	static int count = -1;
	return ++count;
}

/*ʹ��ָ���βν�������������ֵ*/
void change(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/*ʹ�������βν�����������*/
void reset(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

/*�ж�string�������Ƿ��д�д��ĸ*/
bool Upper(const string &s)
{
	for (string::size_type i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A'&&s[i] <= 'Z')
			return true;
	}
	return false;
}

/*��string����ȫ����д��Сд��ʽ*/
string my_reset(string &s)
{
	for (string::size_type i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A'&&s[i] <= 'Z')
			s[i] = s[i] + 32;
	}
	return s;
}

/*����������������:һ����int�͵�������һ����intָ�룬�����Ƚ�int��ֵ��ָ����ָ��ֵ�����ؽϴ���Ǹ�*/
int Max_num(const int a, const int *p)
{
	return a > *p ? a : *p;
}

/*��������intָ��*/
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

/*��������Ϊinitializer_list<int>���͵Ķ��󣬺����Ĺ����Ǽ����б�������Ԫ�صĺ�*/
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
///*��Ϊ���в���ȷ�ķ���ֵ��������δ����޷�ͨ������*/
//bool str_subrange(const string &str1, const string &str2)
//{
//	//��С��ͬ:��ʱ����ͨ��������жϽ����Ϊ����ֵ
//	if (str1.size() == str2.size())
//		return str1 == str2;                                                 //��ȷ:==��������ز���ֵ
//	//�õ��϶�string����Ĵ�С,
//	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
//	//�������string����Ķ�Ӧ�ַ��Ƿ���ȣ��Խ϶̵��ַ�������Ϊ��
//	for (decltype(size) i = 0; i != size; i++)
//	{
//		if (str1[i] != str2[i])
//			return;                      //����:û�з���ֵ
//	}
//	//����(������δ����):������������δ�����κ�ֵ�ͽ����˺�����ִ��
//}

/*ʹ�õݹ����vector���������*/
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
	cout << "ֻ��һ��int�Ͳ���" << endl;
}

void print(int a, int b)
{
	cout << "������int�Ͳ���" << endl;
}

void print(double a, double b)
{
	cout << "������double�Ͳ���" << endl;
}


/*ʹ��Ĭ��ʵ���������success��failure�ĵ�����ʽ�͸�����ʽ*/
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
	cout << "����֮ǰ: " << *p1 << "    " << *p2 << endl;
	change_ptr(p1, p2);
	cout << "����֮��: " << *p1 << "    " << *p2 << endl;*/

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

	//cout << "���ʵĵ�����ʽ: " << make_plural(1, "success", "es") << " " << make_plural(1, "failure") << endl;
	//cout << "���ʵĸ�����ʽ: " << make_plural(2, "success", "es") << " " << make_plural(2, "failure") << endl;
	
	//cout << __func__ << endl;

	////print(2.56, 42);               //���ж�����
	//print(42);                          //ֻ��һ��int�Ͳ���
	//print(42, 0);						//������int�Ͳ���
	//print(2.56, 3.14);					//������double�Ͳ���

	/*for (auto f : ivec)
	{
		cout << f(10, 5) << endl;
	}*/

	//return 0;
//}