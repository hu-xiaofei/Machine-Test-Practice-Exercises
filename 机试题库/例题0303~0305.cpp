#define _CRT_SECURE_NO_WARNINGS

//��x ����������ҵ��ѧ�����ϻ��⣩
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
//		//find����������
//		//find(begIt,endIt,x);
//		vector<int>::iterator it;
//		it = find(arr.begin(), arr.end(), x);
//		if (it == arr.end())
//		{
//			cout << -1 << endl;
//		}
//		else
//		{
//			//it+1ƫ��it-arr.begin()
//			//it - arr.begin() �������Ǽ�������������֮���ƫ����
//			cout << it - arr.begin() << endl;
//		}
//	}
//	
//}


//���ֲ��ң�ֻ������������ݽṹ��ʹ�ã�
//���� �������ʵ��ѧ�����ϻ��⣩
////��һ��˳����ҷ�
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

//���������ֲ���
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

////������ʹ��map/unordered_mapȡ�����ֲ���
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

////��λ�ã����пƼ���ѧ�����ϻ��⣩
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
////��map�����
//int main()
//{
//	char str[200] = { 0 };
//	scanf("%s", str);
//	map<char, vector<int>>timesmap;//��¼ÿ���ַ���λ�úʹ���
//	vector<char>charseq;//��¼ÿ���ַ����ֵ��Ⱥ�˳��
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		//���ַ�����map��
//		timesmap[str[i]].push_back(i);//timesmap[str[i]]��һ��vector����
//		//����ǵ�һ�γ���
//		if (timesmap[str[i]].size() == 1)//�ж������С��ȷ���Ƿ��һ�γ���
//		{
//			charseq.push_back(str[i]);
//		}
//	}
//	vector<char>::iterator seqit;
//	for (seqit = charseq.begin(); seqit != charseq.end(); ++seqit)
//		if (timesmap[*seqit].size() > 1)
//		{
//			vector<int>::iterator posit = timesmap[*seqit].begin();//*seq��һ���ַ�
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