#define _CRT_SECURE_NO_WARNINGS

////һ�˽������˳�
//#include<iostream>
//#include<vector>
//#include <deque>
//#include<list>
//using namespace std;
//
////�ж�ɾ�������Ƿ�Ϸ��ĺ���**���Ƚ��Ѱ������ᣩ
////bool isValidDeleteSq(vector<int>& ori, vector<int>& del)
////{
////	deque<int>dq;//ģ��˫�˶���
////	int oriindex = 0;//�������е�ָ��
////	int delindex = 0;//ɾ�����е�ָ��
////
////	//����ɾ������
////	while (delindex < del.size())
////	{
////		// ������в�Ϊ�գ���ɾ�����еĵ�ǰԪ�ص��ڶ��е�ǰ��Ԫ��
////		if (!dq.empty() && dq.front() == del[delindex])
////		{
////			dq.pop_front();//��ǰ��ɾ��
////			delindex++;
////		}
////		// ������в�Ϊ�գ���ɾ�����еĵ�ǰԪ�ص��ڶ��еĺ��Ԫ��
////		else if (!dq.empty() && dq.back() == del[delindex]) {
////			dq.pop_back(); // �Ӻ��ɾ��
////			delindex++;
////		}
////		// ����������л���Ԫ��δ����
////		else if (oriindex < ori.size()) {
////			dq.push_front(ori[oriindex]); // ���뵽ǰ��
////			oriindex++;
////		}
////		// ����޷�ƥ��ɾ�����еĵ�ǰԪ��
////		else
////			return false;
////	}
////	return true;
////}
//
////������list����������deque
//bool isValidDeleteSq(vector<int>& ori, vector<int>& del)
//{
//	list<int>list;//ģ��˫�˶���
//	int oriindex = 0;//�������е�ָ��
//	int delindex = 0;//ɾ�����е�ָ��
//
//	//����ɾ������
//	while (delindex < del.size())
//	{
//		// ������в�Ϊ�գ���ɾ�����еĵ�ǰԪ�ص��ڶ��е�ǰ��Ԫ��
//		if (!list.empty() && list.front() == del[delindex])
//		{
//			list.pop_front();//��ǰ��ɾ��
//			delindex++;
//		}
//		// ������в�Ϊ�գ���ɾ�����еĵ�ǰԪ�ص��ڶ��еĺ��Ԫ��
//		else if (!list.empty() && list.back() == del[delindex]) {
//			list.pop_back(); // �Ӻ��ɾ��
//			delindex++;
//		}
//		// ����������л���Ԫ��δ����
//		else if (oriindex < ori.size()) {
//			list.push_front(ori[oriindex]); // ���뵽ǰ��
//			oriindex++;
//		}
//		// ����޷�ƥ��ɾ�����еĵ�ǰԪ��
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
//	//����N��K
//	cin >> n >> k;
//
//	//����������У�����ori��
//	vector<int> ori;
//	for (int i = 0; i < n; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		ori.push_back(temp);
//	}
//
//	//�洢ÿ��ɾ�������Ƿ�Ϸ���true�Ϸ���false���Ϸ�
//	vector<bool>isValid;
//
//	//ÿһ������ɾ������
//	for (int i = 0; i < k; i++)
//	{
//		vector<int> del;
//
//		//�洢ɾ������
//		for (int j = 0; j < n; j++)
//		{
//			int temp = 0;
//			cin >> temp;
//			del.push_back(temp);
//		}
//
//		//���ú����ж��Ƿ�Ϸ�
//		isValid.push_back(isValidDeleteSq(ori, del));
//	}
//
//	//���ÿһ���ж�
//	for (int i = 0; i < k; i++)
//	{
//		if (isValid[i] == true)
//			cout << "yes" << endl;
//		else
//			cout << "no" << endl;
//	}
//}


////����ϲ�
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
//	//��ȡ��һ������list1
//	cin >> s1;
//	for (int i = 0; i < s1; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		list1.push_back(temp);
//	}
//
//	//��ȡ�ڶ�������list2
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
//		//�Ƚ�front�Ĵ�СȻ��ֵ��list3
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
//			//����һ������ʣ�µĽӵ�list3
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
//			//����һ������ʣ�µĽӵ�list3
//			while (!list1.empty())
//			{
//				int temp = list1.front();
//				list1.pop_front();
//				list3.push_back(temp);
//			}
//			break;
//		}
//	}
//	//���list3
//	while (!list3.empty())
//	{
//		cout << list3.front() << " ";
//		list3.pop_front();
//	}
//
//}


////���п�
//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
//
//void allocating(list<int>& address, list<int>& space, int request)
//{
//	//ָ�������ָ��
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
//		//��ʱд������
//	}
//}
//
//int main()
//{
//	int n = 0;
//	//���п����
//	cin >> n;
//
//	//���������������ʹ�ã����洢���п�
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
//		//����Ŀռ��С
//		int request = 0;
//		cin >> request;
//		//��������
//		if (request == -1)
//			break;
//
//		//����洢�ռ�
//		allocating(address, space, request);
//	}
//
//	//�����ǰ���пռ�����״̬
//	while (!address.empty())
//	{
//		//front() ֱ�ӷ��������һ��Ԫ�ص����ã�����ֱ�ӷ��ʺ��޸�Ԫ�ص�ֵ��
//		//begin() ����ָ���һ��Ԫ�صĵ��������������������ڱ��������е�Ԫ�أ��ṩ�˸����ķ��ʷ�ʽ��
//		cout << address.front() << " " << space.front() << endl;
//		address.pop_front();
//		space.pop_front();
//	}
//}


//׹������ϣ�������ѧ�����ϻ��⣩
// ��ʱ�����ˣ�ѧ��sort��д
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
//	//��ȡÿֻ���ϵ���Ϣ
//	for(int i = 0; i < n; i++)
//	{
//		cin >> ant[i] >> speed[i];
//	}
//
//	//���������ҵ�a���ٶ�Ϊ��ģ�
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
//	//���ˣ���˼·��д����
//	
//	//while (true)
//	//{
//	//	//ÿֻ����ͬʱ��ʼ�ж�������λ�ƣ�ant[]�ı�
//	//	for (int i = 0; i < n; i++)
//	//	{
//	//		if (speed[i] == 1)
//	//			ant[i]++;
//	//		if (speed[i] == -1)
//	//			ant[i]--;
//	//		//���ant[i]Ϊ0����100�������ȥ�ˣ�speed[i]==2
//	//		if (ant[i] == 0 || ant[i] == 100)
//	//			speed[i] = 2;
//	//	}
//	//	
//	//	//���ܼ򵥵��룺����ֻ�����̶ȵ���ײ��Ҳ�п��ܲ������̶ȵ���ײ
//	//	
//	//	//�����û����ͷ�����ϣ������ٶȽ��е���,
//	//	//for (int i = 1; i < 100; i++)
//	//	//{
//	//	//	int count1 = -1, count2 = -1, count3 = -1;
//	//	//	int j = 0;
//	//	//	//�ҵ��ļ�����������ͷ��
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
//	//	//	//��ͷ�����Ϸ��������
//	//	//	//��ֻ������ͷ
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
//	//	//a���ϵ���ȥ�ˣ�����
//	//	if (speed[a] == 2 )
//	//	{
//	//		cout << time << endl;
//	//		break;
//	//	}
//	//	//Ҫ��������ȥ�ˣ�Ҫ����ֹͣ�ˣ�Ҳ����
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
//	// ��Ŀ��ʾ
//	
//	// ���Ե����Ϸ�Ϊ���� A����ͨ����
//	// 1 ��ֻ��ͨ���Ϸ�����ײʱ�����Եȼ�˫��ֱ�ӻ��ഩԽ��
//	//   ��ˣ�A��������ߵ���ͨ����(LL)��A�ұ�������(RR)����ͨ���϶�A������Ӱ�졣
//	//   A���յķ���ȡ�����������ת(LR)��A�ұ�������(RL)���������
//	// 2 ���ֻ��һ����ͨ���Ϻ�A����ͨ������ײ�˾�ֹ��A����A����
//	//   ��ôA������ʱ����ڲ�������ײ�������ͨ���ϵ�ԭ������ʱ��
//	// ��LR������ΪLRN��RL������ΪRLN
//	// ��� LRN == RLN �� A�������
//	// ��� LRN > RLN �� ��RLN+1��LR���ϻ���ײA����A���䣬����LR���ϲ���A��ײ
//	// ��� LRN < RLN �� ��LRN+1��RL���ϻ���ײA����A���䣬����RL���ϲ���A��ײ
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