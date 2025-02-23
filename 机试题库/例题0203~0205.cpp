#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>//在C++中，建议使用#include <cstdio>替代#include <stdio.h>(c标准库)
//#include<vector>
//using namespace std;
//vector用法
//struct MyType
//{
//	int val1;
//	double val2;
//};
//int main()
//{
//	//初始化，构造
//	vector<int> vec1;//一开始是空的
//	vector<int> vec_1(100);//一开始就有100个元素
//	vector<double> vec2;
//	vector<MyType>vec3;
//	vector<vector<int>>vec4;  //动态数组的动态数组，二维数组
//	vector<int> arr[10]; //机试推荐用法，动态数组的静态数组，图算法，邻接表
//
//	//push_back 往动态数组的尾部插入
//	int a;
//	while (cin >> a)
//	{
//		vec1.push_back(a);
//	}
//
//	//查找
//	vector<int> vec_2 = { 2,3,1,45,2 };
//	int size = vec1.size();
//	for (int i = 0; i < size; i++)
//	{
//		cout << vec_2[i] << endl;
//	}
//
//	//迭代器iterator,可以理解成动态数组的指针
//	vector<int>::iterator it;
//	/*for (it = vec_2.begin(); it != vec_2.end(); ++it)
//	{
//		printf("*it=%d\n", *it);
//	}*/
//
//	//插入操作
//	it = vec_2.begin();
//	//迭代器可以获取元素的位置
//	vec_1.insert(it, 2);  //它将元素 2 插入到 vec_1 向量中的位置，由迭代器 it 指定
//	//insert会改变动态数组的结构，插入完成后it的指向无意义
//	it = vec_2.begin();//将it重新赋值
//	it = it + 3;//it+3相当于3次it++
//	vec_2.insert(it, 6);//尽量少使用，效率低
//
//	//vector的删除
//	vec_1.clear();//清空所有数据
//	vec_1.pop_back();//弹出最后一个数据
//	vec_1.erase(it);//删除it所指的位置
//}

////list的用法（底层原理是双向链表，可以当成链表来用）
//#include<list>
//int main()
//{
//	list<int> ls1 = { 1,2,3,4,5 };
//	list<int>::iterator it = ls1.begin();
//	//链表不支持随机访问，错误：it=it+2
//	it++;
//	ls1.erase(it);//list中使用erase和insert的效率更高一点
//}


//完数与盈数 （清华大学复试上机题）
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
//		if (sum == i)//最好还是变量放后边，真是容易出错
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


////剩下的树 （清华大学复试上机题）
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


//糖果分享游戏（北京大学复试上机题）
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
//		//开始传递糖果
//		while (true)
//		{
//			vector<int>temp(n);
//			for (int i = 0; i < n; i++)
//			{
//				//是同时传递，不是一个个传递
//				temp[i] = kid[i] / 2;
//			}
//			for (int i = 0; i < n; i++)
//			{
//				kid[(i + 1) % n] += temp[i];
//				//给奇数的小孩补一颗糖
//				if ((kid[(i + 1) % n] % 2) == 1)
//					kid[(i + 1) % n] += 1;
//				////传递给右边的小孩，是顺时针旋转
//				//kid[(i - 1) % n] += temp[i];
//				////给奇数的小孩补一颗糖
//				//if ((kid[(i - 1) % n] % 2) == 1)
//				//	kid[(i - 1) % n] += 1;
//			}
//			count++;
//			int isequal = 1;
//			//一轮结束了，看看大家的糖是不是一样多
//			for (int i = 0; i < n; i++) 
//			{
//				if (kid[i] != kid[(i + 1) % n])
//				{
//					isequal = 0;
//					break;
//				}
//			}
//			if (isequal == 1)
//				break;//糖一样多，结束
//		}
//		cout << count << " " << kid[1] << endl;
//	}
//}
//
//无语了，毁灭吧(╯°□°）╯︵ ┻━┻

//第二次尝试
//int main()
//{
//
//}
