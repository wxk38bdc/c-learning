#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////ʵ��һ��������ӡ�˷��ھ���
//void func(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	func(n);
//	return 0;
//}

//#include<stdio.h>
////�ж�����
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (ret == 1)
//	{
//		printf("%d��������\n", year);
//	}
//	else
//	{
//		printf("%d�겻������\n", year);
//	}
//	return 0;
//}

//#include<stdio.h>
////�ж����������100-200֮�������
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int ret = is_prime(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//void init(int arr[])
//{
//	for(int i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	print(arr);//�������ú����
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//�����ʼ��
//	init(arr);
//	//��������
//	for(i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�������
//	print(arr);
//	//��������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,sz);
//	
//	return 0;
//}

//#include<stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	for(i=0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//#include<stdio.h>
////���ֲ���
//int bin_search(int arr[], int left, int right, int k)
//{
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int tofind = 0;
//	printf("������Ҫ���ҵ����֣�\n");
//	scanf("%d", &tofind);
//	int ret = bin_search(arr, 0, 9, tofind);
//	if(ret==-1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("\033[32;?25hmHelloWorld\r\n");
//	return 0;
//}

//#include<stdio.h>
////int Factorial(int n)//��n�Ľ׳�//�ݹ鷽��
////{
////	if (n == 1 || n == 0)
////	{
////		return 1;
////	}
////	else if (n > 1)
////	{
////		return n * Factorial(n - 1);
////	}
////	else
////	{
////		return -1;
////	}
////}
//int Factorial(int n)//��������
//{
//	int ret = 1;
//	if (n == 0 || n == 1)
//	{
//		return 1;
//	}
//	else if (n < 0)
//	{
//		return -1;
//	}
//	while (n >= 2)
//	{
//		ret*=n;
//		n--;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Factorial(n);
//	if(ret==-1)
//	{
//		printf("�������\n");
//	}
//	else
//	{
//		printf("%d�Ľ׳��ǣ�%d\n", n, ret);
//	}
//	return 0;
//}

//#include<stdio.h>
////�õݹ���n*n��������ʽ��ֵ//δ���
//int determinant(int arr[][50], int n)
//{
//	if (n == 1)
//	{
//		return arr[0][0];
//	}
//	else if (n == 2)
//	{
//		return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
//	}
//	else
//	{
//		int sum = 0;//�õݹ���n*n��������ʽ��ֵ
//for (int i = 0; i < n; i++)
//		{
//			int tmp[50][50] = { 0 };
//			for (int j = 0; j < n - 1; j++)
//			{
//				for (int k = 0; k < n - 1; k++)
//				{
//					if (k < i)
//					{
//						tmp[j][k] = arr[j + 1][k];
//					}
//					else
//					{
//						tmp[j][k] = arr[j + 1][k + 1];
//					}
//				}
//			}
//			if (i % 2 == 0)
//			{
//				sum += arr[0][i] * determinant(tmp, n - 1);
//			}
//			else
//			{
//				sum -= arr[0][i] * determinant(tmp, n - 1);
//			}
//		}
//	}
//}
//int main()
//{
//	int n;//����ʽ�Ľ���
//	int i = 0, j = 0, k = 0;
//	int arr[50][50];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int ret= determinant(arr, n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//#include<stdio.h>
////��ѭ��ʵ��
//long long fibonacci(long long n)
//{
//	long long a = 1;
//	long long b = 1;
//	long long c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//////쳲���������
////long long fibonacci(long long n)
////{
////	if (n == 1 || n == 2)
////	{
////		return 1;
////	}
////	else
////	{
////		return fibonacci(n - 1) + fibonacci(n - 2);
////	}
////}
//int main()
//{
//	long long n;
//	scanf("%lld",&n);
//	long long ret=fibonacci(n);
//	printf("%lld\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int my_pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * my_pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	int ret=my_pow(n, k);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//int digitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return n % 10 + digitSum(n / 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = digitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}

#include<stdio.h>

