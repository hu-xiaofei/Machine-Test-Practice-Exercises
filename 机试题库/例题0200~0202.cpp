#define _CRT_SECURE_NO_WARNINGS
//����������
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//void NextDay(int &year, int &month, int &day)
////&��һЩ�÷���ȡ��ַ��&x ������������int& ref = x �������ô��ݣ�void func(int& x) �ȵ�
//{
//	//�����·ݺ������Ĺ�ϵ
//	int dayOfMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int isLeap; //�Ƿ�������
//	isLeap = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
//	if (isLeap)
//		dayOfMonth[2] = 29;
//	else
//		dayOfMonth[2] = 28;
//	day++;
//	if (day > dayOfMonth[month])
//	{
//		day = 1;
//		month++;
//	}
//	if (month > 12)
//	{
//		month = 1;
//		year++;
//	}
//}

////����ĵڼ��죿 ���廪��ѧ�����ϻ��⣩
//#include<iostream>
//#include<string.h>
//using namespace std;
////��һ��һ����������NextDay������һֱ���������ڣ����ܹ������˼���
//void NextDay(int& year, int& month, int& day, int&count)
////&��һЩ�÷���ȡ��ַ��&x ������������int& ref = x �������ô��ݣ�void func(int& x) �ȵ�
//{
//	//�����·ݺ������Ĺ�ϵ
//	int dayOfMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int isLeap; //�Ƿ�������
//	isLeap = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
//	if (isLeap)
//		dayOfMonth[2] = 29;
//	else
//		dayOfMonth[2] = 28;
//	day++;
//	if (day > dayOfMonth[month])
//	{
//		day = 1;
//		month++;
//	}
//	if (month > 12)
//	{
//		month = 1;
//		year++;
//	}
//	count++;
//}
//int main()
//{
//	int year = 0, month = 0, day = 0;
//	while(cin >> year >> month >> day)
//	{	
//		int fmonth = 1, fday = 1,count=1;
//		while (true)
//		{
//			NextDay(year, fmonth, fday, count);
//			if (fmonth == month && fday == day)
//				break;
//		}
//		cout << count << endl;
//	}
//}


//��ӡ���� �����пƼ���ѧ�����ϻ��⣩
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//void NextDay(int &year, int &month, int &day)
//{
//	//�����·ݺ������Ĺ�ϵ
//	int dayOfMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int isLeap; //�Ƿ�������
//	isLeap = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
//	if (isLeap)
//		dayOfMonth[2] = 29;
//	else
//		dayOfMonth[2] = 28;
//	day++;
//	if (day > dayOfMonth[month])
//	{
//		day = 1;
//		month++;
//	}
//	if (month > 12)
//	{
//		month = 1;
//		year++;
//	}
//}
//int main()
//{
//	int year = 0, n = 0;
//	while (cin >> year >> n)
//	{
//		int month = 1, day = 1;
//		for (int i = 1; i < n; i++)
//		{
//			NextDay(year, month, day);
//		}
//		//cout << year;
//		//if (month < 10)
//		//	cout << "-" << 0 << month;
//		//else
//		//	cout << "-" << month;
//		//if (day < 10)
//		//	cout << "-" << 0 << day << endl;
//		//else
//		//	cout << "-" << day << endl;
//		//����ʹ��printf��ʵ��
//		//ex��printf %02d  0�������0 2������С���2
//		printf("%04d-%02d-%02d\n", year, month, day);
//	}
//}


////�����ۼ� ����������ѧ�����ϻ��⣩
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//void NextDay(int& year, int& month, int& day)
//{
//	//�����·ݺ������Ĺ�ϵ
//	int dayOfMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int isLeap; //�Ƿ�������
//	isLeap = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
//	if (isLeap)
//		dayOfMonth[2] = 29;
//	else
//		dayOfMonth[2] = 28;
//	day++;
//	if (day > dayOfMonth[month])
//	{
//		day = 1;
//		month++;
//	}
//	if (month > 12)
//	{
//		month = 1;
//		year++;
//	}
//}
//int main()
//{
//	int m = 0;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int year = 0, month = 0, day = 0, plus = 0;
//		cin >> year >> month >> day >> plus;
//		for (int j = 0; j < plus; j++)
//		{
//			NextDay(year, month, day);
//		}
//		cout << year;
//		if (month < 10)
//			cout << "-" << 0 << month;
//		else
//			cout << "-" << month;
//		if (day < 10)
//			cout << "-" << 0 << day << endl;
//		else
//			cout << "-" << day << endl;
//	}
//}