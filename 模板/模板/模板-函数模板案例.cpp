#include<iostream>

using namespace std;

/*
	1.���ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������������������
	2.�������Ӵ�С�������㷨Ϊѡ������
	3.�ֱ�����char�����int������в���
*/

//template<typename T>
//void sortSelect(T *arr,int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int indexMax = i;              //�϶����ֵ�±�
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[indexMax] < arr[j])
//				indexMax = j;           //�������ֵ�±�
//		}
//		if (indexMax != i)
//		{
//			T temp = arr[indexMax];
//			arr[indexMax] = arr[i];
//			arr[i] = temp;
//		}
//	}
//}
//
//template<typename T>
//void print(T *arr, int len)
//{
//	for (int i = 0; i < len; i++)
//		cout << arr[i] << "  ";
//	cout << endl;
//}
//void test1()
//{
//	/*int arr[10] = { 8,9,6,2,5,7,4,3,1,0 };
//	print(arr, 10);
//	sortSelect(arr, 10);
//	print(arr, 10);*/
//
//	char arr[10] = "arksdjenc";
//	print(arr, 10);
//	sortSelect(arr, 10);
//	print(arr, 10);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}