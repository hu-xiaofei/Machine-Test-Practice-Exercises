#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>//��C++�У�����ʹ��#include <cstdio>���#include <stdio.h>(c��׼��)
//#include<vector>
//using namespace std;
//vector�÷�
//struct MyType
//{
//	int val1;
//	double val2;
//};
//int main()
//{
//	//��ʼ��������
//	vector<int> vec1;//һ��ʼ�ǿյ�
//	vector<int> vec_1(100);//һ��ʼ����100��Ԫ��
//	vector<double> vec2;
//	vector<MyType>vec3;
//	vector<vector<int>>vec4;  //��̬����Ķ�̬���飬��ά����
//	vector<int> arr[10]; //�����Ƽ��÷�����̬����ľ�̬���飬ͼ�㷨���ڽӱ�
//
//	//push_back ����̬�����β������
//	int a;
//	while (cin >> a)
//	{
//		vec1.push_back(a);
//	}
//
//	//����
//	vector<int> vec_2 = { 2,3,1,45,2 };
//	int size = vec1.size();
//	for (int i = 0; i < size; i++)
//	{
//		cout << vec_2[i] << endl;
//	}
//
//	//������iterator,�������ɶ�̬�����ָ��
//	vector<int>::iterator it;
//	/*for (it = vec_2.begin(); it != vec_2.end(); ++it)
//	{
//		printf("*it=%d\n", *it);
//	}*/
//
//	//�������
//	it = vec_2.begin();
//	//���������Ի�ȡԪ�ص�λ��
//	vec_1.insert(it, 2);  //����Ԫ�� 2 ���뵽 vec_1 �����е�λ�ã��ɵ����� it ָ��
//	//insert��ı䶯̬����Ľṹ��������ɺ�it��ָ��������
//	it = vec_2.begin();//��it���¸�ֵ
//	it = it + 3;//it+3�൱��3��it++
//	vec_2.insert(it, 6);//������ʹ�ã�Ч�ʵ�
//
//	//vector��ɾ��
//	vec_1.clear();//�����������
//	vec_1.pop_back();//�������һ������
//	vec_1.erase(it);//ɾ��it��ָ��λ��
//}

////list���÷����ײ�ԭ����˫���������Ե����������ã�
//#include<list>
//int main()
//{
//	list<int> ls1 = { 1,2,3,4,5 };
//	list<int>::iterator it = ls1.begin();
//	//����֧��������ʣ�����it=it+2
//	it++;
//	ls1.erase(it);//list��ʹ��erase��insert��Ч�ʸ���һ��
//}


//������ӯ�� ���廪��ѧ�����ϻ��⣩
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int i, j;
//	vector<int>wanshu;
//	vector<int>yinshu;
//	for (i = 2; i < 61; i++)
//	{
//		vector<int> yinzi;
//		for(j=1;j<i;j++)
//		{
//			if (i % j == 0)
//				yinzi.push_back(j);
//		}
//		int sum = 0, k = 0;
//		int size = yinzi.size();
//		for (int k = 0; k < size; k++)
//		{
//			sum += yinzi[k];
//		}
//		if (sum == i)//��û��Ǳ����ź�ߣ��������׳���
//			wanshu.push_back(i);
//		if (sum > i)
//			yinshu.push_back(i);
//	}
//	int wanshunum = wanshu.size(), yinshunum = yinshu.size();
//	cout << "E:";
//	for(int k = 0; k < wanshunum;k++)
//	{
//		cout << " " << wanshu[k];
//	}
//	cout << endl<< "G:";
//	for (int k = 0; k < yinshunum; k++)
//	{
//		cout << " "<< yinshu[k] ;
//	}
//}


////ʣ�µ��� ���廪��ѧ�����ϻ��⣩
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int L = 0, M = 0;
//	while (cin >> L >> M)
//	{
//		vector<int>tree;
//		for (int i = 0; i <= L; i++)
//		{
//			tree.push_back(1);
//		}
//		for(int i=0;i<M;i++)
//		{
//			int head = 0, rear = 0;
//			cin >> head >> rear;
//			for (head; head <= rear; head++)
//			{
//				tree[head] = 0;
//			}
//		}
//		int size = tree.size();
//		int count = 0;
//		for (int i = 0; i < size; i++)
//		{
//			if (1 == tree[i])
//				count++;
//		}
//		cout << count << endl;
//	}
//}


//�ǹ�������Ϸ��������ѧ�����ϻ��⣩
#include<iostream>
#include<vector>
using namespace std;

//int main()
//{
//	int n = 0;
//	while(cin >> n)
//	{
//		if (n == 0)
//			break;
//		vector<int>kid;
//		for (int i = 0; i < n; i++)
//		{
//			int temp = 0;
//			cin >> temp;
//			kid.push_back(temp);
//		}
//		int count = 0;
//		//��ʼ�����ǹ�
//		while (true)
//		{
//			vector<int>temp(n);
//			for (int i = 0; i < n; i++)
//			{
//				//��ͬʱ���ݣ�����һ��������
//				temp[i] = kid[i] / 2;
//			}
//			for (int i = 0; i < n; i++)
//			{
//				kid[(i + 1) % n] += temp[i];
//				//��������С����һ����
//				if ((kid[(i + 1) % n] % 2) == 1)
//					kid[(i + 1) % n] += 1;
//				////���ݸ��ұߵ�С������˳ʱ����ת
//				//kid[(i - 1) % n] += temp[i];
//				////��������С����һ����
//				//if ((kid[(i - 1) % n] % 2) == 1)
//				//	kid[(i - 1) % n] += 1;
//			}
//			count++;
//			int isequal = 1;
//			//һ�ֽ����ˣ�������ҵ����ǲ���һ����
//			for (int i = 0; i < n; i++) 
//			{
//				if (kid[i] != kid[(i + 1) % n])
//				{
//					isequal = 0;
//					break;
//				}
//			}
//			if (isequal == 1)
//				break;//��һ���࣬����
//		}
//		cout << count << " " << kid[1] << endl;
//	}
//}
//
//�����ˣ������(�s����㣩�s�� �ߩ���

//�ڶ��γ���
//int main()
//{
//
//}
