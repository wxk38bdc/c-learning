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