#include<iostream>
#include<string>

#define MAXSIZE 1000          //ͨѶ¼�������

using namespace std;

/*
	ͨѶ¼��һ�����Լ�¼���ˣ�������Ϣ�Ĺ��ߣ�����C++��ʵ��һ��ͨѶ¼����ϵͳ
	ϵͳ����Ҫʵ�ֵĹ�������:
	1.�����ϵ��:��ͨѶ¼��������ˣ���Ϣ����(�������Ա����䡢��ϵ�绰����ͥסַ)����¼1000��
	2.��ʾ��ϵ��:��ʾͨѶ¼��������ϵ����Ϣ
	3.ɾ����ϵ��:������������ɾ��ָ����ϵ��
	4.������ϵ��:���������鿴ָ����ϵ����Ϣ
	5.�޸���ϵ��:�������������޸�ָ����ϵ�ˡ�
	6.�����ϵ��:���ͨѶ¼��������Ϣ
	7.�˳�ͨѶ¼:�˳���ǰʹ�õ�ͨѶ¼
*/


//��ϵ�˽ṹ��
struct User_info
{
	string name;      //����
	int sex;         //�Ա�:1�� 2Ů
	int age;           //����
	string phone_number; //��ϵ�绰
	string address;        //��ͥסַ

};

//ͨѶ¼�ṹ��
struct Mail_list
{
	User_info array[MAXSIZE];         //ͨѶ¼�е���ϵ������
	int size;				//ͨѶ¼�е���Ϣ����
};

//�˵�����
void showMenu()                               
{
	cout << "********************************" << endl;
	cout << "*****     1.�����ϵ��     *****" << endl;
	cout << "*****     2.��ʾ��ϵ��     *****" << endl;
	cout << "*****     3.ɾ����ϵ��     *****" << endl;
	cout << "*****     4.������ϵ��     *****" << endl;
	cout << "*****     5.�޸���ϵ��     *****" << endl;
	cout << "*****     6.�����ϵ��     *****" << endl;
	cout << "*****     0.�˳�ͨѶ¼     *****" << endl;
	cout << "********************************" << endl;

}


//�����ϵ��
void addUser(Mail_list *arr)
{
	if (arr->size == MAXSIZE)					//�ж�ͨѶ¼�Ƿ�����
	{
		cout << "ͨѶ¼����!" << endl;
		return;
	}
	else												//�����ϵ��
	{
		cout << "����������: ";
		cin >> arr->array[arr->size].name;
		int num = 0;
		while (true)                               //�ж��Ƿ�����1/2�����������������
		{
			cout << "�������Ա�(1�� 2Ů): ";
			cin >> num;
			if (num == 1 || num == 2)
			{
				arr->array[arr->size].sex = num;
				break;
			}
			else
				cout << "�����������������!" << endl;
		}
		int temp = 0; 
		while (true)                              //�ж������Ƿ�Ϸ������Ϸ���ʾ�û���������
		{
			cout << "����������: ";
			cin >> temp;
			if (temp <= 0 || temp > 150)
				cout << "�����������������!" << endl;
			else
			{
				arr->array[arr->size].age = temp;
				break;
			}
		}
		cout << "��������ϵ��ʽ: ";
		cin >> arr->array[arr->size].phone_number;
		cout << "������סַ: ";
		cin >> arr->array[arr->size].address;
		arr->size++;                                  //����ͨѶ¼��Ϣ����
		cout << "��ӳɹ�!" << endl;
		system("pause");							//�밴���������

		system("cls");							//����
	}
}

//��ʾ��ϵ��
void showUser(Mail_list *arr)
{
	if (arr->size == 0)							//�ж�ͨѶ¼�Ƿ�Ϊ��
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else                                  //ifͨѶ¼��Ϊ��
	{
		for (int i = 0; i < arr->size; i++)
		{
			cout << "����: " << arr->array[i].name <<"\t"
				<< "�Ա�:" << ((arr->array[i].sex == 1) ? "��" : "Ů") <<"\t"
				<< "����: "<< arr->array[i].age<< "\t"
				<< "��ϵ�绰: " << arr->array[i].phone_number <<"\t"
				<< "סַ: " << arr->array[i].address << endl;
		}
	}
	system("pause");					//�밴���������
	system("cls");								//����
}

//�ж���ϵ���Ƿ����
int isUser(Mail_list *arr,string s) 
{
	for (int i = 0; i < arr->size; i++)
	{
		if (arr->array[i].name == s)                       //������ڷ����±�λ��
			return i;
	}
	return -1;												//���������return -1
}

//ɾ����ϵ��
void DeleteUser(Mail_list *arr)
{
	if (arr->size == 0)                          //�ж�ͨѶ¼�Ƿ�Ϊ��
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		string s;
		cout << "��������ϵ������: ";
		cin >> s;                                 
		int temp = isUser(arr, s);
		if (temp>=0)                         //�����ϵ�˴���
		{
			for (int j = temp;j<arr->size-1;j++)
			{
				arr->array[j] = arr->array[j + 1];	  //�Ӻ���ǰ���θ��ǵ�������Ϣ
			}
			arr->size--;                      //����ͨ��¼����Ϣ����
			cout << "ɾ���ɹ�" << endl;
		}
		else                                            //�����ϵ�˲�����
		{
			cout << "��ϵ�˲�����" << endl;
		}
	}
	system("pause");                        //�밴���������
	system("cls");							//����
}

//������ϵ��
void findUser(Mail_list *arr)
{
	if (arr->size == 0)                                //�ж�ͨѶ¼�Ƿ�Ϊ��
		cout << "ͨѶ¼Ϊ��" << endl;
	else
	{
		cout << "��������Ҫ���ҵ�����: ";
		string s;
		cin >> s;
		int temp = isUser(arr, s);
		if (temp == -1)                                //�жϸ���ϵ���Ƿ����
			cout << "����ϵ�˲�����" << endl;
		else
			cout << "����: " << arr->array[temp].name << "\t"
			<< "�Ա�:" << ((arr->array[temp].sex == 1) ? "��" : "Ů") << "\t"
			<< "����: " << arr->array[temp].age << "\t"
			<< "��ϵ�绰: " << arr->array[temp].phone_number << "\t"
			<< "סַ: " << arr->array[temp].address << endl;
	}
	system("pause");                                  //�밴���������
	system("cls");										//����
}

//�޸���ϵ��
void modifyUser(Mail_list *arr)
{
	if (arr->size == 0)								//�ж�ͨѶ¼�Ƿ�Ϊ��
		cout << "ͨѶ¼Ϊ��" << endl;
	else
	{
		string s;
		cout << "��������Ҫ�޸ĵ���ϵ������: ";
		cin >> s;
		int temp = isUser(arr, s);
		if (temp == -1)
			cout << "����ϵ�˲�����" << endl;
		else
		{
			cout << "����������: ";
			cin >> arr->array[temp].name;
			int num = 0;
			while (true)                               //�ж��Ƿ�����1/2�����������������
			{
				cout << "�������Ա�(1�� 2Ů): ";
				cin >> num;
				if (num == 1 || num == 2)
				{
					arr->array[temp].sex = num;
					break;
				}
				else
					cout << "�����������������!" << endl;
			}
			int n = 0;
			while (true)                              //�ж������Ƿ�Ϸ������Ϸ���ʾ�û���������
			{
				cout << "����������: ";
				cin >> n;
				if (n <= 0 || n > 150)
					cout << "�����������������!" << endl;
				else
				{
					arr->array[temp].age = n;
					break;
				}
			}
			cout << "��������ϵ��ʽ: ";
			cin >> arr->array[temp].phone_number;
			cout << "������סַ: ";
			cin >> arr->array[temp].address;
			cout << "�޸ĳɹ�!" << endl;
		}
	}
	system("pause");								//�밴���������
	system("cls");									//����
}

//�����ϵ��
void cleanUser(Mail_list *arr)
{
	arr->size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");							//�밴���������
	system("cls");								//����
}

int main()
{
	Mail_list mail;                  //����ͨѶ¼�ṹ�����
	mail.size = 0;                 //��ʼ��ͨѶ¼��Ϣ����

	int select = 0;            //�����û�ѡ������ı���

	while (true)
	{
		showMenu();					//�˵�����
		cin >> select;       //�û�����
		switch (select)
		{
		case 1:            //�����ϵ��
			addUser(&mail);
			break;
		case 2:				//��ʾ��ϵ��
			showUser(&mail);
			break;
		case 3:				//ɾ����ϵ��
			DeleteUser(&mail);
			break;
		case 4:				//������ϵ��
			findUser(&mail);
			break;
		case 5:				//�޸���ϵ��
			modifyUser(&mail);
			break;
		case 6:				//�����ϵ��
			cleanUser(&mail);
			break;
		case 0: {		//�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			return 0;
		}
		default: {
			cout << "������������������" << endl;
			system("pause");
			system("cls");
			break;
		}
		}
	}
	return 0;
}