#define _CRT_SECURE_NO_WARNINGS

//// World for U���㽭��ѧ�����ϻ���
//#include<iostream>
//using namespace std;
//#include <string>
//int main() {
//    string str;//��Ƶ��û�н�
//    while (true)
//    {
//        str = { 0 };
//        getline(cin, str); // ����һ������
//        if (str.empty() ) 
//        {  // ����Ƿ������˿���
//            break;
//        }
//        int N = str.length();
//        int n1, n2, n3, max_k = 0;
//        //��n1,n2,n3���ѵ�
//        for (int n2 = 3; n2 <= N; ++n2) {
//            // ���� n1 + n2 + n3 - 2 = N ���� n1 �� n3
//            int temp_n1_n3 = (N + 2 - n2) / 2;
//            // ����Ƿ����� k <= n2 �� k ����
//            if (temp_n1_n3 <= n2 && temp_n1_n3 > max_k) {
//                //max_k��֤temp_n1_n3�����𽥱�󣬴�һ�����ֵ��Ȼ��ֹͣ
//                max_k = temp_n1_n3;
//            }
//        }
//        n1 = n3 = max_k;
//        n2 = N + 2 - n1 - n3;
//
//        for (int i = 0; i < n1-1; i++)
//        {
//            cout << str[i];
//            for (int j = 0; j < (n2 - 2); j++)
//            {
//                cout << ' ';
//            }
//            cout<<str[N - 1 - i] << endl;
//        }
//        for (int i = 0; i < n2; i++)
//        {
//            cout << str[n1 - 1 + i];
//        }
//
//    }
//    return 0;
//}


//��ת���󣨱������պ����ѧ�����ϻ��⣩
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cin >> n;
//	//������СΪ n * n �Ķ�ά����
//	/*char** a = new char* [n];
//	for (int i = 0; i < n; ++i) {
//		a[i] = new char[n];
//	}
//	char** b = new char* [n];
//	for (int i = 0; i < n; ++i) {
//		b[i] = new char[n];
//	}*/
//	char a[20][20] = { 0 };
//	char b[20][20] = { 0 };
//
//	//���վ����������
//	/*for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			cin >> b[i][j];
//		}
//	}*/
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> b[i][j];
//		}
//	}
//
//
//	//�ж��Ƿ�Ϊ��ת����
//	while(true)
//	{
//		int count = -1;
//		//�Ƿ�Ϊ0��
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (a[i][j] == b[i][j])
//					count = 0;
//				else
//				{
//					count = -1;
//					break;
//				}
//			}
//			if (count == -1)
//				break;
//		}
//		if (count != -1)
//		{
//			cout << count << endl;
//			break;
//		}
//		//�Ƿ�Ϊ90��
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (a[i][j] == b[j][n-1-i])
//					count = 90;
//				else
//				{
//					count = -1;
//					break;
//				}
//			}
//			if (count == -1)
//				break;
//		}
//		if (count != -1)
//		{
//			cout << count << endl;
//			break;
//		}
//		//�Ƿ�Ϊ180��
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (a[i][j] == b[n - 1 - i][n - 1 - j])
//					count = 180;
//				else
//				{
//					count = -1;
//					break;
//				}
//			}
//			if (count == -1)
//				break;
//		}
//		if (count != -1)
//		{
//			cout << count << endl;
//			break;
//		}
//		//�Ƿ�Ϊ270��
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (a[i][j] == b[n-1-j][i])
//					count = 270;
//				else
//				{
//					count = -1;
//					break;
//				}
//			}
//			if (count == -1)
//				break;
//		}
//		if (count != -1)
//		{
//			cout << count << endl;
//			break;
//		}
//		cout << count << endl;
//		break;
//	}
//	//�ͷ���������
//	/*for (int i = 0; i < n; ++i) {
//		delete[] a[i];
//	}
//	delete[] a;
//	for (int i = 0; i < n; ++i) {
//		delete[] b[i];
//	}
//	delete[] b;*/
//}
////������ÿ�ν���һ��������ת90�ȣ�Ȼ����ڶ�������Ƚ�
//void ClockwiseRotate90(int matrix[10][10], int n) {
//	// ˳ʱ����ת90��
//	// ��ת���������ظ�ִ�иú�������
//
//	// �ȱ���һ�¾���
//	int temp[10][10];
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			temp[i][j] = matrix[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			matrix[i][j] = temp[n - 1 - j][i];
//		}
//	}
//
//	return;
//}
//bool Compare(int lhs[10][10], int rhs[10][10], int n) {
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			if (lhs[i][j] != rhs[i][j]) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//int main() {
//	int n;
//	int lhs[10][10];
//	int rhs[10][10];
//	scanf("%d", &n);
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			scanf("%d", &lhs[i][j]);
//		}
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			scanf("%d", &rhs[i][j]);
//		}
//	}
//	if (Compare(lhs, rhs, n)) {
//		printf("0\n");
//	}
//	else {
//		ClockwiseRotate90(lhs, n);
//		if (Compare(lhs, rhs, n)) {
//			printf("90\n");
//		}
//		else {
//			ClockwiseRotate90(lhs, n);
//			if (Compare(lhs, rhs, n)) {
//				printf("180\n");
//			}
//			else {
//				ClockwiseRotate90(lhs, n);
//				if (Compare(lhs, rhs, n)) {
//					printf("270\n");
//				}
//				else {
//					printf("-1\n");
//				}
//			}
//		}
//	}
//
//	return 0;
//}



//�ظ��ߣ�������ѧ�����ϻ��⣩
//�ƣ�̫���ˣ�д������
#include<iostream>
//using namespace std;
//int main()
//{
//	int N = 0, level = 1;
//	cin >> N;
//	//char mold[5][5] = {0};
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		cout << mold[i] << endl;
//	}
//}
#include <stdio.h>
#include <string.h>
using namespace std;
void square(int curSize, int patSize, char pattern[3000][3000], char picture[3000][3000], char last[3000][3000]) {
    if (curSize == 1) {
        for (int i = 0; i < patSize; ++i) {
            for (int j = 0; j < patSize; ++j) {
                picture[i][j] = pattern[i][j];
            }
        }
    }
    else {
        // ����ģ����ַ��Ƿ�Ϊ�ո���з��δ���

        for (int i = 0; i < patSize; ++i) {
            for (int j = 0; j < patSize; ++j) {
                if (pattern[i][j] == ' ') {
                    for (int pi = i * curSize; pi < i * curSize + curSize; ++pi) {
                        for (int pj = j * curSize; pj < j * curSize + curSize; ++pj) {
                            picture[pi][pj] = ' ';
                        }
                    }
                }
                else {
                    // ������Ҫ������ͼ����ģ����±�ӳ���ϵ
                    for (int pi = i * curSize; pi < i * curSize + curSize; ++pi) {
                        for (int pj = j * curSize; pj < j * curSize + curSize; ++pj) {
                            picture[pi][pj] = last[pi - i * curSize][pj - j * curSize];
                        }
                    }

                }
            }
        }
    }

    for (int i = 0; i < curSize * patSize; ++i) {
        for (int j = 0; j < curSize * patSize; ++j) {
            last[i][j] = picture[i][j];
        }
    }
}
// ����Ĵ�СΪ 3000*3000 Լ9MB��������1MB�����ƣ������������ȫ�ֱ��� 
char pattern[3000][3000];
char last[3000][3000];
char picture[3000][3000];
int main() {
    int N;
    int Q;

    while (1) {
        scanf("%d", &N);
        if (N == 0) {
            break;
        }
        getchar(); // fgets�����'\n' ������ȥ��
        for (int i = 0; i < N; ++i) {

            fgets(pattern[i], 3000, stdin);
            int curLength = strlen(pattern[i]);// _#\n --> 3
            for (int j = curLength - 1; j < N; ++j) {
                pattern[i][j] = ' ';
            }
        }
        scanf("%d", &Q);
        int curSize = 1;
        // �𽥷��β���
        for (int i = 0; i < Q; ++i) {
            square(curSize, N, pattern, picture, last);
            curSize *= N;
        }

        for (int i = 0; i < curSize; ++i) {
            for (int j = 0; j < curSize; ++j) {
                printf("%c", picture[i][j]);
            }
            printf("\n");
        }

    }
}