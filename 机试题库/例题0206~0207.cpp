#define _CRT_SECURE_NO_WARNINGS

////ѧϰset
//#include<iostream>
//#include<vector>
//#include<set>
//#include<unordered_set>
//using namespace std;
//
//int main()
//{
//	//����
//	set<int>set1 = { 1,2,3,5,7,9 };
//	multiset<int>set2 = { 1,3,5,6,1,3,5,6 };//���ظ�
//	unordered_set<int>set3 = { 2,4,6 };
//	unordered_multiset<int>set4 = { 2,3,4,2,3,4 };
//	unordered_multiset<int>:: iterator it;
//	for (it = set4.begin(); it != set4.end(); ++it)
//	{
//		printf("%d ", * it);
//	}
//	printf("\n");
//
//	//����Ԫ��
//	set1.insert(2);
//
//	//ɾ��Ԫ��
//	set1.erase(1);
//	set2.erase(1);//һ��ɾ��ȫ����1
//
//	//find����Ԫ�ص�λ�ã��Ҳ����ͷ���һ��β�������
//	if (set3.find(1) == set3.end()) {
//		printf("1 is not in set!\n");
//	}
//	else {
//		printf("1 is in set !\n");
//	}
//
//	//count��ȡԪ�ص�����
//	printf("2 occurs %d times\n", set4.count(2));
//
//	//set��Ԫ�ز�����ֱ���޸ģ�������ɾ���ٲ���
//}

////�׳˵ĺͣ��Ϻ���ͨ��ѧ�����ϻ��⣩
//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//
//int main()
//{
//	vector<int>factorialArr;//�׳�֮��
//	int curFactorial = 1;
//	factorialArr.push_back(1);
//	for (int i = 1; i <= 9; i++)
//	{
//		curFactorial *= i;
//		factorialArr.push_back(curFactorial);
//	}
//
//	//�ÿռ任ʱ�䣬Ԥ�Ȱ����п���ȫ�����
//	set<int>allPossible;
//	allPossible.insert(0);
//	for (int i = 0; i <= 9; i++)
//	{
//		set<int> temp;
//		set<int>::iterator it;
//		for (it = allPossible.begin(); it != allPossible.end(); ++it)
//		{
//			temp.insert(*it + factorialArr[i]);
//		}
//		for (it = temp.begin(); it != temp.end(); ++it)
//		{
//			allPossible.insert(*it);
//		}
//	}
//	allPossible.erase(0);
//	
//	int n;
//	while (cin >> n)
//	{
//		if (n < 0)
//			break;
//		if (allPossible.count(n) == 0)
//		{
//			cout << "NO" << endl;
//		}
//		else
//		{
//			cout << "YES" << endl;
//		}
//	}
//
//}

////ѧϰmap
//#include<iostream>
//#include<map>
//#include<unordered_map>
//using namespace std;
//
//int main()
//{
//	//����map
//	map<char, int>map1;//���򣬲������ظ�
//	//char�Ǽ������� int��ֵ������
//	multimap<char, int>map2;//���������ظ�
//  //Ԫ�ذ��ռ���key�����������У�Ĭ������£������߸����Զ���ıȽϺ�������
//	unordered_map<char, int> map3;
//	// ���������ظ�����ʹ�ã�ʱ�俪��С
//	unordered_multimap<char, int> map4;
//
//	//��ֵ��
//	pair<char, int> pair1 = {'w', 0 };
//	// first��second ֵ
//	printf("key = %c, value= %d\n", pair1.first, pair1.second);
//
//	//��map������
//	map1.insert(pair1);
//	map1.insert({ 'w',1 });
//	map2.insert(pair1);
//	map2.insert({ 'w', 1});
//	//map2.insert({ 'o',1 });
//	
//	//��map��ɾ��
//	map1.erase('w');
//	map2.erase('w'); 
//	return 0;
//
//	//����map
//	map<char, int>map1= {{ 'w ',0},{'o' ,1},{ 'r',2 }, { '1',3 }, { 'd',4}};
//	map1.insert({ 'o',5 }); 
//	multimap<char, int>:: iterator it;
//	for (it = map1.begin(); it != map1.end(); ++it)
//	{
//	printf("key = %c��value = %d\n", it->first, it->second);
//	return 0;
//	}
//
//	//����
//	printf("value=%d\n", map1['o']);//[]���԰�o����Ӧ��ֵȡ��
//	//����ֵ�Բ����ڣ�������һ�ֵΪ0
//
//	//find�÷�
//	if (map1.find('o') == map1.end()) {
//		printf("key is not in map\n");
//	}
//	else {
//		printf("value = %d \n", map1['o']);
//	}
//
//	//��ֵ
//	map1['o'] = 6;
//
//	//multimap��֧��[]�����
//	//low_bound(key)����key��Ӧ�ĵ�һ��ֵ��λ��
//	//upper_bound(key)����key���õ����һ��ֵ�ĺ�һ��λ��
//	multimap<char, int>::iterator it;
//	for (it = map1.lower_bound('o'); it != map1.upper_bound('o'); ++it)
//		printf("key=%c,velue=%d\n", it->first, it->second);
//
//}

//�ֻ����� ���廪��ѧ�����ϻ��⣩
//����map��һ����¼ÿ����ĸҪ�������£�һ����¼ÿ����ĸ���ĸ�����
//#include<iostream>
//#include<map>
//using namespace std;
//int main()
//{
//	//ÿ����ĸ����ʱ��
//    map<char, int>input =
//    {
//        {'a',1},{'b',2},{'c',3},
//        {'d',1},{'e',2},{'f',3},
//        {'g',1},{'h',2},{'i',3},
//        {'j',1},{'k',2},{'l',3},
//        {'m',1},{'n',2},{'o',3},
//        {'p',1},{'q',2},{'r',3},{'s',4},
//        {'t',1},{'u',2},{'v',3},
//        {'w',1},{'x',2},{'y',3},{'z',4}
//    };
//    //ÿ����ĸ�����ĸ�����
//    map<char, int>key =
//    {
//        {'a',2},{'b',2},{'c',2},
//        {'d',3},{'e',3},{'f',3},
//        {'g',4},{'h',4},{'i',4},
//        {'j',5},{'k',5},{'l',5},
//        {'m',6},{'n',6},{'o',6},
//        {'p',7},{'q',7},{'r',7},{'s',7},
//        {'t',8},{'u',8},{'v',8},
//        {'w',9},{'x',9},{'y',9},{'z',9}
//    };
//    char str[200];
//    while (cin >> str)
//    {
//        int last = -1;//�ϴεİ���
//        int time = 0;
//        for (int i = 0; str[i] != '\0'; i++)
//        {
//            //�ж��Ƿ�Ҫ�ȴ�
//            if (key[str[i]] == last)
//            {
//                time += 2;
//            }
//            time += input[str[i]];
//            last = key[str[i]];
//        }
//        cout << time << endl;
//    }
//
//}