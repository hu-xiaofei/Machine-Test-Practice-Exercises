#define _CRT_SECURE_NO_WARNINGS


//ѧϰsort
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//bool compare(int lhs, int rhs)
//{
//	return lhs >= rhs;
//	//lhs��rhs����������ʱ��Ҫ������
//}
//int main()
//{
//	int arr[6] = { 2,4,6,1,3,5 };
//	//sort ��һ����������ʼ��ַ 
//	//�ڶ������������һ��Ԫ�صĺ�һ��λ�õĵ�ַ
//	//[ )
//	sort(arr, arr + 6);
//
//	vector<int>vec = { 2,4,6,2,6 };
//	//sort(vec.begin(), vec.end());
//
//	sort(vec.begin(), vec.end(), compare);//��������
//}


////������ż���򣨱�����ѧ�����ϻ��⣩
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//bool compare(int l, int r)
//{
//	return l > r;
//}
//int main()
//{
//	vector<int>arr(10);
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//	}
//	vector<int>even, odd;//evenż����odd����
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)
//			even.push_back(arr[i]);
//		else
//			odd.push_back(arr[i]);
//	}
//	sort(even.begin(), even.end());
//	sort(odd.begin(), odd.end(),compare);
//	for (int i = 0; i < odd.size(); i++)
//	{
//		cout << odd[i] << " ";
//	}
//	for (int i = 0; i < even.size(); i++)
//	{
//		cout << even[i] << " ";
//	}
//	
//}
////����
//#include <stdio.h>
//#include<iostream>
//#include <algorithm>
//using namespace std;
//bool compare(int lhs, int rhs) {
//    if (lhs % 2 == 1 && rhs % 2 == 0)
//        //���棬��ż������
//    {
//        return true;
//    }
//    else if (lhs % 2 == 1 && rhs % 2 == 1 && lhs > rhs) 
//        //���棬���棬����
//    {
//        return true;
//    }
//    else if (lhs % 2 == 0 && rhs % 2 == 0 && lhs < rhs) 
//        //��ż����ż������
//    {
//        return true;
//    }
//    else //���������������
//    {
//        return false;
//    }
//}
//int main() {
//
//    int arr[10];
//    for (int i = 0; i < 10; ++i) {
//        scanf("%d", &arr[i]); // arr + i
//    }
//    sort(arr, arr + 10, compare);
//    for (int i = 0; i < 10; ++i) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}


////�ɼ�����2 ���廪��ѧ�����ϻ��⣩
//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//bool compare(pair<int,int>l,pair<int,int>r)
//{
//	if (l.second < r.second)
//		return true;
//	else if (l.second == r.second && l.first < r.first)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	
//	vector<pair<int, int>>students;
//	for (int i = 0; i < n; i++)
//	{
//		int id = 0, grade = 0;
//		cin >> id >> grade;
//		students.push_back({ id,grade });
//	}
//	sort(students.begin(), students.end(), compare);
//	for (int i=0; i<n; ++i)
//	{
//		cout << students[i].first <<" " << students[i].second << endl;
//	}
//}


//�ɼ����� ���廪��ѧ�����ϻ��⣩
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//struct Student {
//    string name;
//    int score;
//    int index; // ��¼ԭʼ˳��
//};
//
//bool compare0(const Student& l, const Student& r) {
//    if (l.score != r.score) {
//        return l.score > r.score; // �ɼ�����
//    }
//    else {
//        return l.index < r.index; // �ɼ���ͬ����ԭʼ˳��
//    }
//}
//
//bool compare1(const Student& l, const Student& r) {
//    if (l.score != r.score) {
//        return l.score < r.score; // �ɼ�����
//    }
//    else {
//        return l.index < r.index; // �ɼ���ͬ����ԭʼ˳��
//    }
//}
//
//int main() {
//    int n, method;
//    cin >> n >> method;
//    vector<Student> students;
//    for (int i = 0; i < n; ++i) {
//        string name;
//        int score;
//        cin >> name >> score;
//        students.push_back({ name, score, i }); // ��¼����i
//    }
//
//    if (method == 0) {
//        sort(students.begin(), students.end(), compare0);
//        //sort�ǿ��ţ����ȶ���
//    }
//    else {
//        sort(students.begin(), students.end(), compare1);
//    }
//
//    for (const auto& s : students) {
//        cout << s.name << " " << s.score << endl;
//    }
//    return 0;
//}