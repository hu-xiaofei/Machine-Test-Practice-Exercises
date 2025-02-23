#define _CRT_SECURE_NO_WARNINGS

//找x （哈尔滨工业大学复试上机题）
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n = 0;
//	while(cin>>n)
//	{
//		vector<int>arr;
//		for (int i = 0; i < n; i++)
//		{
//			int temp = 0;
//			cin >> temp;
//			arr.push_back(temp);
//		}
//		int x = 0;
//		cin >> x;
//		/*int count = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (arr[i] == x)
//			{
//				cout << i << endl;
//				count = 1;
//			}
//		}
//		if (count == 0)
//			cout << -1 << endl;*/
//
//		//find函数的做法
//		//find(begIt,endIt,x);
//		vector<int>::iterator it;
//		it = find(arr.begin(), arr.end(), x);
//		if (it == arr.end())
//		{
//			cout << -1 << endl;
//		}
//		else
//		{
//			//it+1偏移it-arr.begin()
//			//it - arr.begin() 本质上是计算两个迭代器之间的偏移量
//			cout << it - arr.begin() << endl;
//		}
//	}
//	
//}


//二分查找（只能在有序的数据结构中使用）
//查找 （北京邮电大学复试上机题）
////法一：顺序查找法
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n = 0, m = 0;
//	cin >> n;
//	vector<int>a, b;
//	for (int i = 0; i < n; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		a.push_back(temp);
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		b.push_back(temp);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		vector<int>::iterator it;
//		it=find(a.begin(), a.end(), b[i]);
//		if (it == a.end())
//			cout << "NO" << endl;
//		else
//			cout << "YES" << endl;
//	}
//}

//法二：二分查找
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n = 0, m = 0;
//	cin >> n;
//	vector<int>a;
//	for (int i = 0; i < n; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		a.push_back(temp);
//	}
//	sort(a.begin(), a.end());
//	cin >> m;
//	int b = 0;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> b;
//		int left = 0;
//		int right = n - 1;
//		while (left<=right)
//		{
//			int mid = (left + right) / 2;
//			if (b == a[mid])
//			{
//				cout<<"YES"<<endl;
//				break;
//			}
//			else if (b < a[mid])
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				left = mid + 1;
//			}
//		}
//		if (left > right)
//			cout << "NO" << endl;
//	}
//}

////法三：使用map/unordered_map取代二分查找
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//int main()
//{
//	int n = 0, m = 0;
//	cin >> n;
//	vector<int>a;
//	for (int i = 0; i < n; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		a.push_back(temp);
//	}
//	map<int, int>finda;
//	for (int i = 0; i < n; i++)
//	{
//		finda.insert({ a[i],i });
//	}
//	int m;
//	cin >> m;
//	int b;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> b;
//		if (finda.find(b) == finda.end())
//			cout << "NO" << endl;
//		else
//		{
//			cout << "YES" << endl;
//		}
//	}
//}

////找位置（华中科技大学复试上机题）
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
////用map来解决
//int main()
//{
//	char str[200] = { 0 };
//	scanf("%s", str);
//	map<char, vector<int>>timesmap;//记录每个字符的位置和次数
//	vector<char>charseq;//记录每个字符出现的先后顺序
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		//把字符存入map中
//		timesmap[str[i]].push_back(i);//timesmap[str[i]]是一个vector数组
//		//如果是第一次出现
//		if (timesmap[str[i]].size() == 1)//判断数组大小来确定是否第一次出现
//		{
//			charseq.push_back(str[i]);
//		}
//	}
//	vector<char>::iterator seqit;
//	for (seqit = charseq.begin(); seqit != charseq.end(); ++seqit)
//		if (timesmap[*seqit].size() > 1)
//		{
//			vector<int>::iterator posit = timesmap[*seqit].begin();//*seq是一个字符
//			cout << *seqit << ":" << *posit;
//			for (posit = timesmap[*seqit].begin() + 1;
//				posit != timesmap[*seqit].end();
//				posit++)
//			{
//				cout << "," << *seqit << ":" << *posit;
//			}
//			cout << endl;
//		}
//}