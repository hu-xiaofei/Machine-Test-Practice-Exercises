#define _CRT_SECURE_NO_WARNINGS

//�Ӵ����㣨������ѧ�����ϻ��⣩
//#include <iostream>
//#include <string>
//#include <map>
//
//int main()
//{
//	char strArr[100];
//	while (std::cin >> strArr)
//	{
//		std::string str = strArr;
//		std::map<std::string, int> subCount;
//
//		// ���������Ӵ���ͳ�Ƴ��ִ���
//		for (int i = 1; i <= str.size(); ++i)
//		{
//			for (int j = 0; j <= str.size() - i; ++j)
//			{
//				// j���Ӵ�����ʼ�±꣬i���Ӵ�����
//				std::string sub = str.substr(j, i);
//				//���ַ��� str ����ȡ���ַ���,��λ�� j ��ʼ����ȡ����Ϊ i �����ַ���
//				++subCount[sub];
//				//��ʹ�� sub ��Ϊ�������� subCount ʱ����� sub �Ѿ������� subCount �У����᷵����ü�������ֵ��
//				// ��� sub �����ڣ�std::map ���Զ�����һ���µļ�ֵ�ԣ����м�Ϊ sub��ֵΪ int ���͵�Ĭ��ֵ 0
//			}
//		}
//
//		// ���� map ������ִ������� 1 ���Ӵ�
//		std::map<std::string, int>::iterator it;
//		for (it = subCount.begin(); it != subCount.end(); ++it)
//		{
//			if (it->second > 1)
//			{
//				std::cout << it->first << " " << it->second << std::endl;
//			}
//		}
//	}
//	return 0;
//}


////WERTYU���Ϻ���ͨ��ѧ�����ϻ��⣩
//#include<iostream>
//#include<map>
//using namespace std;
//int main()
//{
//    map<char, char>toCorrect =
//    {
//        {' ',' '},
//        {'2','1'},{'3','2'},{'4','3'},{'5','4'},{'6','5'},{'7','6'},{'8','7'},{'9','8'},{'0','9'},{'-','0'},{'=','-'},
//        {'W','Q'},{'E','W'},{'R','E'},{'T','R'},{'Y','T'},{'U','Y'},{'I','U'},{'O','I'},{'P','O'},{'[','P'},{']','['},
//        {'S','A'},{'D','S'},{'F','D'},{'G','F'},{'H','G'},{'J','H'},{'K','J'},{'L','K'},{';','L'},{'\'',';'},
//        {'X','Z'},{'C','X'},{'V','C'},{'B','V'},{'N','B'},{'M','N'},{',','M'},{'.',','},{'/','.'}
//    };
//    char strArr[200] = { 0 };//�����⣬����ֻҪ����100�Ϳ�����
//    while (fgets(strArr,200,stdin)!=NULL)//���ڿո���������cin�Ͳ�������
//        //fgets��file get string�����ڴ��ļ����׼�����ȡһ���ַ���,ԭ�ͣ�char* fgets(char* str, int num, FILE* stream)
//        //str: ���ڴ洢��ȡ�����ַ����Ļ�����
//        //num: ����ȡ���ַ�����������β�Ŀ��ַ� \0��
//        //stream : ������������ stdin ��ʾ�ӱ�׼�����ȡ
//        //����ɹ���ȡ���ַ������� str����������ļ���������EOF����δ��ȡ�κ��ַ������� NULL
//        //�������з�\n������ζ�ȡ�����з�Ҳ�ᱻ��ȡ��
//    {
//        for (int i = 0; strArr[i] != '\0'; i++)
//        {
//            if (strArr[i] == '\n')
//            {
//                strArr[i] = '\0';
//            }
//            strArr[i] = toCorrect[strArr[i]];
//        }
//        cout << strArr << endl;
//    }
//
//}


////�������֣�����ʦ����ѧ�����ϻ��⣩
//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//
//int main()
//{
//    map<int, string> unit = 
//    {
//        {1,"I"},{2,"II"},{3,"III"},{4,"IV"},{5,"V"},
//        {6,"VI"},{7,"VII"},{8,"VIII"},{9,"IX"}
//    };
//    map<int, string> ten = 
//    {
//        {10,"X"},{20,"XX"},{30,"XXX"},{40,"XL"},{50,"L"},
//        {60,"LX"},{70,"LXX"},{80,"LXXX"},{90,"XC"}
//    };
//    map<int, string> hundred = 
//    {
//        {100,"C"},{200,"CC"},{300,"CCC"},{400,"CD"},{500,"D"},
//        {600,"DC"},{700,"DCC"},{800,"DCCC"},{900,"CM"}
//    };
//
//    //���ʱ���ɿ�Խһ��λֵ��
//    // ���磬99Ӧ��ʾΪXCIX(��[100 -10] +[10-1])��������IC(��[100-1])��
//    // ��ͬ�ڰ���������ÿλ���ֱַ��ʾ��
//
//    int T;
//    cin >> T;
//    for (int i = 0; i < T; i++)
//    {
//        int n = 0;
//        cin >> n;
//        string res;//���ս��
//        if (n == 1000)
//        {
//            res = "M";
//        }
//        else if (n >= 100)
//        {
//            int u = n % 10;//��λ
//            int t = (n / 10) % 10*10;//ʮλ
//            int h = (n / 100) % 10*100;//��λ
//            res = hundred[h] + ten[t] + unit[u];
//        }
//        else if (n >= 10)
//        {
//            int u = n % 10;
//            int t = (n / 10) % 10*10;
//            res = ten[t] + unit[u];
//        }
//        else
//        {
//            res = unit[n];
//        }
//        cout << res << endl;
//    }
//}


//��Ԫ�飨�����ʵ��ѧ�����ϻ��⣩
//#include<iostream>
//#include<set>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int m = 0;
//		cin >> m;
//		vector<int>arr;
//		for (int j = 0; j < m; j++)
//		{
//			int temp;
//			cin >> temp;
//			arr.push_back(temp);
//		}
//		int num = 0;
//		for (int k1 = 0; k1 < m; k1++)
//		{
//			for (int k2 = 0; k2 < m; k2++)
//			{
//				for (int k3 = 0; k3 < m; k3++)
//				{
//					if (arr[k1] + arr[k2] == arr[k3])
//						num++;
//				}
//			}
//		}
//		cout << num << endl;
//	}
//}

////������ʱ�临�Ӷ�ΪO^2
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//int countTriples(vector<int>& nums) {
//    int n = nums.size();
//    int count = 0;
//
//    // ʹ�ù�ϣ��ͳ��ÿ�����ֳ��ֵĴ���
//    unordered_map<int, int> freq;
//    for (int num : nums)
//        //��ÿ��ѭ������ʱ��num �����ΰ󶨵� nums �����е�ÿ��Ԫ�أ�Ȼ����ѭ�����������Ԫ�ص�ֵ
//    {
//        freq[num]++;
//    }
//
//    // ֻ��Ҫ����ѭ��
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            int sum = nums[i] + nums[j];
//            // ���sum�Ƿ��������У�����ڣ���������ִ���
//            if (freq.count(sum)) {
//                count += freq[sum];//AMAZING^O^
//            }
//        }
//    }
//
//    return count;
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    while (n--) {
//        int m;
//        cin >> m;
//        vector<int> nums(m);
//        for (int i = 0; i < m; i++) {
//            cin >> nums[i];
//        }
//        cout << countTriples(nums) << endl;
//    }
//
//    return 0;
//}


//˭�����Ǳ�����ѣ�������ѧ�����ϻ��⣩
//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//
//int main()
//{
//	int n = 0;	//n������
//	int m = 0;	//m����
//	cin >> n >> m;
//	map<int, int>map1;
//	for (int i = 0; i < n; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		map1.insert({ i,temp });
//	}
//	vector<int>freq(201);
//	freq[0] = 0;
//	for (int i = 0; i < n; i++)
//	{
//		freq[map1[i]]++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (freq[map1[i]] == 1)
//			cout << "BeiJu" << endl;
//		else
//			cout << freq[map1[i]] - 1 << endl;
//	}
//}