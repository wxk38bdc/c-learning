#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}


////�ַ���������ת
//void left_move(char* arr, int len, int num)
//{
//	int i = 0;
//	while (num--)
//	{
//		char tmp = arr[0];
//		for (i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//void right_move(char* arr, int len, int num)
//{
//	int i = 0;
//	while (num--)
//	{
//		char tmp = arr[len - 1];
//		for (i = len - 1; i > 0; i--)
//		{
//			arr[i] = arr[i - 1];
//		}
//		arr[0] = tmp;
//	}
//}
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	while (N--)
//	{
//		char arr[20] = { 0 };
//		scanf("%s", arr);
//		char sign[2];
//		scanf("%s", &sign);
//		int num = 0;
//		scanf("%d", &num);
//		if (strcmp(sign,"L")==0)
//		{
//			left_move(arr,strlen(arr), num);
//		}
//		else if(strcmp(sign,"R")==0)
//		{
//			right_move(arr, strlen(arr), num);
//		}
//		
//		//��Ӧ������������Ч������֮����ַ���������˳���������λ�õ��ַ���
//		int i = 0;
//		for (i = 0; i < strlen(arr); i++)
//		{
//			if (i % 2 == 0)
//			{
//				printf("%c", arr[i]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
////�������������������������������
//int main()
//{
//	double x1, y1, x2, y2, x3, y3;
//	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
//	//ʹ�ú��׹�ʽ�����������,���׹�ʽ��S=sqrt(p(p-a)(p-b)(p-c));p=(a+b+c)/2
//		double a = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
//		double b = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
//		double c = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
//		double p = (a + b + c) / 2;
//		double s = sqrt(p*(p - a)*(p - b)*(p - c));
//		printf("%.2lf\n", s);
//	
//	return 0;
//}

//#include<stdio.h>
//int main()//ƻ���ͳ���
//{
//	int m, t, s;
//	scanf("%d%d%d", &m, &t, &s);
//	if (s >= t * m)
//		printf("0\n");
//	else
//		printf("%d\n", m - s / t - (s % t ? 1 : 0));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num /= 10;
//	}
//	return 0;
//}

//#include<stdio.h>
////��ӡ���־��������������__���������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//��ӡ���־���
//	int i = 1;
//	for (i = 1; i <= n * n; i++)
//	{
//		if (i < 10)
//		{
//			printf("0%d", i);
//		}
//		else
//		{
//			printf("%d", i);
//		}
//		if (i % n == 0)
//		{
//			printf("\n");
//		}
//	}
//	printf("\n");
//	//��ӡ����������
//	int current = 1; // ��ʼ����ǰ����
//
//	for (int i = 1; i <= n; i++) {
//		// ��ӡǰ���ո�
//		for (int j = 1; j <= n - i; j++) {
//			printf("  ");
//		}
//
//		// ��ӡ��������
//		for (int j = 1; j <= i; j++) {
//			if (current < 10) {
//				printf("0%d", current);
//			}
//			else {
//				printf("%d", current);
//			}
//			current++;
//		}
//
//		printf("\n");
//	}
//	//if (n == 1)
//	//{
//	//	printf("01\n");
//	//}
//	//else if (n == 2)
//	//{
//	//	printf("  01\n");
//	//	printf("0203\n");
//	//}
//	//else if (n == 3)
//	//{
//	//	printf("    01\n");
//	//	printf("  0203\n");
//	//	printf("040506\n");
//	//}
//	//else if (n == 4)
//	//{
//	//	printf("      01\n");
//	//	printf("    0203\n");
//	//	printf("  040506\n");
//	//	printf("07080910\n");
//	//}
//	//else if (n == 5)
//	//{
//	//	printf("        01\n");
//	//	printf("      0203\n");
//	//	printf("    040506\n");
//	//	printf("  07080910\n");
//	//	printf("1112131415\n");
//	//}
//	//else if (n == 6)
//	//{
//	//	printf("          01\n");
//	//	printf("        0203\n");
//	//	printf("      040506\n");
//	//	printf("    07080910\n");
//	//	printf("  1112131415\n");
//	//	printf("161718192021\n");
//	//}
//	//else if (n == 7)
//	//{
//	//	printf("            01\n");
//	//	printf("          0203\n");
//	//	printf("        040506\n");
//	//	printf("      07080910\n");
//	//	printf("    1112131415\n");
//	//	printf("  161718192021\n");
//	//	printf("22232425262728\n");
//	//}
//	//else if (n == 8)
//	//{
//	//	printf("              01\n");
//	//	printf("            0203\n");
//	//	printf("          040506\n");
//	//	printf("        07080910\n");
//	//	printf("      1112131415\n");
//	//	printf("    161718192021\n");
//	//	printf("  22232425262728\n");
//	//	printf("2930313233343536\n");
//	//}
//	//else if (n == 9)
//	//{
//	//	printf("                01\n");
//	//	printf("              0203\n");
//	//	printf("            040506\n");
//	//	printf("          07080910\n");
//	//	printf("        1112131415\n");
//	//	printf("      161718192021\n");
//	//	printf("    22232425262728\n");
//	//	printf("  2930313233343536\n");
//	//	printf("373839404142434445\n");
//	//}
//	return 0;
//}

//#include<stdio.h>
////�ǹȲ���//�޸Ĵ��룬��ô�ᳬʱ�أ�������
//int main()
//{
//	long long n;
//	scanf("%lld", &n);
//	long long tmp = n;
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			printf("%lld/2=%lld\n", n, n / 2);
//			n /= 2;
//		}
//		else
//		{
//			printf("%lld*3+1=%lld\n", n, n * 3 + 1);
//			n = n * 3 + 1;
//		}
//		if (n == 1)
//			printf("End\n");
//	}
//	if (tmp == 1)
//	{
//		printf("End\n");
//	}
//	return 0;
//}

//#include<stdio.h>
////��������
//int is_leap_year(int year)//�ж��Ƿ�Ϊ����
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int tmp = n;
//	int year = 2000, month = 1, day = 1;
//	if(n == 0)
//	{
//		printf("2000-01-01 ");
//	}
//	else//��Ҫ����ԭ���Ƚ������Ƶ�2000��1��1�գ�Ȼ���ٸ���n��ֵ��������
//	{
//		while (n--)
//		{
//			day++;
//			if (day == 32 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
//			{
//				day = 1;
//				month++;
//			}
//			else if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
//			{
//				day = 1;
//				month++;
//			}
//			else if (day == 30 && month == 2 && is_leap_year(year) == 1)
//			{
//				day = 1;
//				month++;
//			}
//			else if (day == 29 && month == 2 && is_leap_year(year) == 0)
//			{
//				day = 1;
//				month++;
//			}
//			if (month == 13)
//			{
//				month = 1;
//				year++;
//			}
//		}
//	}
//	printf("%d-%02d-%02d ", year, month, day);
//	int i = tmp % 7;
//	switch (i)
//	{
//	case 0:
//		printf("Saturday\n");
//		break;
//	case 1:
//		printf("Sunday\n");
//		break;
//	case 2:
//		printf("Monday\n");
//		break;
//	case 3:
//		printf("Tuesday\n");
//		break;
//	case 4:
//		printf("Wednesday\n");
//		break;
//	case 5:
//		printf("Thursday\n");
//		break;
//	case 6:
//		printf("Friday\n");
//	}
//	return 0;
//}


//#include<stdio.h>
////version_1
//void bubbleSort(int arr[], int len)//ð������
//{
//	int i = 0, j = 0;
//	for(i = 0; i < len - 1; i++)
//	{
//		for(j = 0; j < len - 1 - i; j++)
//		{
//			if(arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}	
//		}
//	}
//}
//int main()
//{
//	int A[101] = { 0 };
//	int B[201] = { 0 };
//	int M = 0, N = 0, i = 0, j = 0;
//	scanf("%d%d", &M, &N);
//	for (i = 0; i < M; i++)
//	{
//		scanf("%d", &A[i]);
//	}
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &B[i]);
//	}
//	//�ж�A��B���Ƿ�����ͬԪ�أ�����У���B����ͬԪ�ر�Ϊ0
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (A[i] == B[j])
//			{
//				B[j] = 0;
//			}
//		}
//	}
//	int count_0 = 0;
//	
//	int C[400] = { 0 };
//	j = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (B[i] != 0)
//		{
//			C[j] = B[i];
//			j++;
//		}
//		else
//		{
//			count_0++;
//		}
//	}
//
//	int D[202] = { 0 };
//	for (i = 0; i < M; i++)
//	{
//		D[i] = A[i];
//	}
//	for (i = M; i < M + N - count_0;i++)
//	{
//		D[i] = C[i - M];
//	}
//	bubbleSort(D, M + N - count_0);
//	for (i = 0; i < M + N - count_0;i++)
//	{
//		printf("%d ", D[i]);
//	}
//	
//	return 0;
//}

//#include<stdio.h>
////version_2
//void bubbleSort(int arr[], int len)//ð������
//{
//	int i = 0, j = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int A[101] = { 0 };
//	int B[201] = { 0 };
//	int M = 0, N = 0, i = 0, j = 0;
//	//����
//	scanf("%d%d", &M, &N);
//	for (i = 0; i < M; i++)
//	{
//		scanf("%d", &A[i]);
//	}
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &B[i]);
//	}
//	//�ϲ�A��B
//	int AandB[202] = { 0 };
//	for (i = 0; i < M; i++)
//	{
//		AandB[i] = A[i];
//	}
//	for (i = M; i < M + N; i++)
//	{
//		AandB[i] = B[i - M];
//	}
//	for (i = 0; i < M + N; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (AandB[i] == AandB[j])
//			{
//				AandB[i] = 0;
//			}
//		}
//	}
//	int newAandB[202] = { 0 };
//	int count_0 = 0;
//	j = 0;
//	for (i = 0; i < M+N; i++)
//	{
//		if (AandB[i] != 0)
//		{
//			newAandB[j] = AandB[i];
//			j++;
//		}
//		else
//		{
//			count_0++;
//		}
//	}
//	bubbleSort(newAandB, M + N - count_0);
//	for (i = 0; i < M + N - count_0;i++)
//	{
//		printf("%d ", newAandB[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
////������������ͻ�ת���
//int main()
//{
//	int arr[11][11] = { 0 };
//	int row = 0, col = 0, i = 0, j = 0;
//	scanf("%d%d", &row, &col);
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//�������
//	for (i = 0; i < row; i++)
//	{
//		if (i % 2 == 0)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("%d ", arr[i][j]);
//			}
//		}
//		else
//		{
//			for (j = col-1; j >=0; j--)
//			{
//				printf("%d ", arr[i][j]);
//			}
//		}
//	}
//	printf("\n");
//	//�������:���������㣬������ڲ㣬ֱ����������ĵ�һ��Ԫ��
//	int left = 0, right = col - 1, up = 0, down = row - 1;
//	while (left <= right && up <= down)
//	{
//		for (i = left; i <= right; i++)
//		{
//			printf("%d ", arr[up][i]);
//		}
//		for (i = up + 1; i <= down; i++)
//		{
//			printf("%d ", arr[i][right]);
//		}
//		if (up != down)
//		{
//			for (i = right - 1; i >= left; i--)
//			{
//				printf("%d ", arr[down][i]);
//			}
//		}
//		if (left != right)
//		{
//			for (i = down - 1; i > up; i--)
//			{
//				printf("%d ", arr[i][left]);
//			}
//		}
//		left++;
//		right--;
//		up++;
//		down--;
//	}
//	return 0;
//}

//#include<stdio.h>
//int isPrimeNumber(int num)
//{
//	int i = 0;
//	if (num == 0 || num == 1)
//	{
//		return 0;
//	}
//	for (i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int m;
//		scanf("%d", &m);
//		int a1 = m;
//		int a2 = m;
//		int b1 = 0;
//		int b2 = 0;
//		while (isPrimeNumber(a1) != 1)
//		{
//			a1++;
//			b1++;
//		}
//		while (isPrimeNumber(a2) != 1)
//		{
//			a2--;
//			b2++;
//		}
//		if (m >= 1000000 || m <= 0)
//		{
//			printf("INCORRECT INPUT!");
//			break;
//		}
//		if (b1 > b2)
//		{
//			printf("%d %d\n",a2,b2);
//		}
//		else if(b1 < b2)
//		{
//			printf("%d %d\n", a1, b1);
//		}
//		else
//		{
//			printf("%d %d\n", a2, b2);
//		}
//	
//	}
//	return 0;
//}

#include<stdio.h>
#include<string.h>
void bubbleSort_int(int arr[], int len)//ð������_int
{
	int i = 0, j = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void bubbleSort_double(double arr[], int len)//ð������_double
{
	int i = 0, j = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void func_int(int arr[], int size)
{
	//��ѡ��arr�е���������С�������
	int i = 0, j = 0;
	int arr_odd[1001] = { 0 };
	for (i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr_odd[j] = arr[i];
			j++;
		}
	}
	bubbleSort_int(arr_odd, j);
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr_odd[i]);
	}
}
void func_double(double arr[], int size)
{
	//��arr�еĸ����������������벢����������
	//��̫�ԣ�һ���޸�
	int i = 0;
	int arr_new[1001] = { 0 };
	for (i = 0; i < size; i++)
	{
		if (arr[i] - (int)arr[i] >= 0.5)
		{
			arr_new[i] = (int)arr[i] + 1;
		}
		else
		{
			arr_new[i] = (int)arr[i];
		}
		func_int(arr_new, size);
	}
}
void func_char(char arr[], int size)
{
	//��ѡ�����ִ���Ϊ�������ַ�������ASCII���С�������
	//Ҫȥ�أ�����
	int i = 0, j = 0;
	int arr_odd[1001] = { 0 };
	
}
int main()
{
	//��ʼ��������
	int m, n;
	scanf("%d%d", &m, &n);
	int arr1[1001] = { 0 };
	double arr2[1001] = { 0 };
	char arr3[1001] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &arr2[i]);
	}
	scanf("%s", arr3);
	//���ú���
	func_int(arr1, m);
	printf("\n");
	func_double(arr2, n);//��̫�ԣ�һ���޸�
	printf("\n");
	func_char(arr3, strlen(arr3));//Ҫȥ�أ�����

	return 0;
}

////�������  ������
//for (i = 0; i < m; i++)
//{
//	printf("%d ", arr1[i]);
//}
//printf("\n");
//for (i = 0; i < n; i++)
//{
//	printf("%lf", arr2[i]);
//}
//printf("\n");
//printf("%s", arr3);



