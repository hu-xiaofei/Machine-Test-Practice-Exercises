#define _CRT_SECURE_NO_WARNINGS
//��ӡ��������
//��һ���б���������зֽ�
//#include<iostream>
//#include<string.h>
//using namespace std;
//int main()
//{
//	char str[1000];  
//	//char a = 'A'(ʢ��һ���ַ�,ֻ����һ������const char* str = "A"(ʢ��һ���ַ�����
//	memset(str, 0, 1000);  
//	// �� str ���������Ԫ�س�ʼ��Ϊ 0
//	int n = 0;
//	cin >> n;
//	//scanf("%d", &n);
//	//�����ϰ벿��
//	for (int i = 0; i <= n; i++)
//	{
//		memset(str, 0, 1000);
//		int j = 0;
//		//����ÿ��ǰ�Ŀո�
//		for (j = 0; j < 2 * n - 2 * i; j++)
//		{
//			str[j] = ' ';  //ʹ�� "" ��ʾ�ַ���������ַ�����ʹ�� '' ��ʾ�����ַ�
//		}
//		//����ÿ��ǰ�벿�ֵ���������
//		for (int k = 0; k <= i; k++) 
//		{
//			str[j] = '0' + k;
//			str[j + 1] = ' ';
//			j = j + 2;
//		}
//		//����ÿ�к�벿�ֵݼ�������
//		for (int k=i-1;k>=0;k--)
//		{
//			str[j] = '0' + k;
//			str[j + 1] = ' ';
//			j = j + 2;
//		}
//		cout << str << endl;
//		//printf("%s\n", str);
//	};
//	//�����°벿��
//	for (int i = n+1; i <= 2*n; i++)
//	{
//		memset(str, 0, 1000);
//		int j = 0;
//		//����ÿ��ǰ�Ŀո�
//		for (j = 0; j < 2 * i - 2*n; j++)
//		{
//			str[j] = ' ';
//		}
//		//����ÿ��ǰ�벿�ֵ���������
//		for (int k = 0; k <= 2*n-i; k++)
//		{
//			str[j] = '0' + k;
//			str[j + 1] = ' ';
//			j = j + 2;
//		}
//		//����ÿ�к�벿�ֵݼ�������
//		for (int k = 2*n-i - 1; k >= 0; k--)
//		{
//			str[j] = '0' + k;
//			str[j + 1] = ' ';
//			j = j + 2;
//		}
//		cout << str << endl;
//		//printf("%s\n", str);
//	}
//}

//�����������ַ������飨��ά����)���԰��зֽ�
#include<iostream>
#include<string.h>
using namespace std; 
int main()
{
	char arr[100][100] = { 0 };
	int n = 0;
	cin >> n;
	//�����ϰ벿��
	for (int i = 0; i <= n; i++)
	{
		int j = 0;
		//����ÿ��ǰ�Ŀո�
		for (j = 0; j < 2 * n - 2 * i; j++)
		{
			arr[i][j] = ' ';
		}
		//����ÿ��ǰ�벿�ֵ���������
		for (int k = 0; k <= i; k++)
		{
			arr[i][j] = '0' + k;
			arr[i][j + 1] = ' ';
			j = j + 2;
		}
		//����ÿ�к�벿�ֵݼ�������
		for (int k = i - 1; k >= 0; k--)
		{
			arr[i][j] = '0' + k;
			arr[i][j + 1] = ' ';
			j = j + 2;
		}
	};
	//�����°벿��
	for (int i = n + 1; i <= 2 * n; i++)
	{
		int j = 0;
		//����ÿ��ǰ�Ŀո�
		for (j = 0; j < 2 * i - 2 * n; j++)
		{
			arr[i][j] = ' ';
		}
		//����ÿ��ǰ�벿�ֵ���������
		for (int k = 0; k <= 2 * n - i; k++)
		{
			arr[i][j] = '0' + k;
			arr[i][j + 1] = ' ';
			j = j + 2;
		}
		//����ÿ�к�벿�ֵݼ�������
		for (int k = 2 * n - i - 1; k >= 0; k--)
		{
			arr[i][j] = '0' + k;
			arr[i][j + 1] = ' ';
			j = j + 2;
		}
	}
	for (int i = 0; i < 2 * n + 1; i++)
	{
		cout << arr[i] << endl;
	}
}
