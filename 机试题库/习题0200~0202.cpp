#define _CRT_SECURE_NO_WARNINGS

////���ڲ�ֵ���Ϻ���ͨ��ѧ�����ϻ��⣩
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
//	int first = 0, last = 0;
//	while (cin >> first >> last)
//	{
//		if (first > last)
//		{
//			int temp = first;
//			first = last;
//			last = temp;
//		}
//		int year = 0, month = 0, day = 0;
//		int year2 = 0, month2 = 0, day2 = 0;
//		year = first / 10000;
//		month = (first % 10000) / 100;
//		day = first % 100;//����ת��д���ˣ����˰�Сʱbug��man��
//		year2 = last / 10000;
//		month2 = (last % 10000) / 100;
//		day2 = last % 100;
//		int count = 1;
//		while (true)
//		{
//			if (year == year2 && month == month2 && day == day2)
//				break;
//			NextDay(year, month, day);
//			count++;
//		}
//		cout << count << endl;
//	}
//}
//
//
////��ӡ���� �����пƼ���ѧ�����ϻ��⣩
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
//	int y = 0, d = 0;
//	while (cin >> y >> d)
//	{
//		int month = 1, day = 1;
//		for (int i = 1; i < d; i++)
//		{
//			NextDay(y, month, day);
//		}
//		printf("%04d-%02d-%02d\n", y, month, day);
//	}
//}


////���ڣ����ݴ�ѧ�����ϻ��⣩
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
//const char* week(int count)
//{
//	int which = 4;
//	for (int i = 0; i < count; i++)
//	{
//		which++;
//		if (which > 7)
//			which = 1;
//	}
//	if (which == 1)
//		return "Monday";
//	if (which == 2)
//		return "Tuesday";
//	if (which == 3)
//		return "Wednesday";
//	if (which == 4)
//		return "Thursday";
//	if (which == 5)
//		return "Friday";
//	if (which == 6)
//		return "Saturday";
//	else
//		return "Sunday";
//}
//int main()
//{
//	int year = 2012, curmonth = 4, curday = 12;
//	int month = 1, day = 1,count=0;
//	cin >> month >> day;
//	while (true)
//	{
//		if (curmonth == month && curday == day)
//		{
//			cout << week(count) << endl;
//			break;
//		}
//		NextDay(year, curmonth, curday);
//		count++;
//	}
//}