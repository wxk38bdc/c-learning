#define _CRT_SECURE_NO_WARNINGS
#include<iostream>//i-o-stream ���������
#include<cstdio>
#include<cmath>
using namespace std;

//int main()
//{
//	int a = 0, b = 0;
//	char ch;
//	again:
//	cin >> a >> b >> ch;
//	if (ch == '+')
//	{
//		cout << a + b << endl;
//	}
//	else if (ch == '-')
//	{
//		cout << a - b << endl;
//	}
//	else if (ch == '*')
//	{
//		cout << a * b << endl;
//	}
//	else if (ch == '/')
//	{
//		if (b == 0)
//		{
//			cout << "������󣬳�������Ϊ0"<<endl;
//			cout << "���������룺";
//			goto again;
//		}
//		else
//		{
//			cout << a / b << endl;
//		}
//	}
//	else if (ch == '%')
//	{
//		cout << a % b << endl;
//	}
//	else
//	{
//		cout << "�������" << endl;
//		cout << "���������룺";
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	int n, sum = 0;
//	cin >> n;
//	//cout << (n * (n + 1)) / 2 << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	cout << sum;
//	return 0;
//}

//int main()
//{
//	int a, n;
//	cin >> a >> n;
//	cout << pow(a, n);
//	return 0;
//}

//int bubble_sort(int arr[], int len)
//{
//	int temp;
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[100];
//	int len=0;
//	//��������
//	for (int i = 0; i < 100; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	while (cin >> arr[len])
//	{
//		len++;
//	}
//	bubble_sort(arr, len);
//	return 0;
//}

//int main()
//{
//	int n;
//	cin >> n;
//	int arr[100];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	cout << max << " " << min;
//	return 0;
//}

//int main()
//{
//	int n, mx;
//	bool first = true;
//	while(cin>>n)
//	{
//		if (first)
//		{
//			mx = n;
//			first = false;
//		}
//		else
//		{
//			if (mx < n)
//			{
//				mx = n;
//			}
//		}
//	 }
//	cout << mx;
//	return 0;
//}

//int main()
//{
//	enum color_set{ red, yellow, blue, white, black };
//	color_set a = red;
//	if (a == red)
//	{
//		cout << a;
//	}
//	return 0;
//}