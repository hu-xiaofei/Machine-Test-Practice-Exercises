#define _CRT_SECURE_NO_WARNINGS

////一端进，两端出
//#include<iostream>
//#include<vector>
//#include <deque>
//#include<list>
//using namespace std;
//
////判断删除队列是否合法的函数**（比较难啊，不会）
////bool isValidDeleteSq(vector<int>& ori, vector<int>& del)
////{
////	deque<int>dq;//模拟双端队列
////	int oriindex = 0;//插入序列的指针
////	int delindex = 0;//删除序列的指针
////
////	//遍历删除序列
////	while (delindex < del.size())
////	{
////		// 如果队列不为空，且删除序列的当前元素等于队列的前端元素
////		if (!dq.empty() && dq.front() == del[delindex])
////		{
////			dq.pop_front();//从前端删除
////			delindex++;
////		}
////		// 如果队列不为空，且删除序列的当前元素等于队列的后端元素
////		else if (!dq.empty() && dq.back() == del[delindex]) {
////			dq.pop_back(); // 从后端删除
////			delindex++;
////		}
////		// 如果插入序列还有元素未插入
////		else if (oriindex < ori.size()) {
////			dq.push_front(ori[oriindex]); // 插入到前端
////			oriindex++;
////		}
////		// 如果无法匹配删除序列的当前元素
////		else
////			return false;
////	}
////	return true;
////}
//
////尝试用list，而不是用deque
//bool isValidDeleteSq(vector<int>& ori, vector<int>& del)
//{
//	list<int>list;//模拟双端队列
//	int oriindex = 0;//插入序列的指针
//	int delindex = 0;//删除序列的指针
//
//	//遍历删除序列
//	while (delindex < del.size())
//	{
//		// 如果队列不为空，且删除序列的当前元素等于队列的前端元素
//		if (!list.empty() && list.front() == del[delindex])
//		{
//			list.pop_front();//从前端删除
//			delindex++;
//		}
//		// 如果队列不为空，且删除序列的当前元素等于队列的后端元素
//		else if (!list.empty() && list.back() == del[delindex]) {
//			list.pop_back(); // 从后端删除
//			delindex++;
//		}
//		// 如果插入序列还有元素未插入
//		else if (oriindex < ori.size()) {
//			list.push_front(ori[oriindex]); // 插入到前端
//			oriindex++;
//		}
//		// 如果无法匹配删除序列的当前元素
//		else
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int n = 0, k = 0;
//
//	//读入N和K
//	cin >> n >> k;
//
//	//读入插入序列，存在ori中
//	vector<int> ori;
//	for (int i = 0; i < n; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		ori.push_back(temp);
//	}
//
//	//存储每个删除队列是否合法，true合法，false不合法
//	vector<bool>isValid;
//
//	//每一次输入删除队列
//	for (int i = 0; i < k; i++)
//	{
//		vector<int> del;
//
//		//存储删除队列
//		for (int j = 0; j < n; j++)
//		{
//			int temp = 0;
//			cin >> temp;
//			del.push_back(temp);
//		}
//
//		//调用函数判断是否合法
//		isValid.push_back(isValidDeleteSq(ori, del));
//	}
//
//	//输出每一个判断
//	for (int i = 0; i < k; i++)
//	{
//		if (isValid[i] == true)
//			cout << "yes" << endl;
//		else
//			cout << "no" << endl;
//	}
//}


////链表合并
//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
//
//int main()
//{
//	int s1 = 0, s2 = 0;
//	list<int>list1, list2, list3;
//
//	//获取第一个链表list1
//	cin >> s1;
//	for (int i = 0; i < s1; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		list1.push_back(temp);
//	}
//
//	//获取第二个链表list2
//	cin >> s2;
//	for (int i = 0; i < s2; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		list2.push_back(temp);
//	}
//
//	while (true)
//	{
//		//比较front的大小然后赋值给list3
//		if (list1.front() <= list2.front())
//		{
//			int temp = list1.front();
//			list1.pop_front();
//			list3.push_back(temp);
//		}
//		if (list2.front() < list1.front())
//		{
//			int temp = list2.front();
//			list2.pop_front();
//			list3.push_back(temp);
//		}
//
//		if (list1.empty())
//		{
//			//把另一个链表剩下的接到list3
//			while(!list2.empty())
//			{
//				int temp = list2.front();
//				list2.pop_front();
//				list3.push_back(temp);
//			}
//			break;
//		}
//		if (list2.empty())
//		{
//			//把另一个链表剩下的接到list3
//			while (!list1.empty())
//			{
//				int temp = list1.front();
//				list1.pop_front();
//				list3.push_back(temp);
//			}
//			break;
//		}
//	}
//	//输出list3
//	while (!list3.empty())
//	{
//		cout << list3.front() << " ";
//		list3.pop_front();
//	}
//
//}


////空闲块
//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
//
//void allocating(list<int>& address, list<int>& space, int request)
//{
//	//指向链表的指针
//	list<int>::iterator it1 = address.begin();
//	list<int>::iterator it2 = space.begin();
//	int aimspace = 0;
//	while (true)
//	{
//		if (*it2 < request)
//		{
//			it1++;
//			it2++;
//		}
//		else if (*it2 == request)
//		{
//			break;
//		}
//		else if (*it2 > request)
//		{
//			if (*it2 < aimspace)
//				aimspace = *it 2;
//		}
//
//		//暂时写不出来
//	}
//}
//
//int main()
//{
//	int n = 0;
//	//空闲块个数
//	cin >> n;
//
//	//创建两个链表，配合使用，来存储空闲块
//	list<int>address, space;
//	for (int i = 0; i < n; i++)
//	{
//		int temp1, temp2;
//		cin >> temp1 >> temp2;
//		address.push_back(temp1);
//		space.push_back(temp2);
//	}
//	while (true)
//	{
//		//请求的空间大小
//		int request = 0;
//		cin >> request;
//		//结束条件
//		if (request == -1)
//			break;
//
//		//分配存储空间
//		allocating(address, space, request);
//	}
//
//	//输出当前空闲空间链表状态
//	while (!address.empty())
//	{
//		//front() 直接返回链表第一个元素的引用，方便直接访问和修改元素的值。
//		//begin() 返回指向第一个元素的迭代器，迭代器可以用于遍历容器中的元素，提供了更灵活的访问方式。
//		cout << address.front() << " " << space.front() << endl;
//		address.pop_front();
//		space.pop_front();
//	}
//}


//坠落的蚂蚁（北京大学复试上机题）
// 暂时放弃了，学会sort再写
//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	vector<int>ant(n);
//	vector<int>speed(n);
//
//	//获取每只蚂蚁的信息
//	for(int i = 0; i < n; i++)
//	{
//		cin >> ant[i] >> speed[i];
//	}
//
//	//遍历蚂蚁找到a（速度为零的）
//	int a = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (speed[i] == 0)
//		{
//			a = i;
//			break;
//		}
//	}
//
//	int time = 0;
//
//	//错了，换思路重写（悲
//	
//	//while (true)
//	//{
//	//	//每只蚂蚁同时开始行动，产生位移，ant[]改变
//	//	for (int i = 0; i < n; i++)
//	//	{
//	//		if (speed[i] == 1)
//	//			ant[i]++;
//	//		if (speed[i] == -1)
//	//			ant[i]--;
//	//		//如果ant[i]为0或者100则其掉下去了，speed[i]==2
//	//		if (ant[i] == 0 || ant[i] == 100)
//	//			speed[i] = 2;
//	//	}
//	//	
//	//	//不能简单的想：蚂蚁只在整刻度点碰撞，也有可能不在整刻度点碰撞
//	//	
//	//	//检查有没有碰头的蚂蚁，对其速度进行调整,
//	//	//for (int i = 1; i < 100; i++)
//	//	//{
//	//	//	int count1 = -1, count2 = -1, count3 = -1;
//	//	//	int j = 0;
//	//	//	//找到哪几个蚂蚁是碰头了
//	//	//	for (int j = 0; j < n; j++)
//	//	//	{
//	//	//		if (ant[j] == i)
//	//	//		{
//	//	//			count1 = j;
//	//	//			j++;
//	//	//			break;
//	//	//		}
//	//	//		
//	//	//	}
//	//	//	for ( j ; j < n; j++)
//	//	//	{
//	//	//		if (ant[j] == i)
//	//	//		{
//	//	//			count2 = j;
//	//	//			j++;
//	//	//			break;
//	//	//		}
//	//	//		
//	//	//	}
//	//	//	for (j; j < n; j++)
//	//	//	{
//	//	//		if (ant[j] == i)
//	//	//		{
//	//	//			count3 = j;
//	//	//			j++;
//	//	//			break;
//	//	//		}
//	//	//		
//	//	//	}
//	//	//	//碰头的蚂蚁分情况讨论
//	//	//	//两只蚂蚁碰头
//	//	//	if (count2!=-1&&count3 ==-1)
//	//	//	{
//	//	//		int temp = 0;
//	//	//		temp = speed[count1];
//	//	//		speed[count1] = speed[count2];
//	//	//		speed[count2] = temp;
//	//	//	}
//	//	//	if (count3 != -1)
//	//	//	{
//	//	//		speed[count1] = -speed[count1];
//	//	//		speed[count2] = -speed[count2];
//	//	//		speed[count3] = -speed[count3];
//	//	//	}
//	//	//}
//	//	time++;
//	//	//a蚂蚁掉下去了，结束
//	//	if (speed[a] == 2 )
//	//	{
//	//		cout << time << endl;
//	//		break;
//	//	}
//	//	//要不都掉下去了，要不都停止了，也结束
//	//	int isStable = 1;
//	//	for (int i = 0; i < n; i++)
//	//	{
//	//		if (speed[i] == 1 || speed[i] == -1)
//	//		{
//	//			isStable = 0;
//	//			break;
//	//		}
//	//	}
//	//	if (isStable == 1)
//	//	{
//	//		cout << "Cannot fall!" << endl;
//	//		break;
//	//	}
//	//}
//
//	// 题目提示
//	
//	// 所以的蚂蚁分为两类 A和普通蚂蚁
//	// 1 两只普通蚂蚁发生碰撞时，可以等价双方直接互相穿越。
//	//   因此，A左边向左走的普通蚂蚁(LL)和A右边向右走(RR)的普通蚂蚁对A不产生影响。
//	//   A最终的方向取决于左边向右转(LR)和A右边向左走(RL)的相对数量
//	// 2 如果只有一个普通蚂蚁和A，普通蚂蚁碰撞了静止的A导致A下落
//	//   那么A的下落时间等于不发生碰撞情况下普通蚂蚁的原本下落时间
//	// 记LR的数量为LRN，RL的数量为RLN
//	// 如果 LRN == RLN 则 A不会掉下
//	// 如果 LRN > RLN 则 第RLN+1个LR蚂蚁会碰撞A导致A下落，其余LR蚂蚁不和A碰撞
//	// 如果 LRN < RLN 则 第LRN+1个RL蚂蚁会碰撞A导致A下落，其余RL蚂蚁不和A碰撞
//
//	int LRN = 0;
//	int RLN = 0;
//
//	for (int i = 0; i < a; i++)
//	{
//		if (speed[i] == 1)
//			LRN++;
//	}
//	for (int i = a + 1; i < n + 1)
//	{
//		if (speed[i] == -1)
//			RLN++;
//	}
//
//	if (LRN == RLN)
//		cout << "Cannot fall!" << endl;
//	if (LRN > RLN)
//	{
//		int count = LRN-RLN;
//		for (int i = 0; i < a; i++)
//		{
//
//		}
//		time = (100 - ant[a])
//	}
//	if (RLN > LRN)
//	{
//		time = ant[a]
//	}
//
//	
//	
//
//
//}