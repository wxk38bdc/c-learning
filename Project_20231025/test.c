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

//void bubbleSort_double(double arr[], int len)//ð������_double
//{
//	int i = 0, j = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				double tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//#include<stdio.h>
//#include<string.h>
////����������������ڹ���������
//void bubbleSort_int(int arr[], int len)//ð������_int
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
//void func_int(int arr[], int size)
//{
//	//��ѡ��arr�е���������С�������
//	int i = 0, j = 0;
//	int arr_odd[1001] = { 0 };
//	int flag = 0;
//	for (i = 0; i < size; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			arr_odd[j] = arr[i];
//			j++;
//			flag = 1;
//		}
//	}
//	bubbleSort_int(arr_odd, j);
//	if (flag == 1)
//	{
//		for (i = 0; i < j; i++)
//		{
//			printf("%d ", arr_odd[i]);
//		}
//	}
//	else
//	{
//		printf("No Odd!");
//	}
//	
//}
//void func_double(double arr2[], int size)
//{
//	//��arr�еĸ����������������벢����������
//	int i = 0;
//	int arr_new[1001] = { 0 };
//	for (i = 0; i < size; i++)
//	{
//		if (arr2[i] - (int)arr2[i] >= 0.5)
//		{
//			arr_new[i] = (int)arr2[i] + 1;
//		}
//		else
//		{
//			arr_new[i] = (int)arr2[i];
//		}
//	}
//	func_int(arr_new, size);
//}
//void func_char(char arr[], int size)
//{
//	//��ѡ�����ִ���Ϊ�������ַ�������ASCII���С�������
//	int i = 0, j = 0;
//	int arr_ASCII[128] = { 0 };
//	for (i = 0; i < size; i++)
//	{
//		arr_ASCII[(int)arr[i]]++;
//	}
//	int flag = 0;
//	char arr_end[128] = { 0 };
//	j = 0;
//	for (i = 0; i < 128; i++)
//	{
//		if (arr_ASCII[i] % 2 == 1)
//		{
//			arr_end[j] = (char)i;
//			j++;
//			flag = 1;
//		}
//	}
//	arr_end[j] = '\0';
//	if (flag == 1)
//	{
//		j = 0;
//		while (arr_end[j] != '\0')
//		{
//			printf("%c ", arr_end[j]);
//			j++;
//		}
//	}
//	else
//	{
//		printf("No Odd!");
//	}
//}
//int main()
//{
//	//��ʼ��������
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int arr1[1001] = { 0 };
//	double arr2[1001] = { 0 };
//	char arr3[1001] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", &arr2[i]);
//	}
//	scanf("%s", arr3);
//	//���ú���
//	func_int(arr1, m);
//	printf("\n");
//	func_double(arr2, n);
//	printf("\n");
//	func_char(arr3, strlen(arr3));
//
//	return 0;
//}

////��ChatGPTд��
////What f**k!S**t!
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h> // ���ͷ�ļ���ʹ��malloc��free
//
//struct Student {
//    char id[31];
//    char name[31];
//    double mathScore;
//    double chineseScore;
//    double englishScore;
//};
//
//void sortStudents(struct Student students[], int n, int rankingBasis) {
//    // ���ֲ���
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    while (n--) {
//        int numStudents;
//        scanf("%d", &numStudents);
//
//        // ʹ�ö�̬�ڴ����������ѧ���ṹ�������
//        struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));
//
//        for (int i = 0; i < numStudents; i++) {
//            scanf("%s %s %lf %lf %lf",
//                students[i].id, students[i].name,
//                &students[i].mathScore, &students[i].chineseScore, &students[i].englishScore);
//        }
//
//        int rankingBasis;
//        scanf("%d", &rankingBasis);
//
//        if (rankingBasis < 1 || rankingBasis > 3) {
//            printf("ERROR\n");
//        }
//        else {
//            sortStudents(students, numStudents, rankingBasis);
//
//            for (int i = 0; i < numStudents; i++) {
//                printf("%s %s\n", students[i].id, students[i].name);
//            }
//        }
//
//        // �ͷŶ�̬������ڴ�
//        free(students);
//    }
//
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
////version1
//void bubbleSort_double(double arr[], int len)//ð������_double//�Ӵ�С
//{
//	int i = 0, j = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				double tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void bubbleSort_long(long arr[], int len)//ð������_long//��С����
//{
//	int i = 0, j = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				long tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct student
//{
//	long id;
//	char name[35];
//	double math;
//	double chinese;
//	double english;
//}arr1[101],arr2[101];
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	scanf("%d", &n);
//	//����
//	for (i = 0; i < n; i++)
//	{
//		scanf("%ld %s %lf %lf %lf", &arr1[i].id, arr1[i].name, &arr1[i].math, &arr1[i].chinese, &arr1[i].english);
//	}
//	//������ѧ������ѧ�Ŵ�С��������
//	long arr_id[101] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		arr_id[i] = arr1[i].id;
//	}
//	bubbleSort_long(arr_id, n);
//	//����ѧ�Ŵ�С����ѧ����Ϣ����arr2��
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)//�ҵ���Ӧ��ѧ��
//		{
//			if (arr_id[i] == arr1[j].id)
//			{
//				arr2[i].id = arr1[j].id;
//				strcpy(arr2[i].name, arr1[j].name);
//				arr2[i].math = arr1[j].math;
//				arr2[i].chinese = arr1[j].chinese;
//				arr2[i].english = arr1[j].english;
//				break;
//			}
//		}
//	}
//	int choice = 0;
//	scanf("%d", &choice);
//	if (choice > 3 || choice < 1)
//	{
//		printf("ERROR\n");
//	}
//	if (choice == 1)//������ѧ�ɼ�����
//	{
//		double arr_math[101] = { 0 };
//		for (i = 0; i < n; i++)
//		{
//			arr_math[i] = arr2[i].math;
//		}
//		bubbleSort_double(arr_math, n);
//		//�ҵ���Ӧ��ѧ��,���гɼ���ͬ������ѧ�Ŵ�С��������
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)//�ҵ���Ӧ��ѧ��
//			{
//				if (arr_math[i] == arr2[j].math)
//				{
//					printf("%ld %s\n", arr2[j].id, arr2[j].name);
//					arr2[j].math = -1;//����ѧ���ĳɼ���Ϊ-1����ֹ�ظ����
//					break;
//				}
//			}
//		}
//	}
//	else if (choice == 2)//�������ĳɼ�����
//	{
//		double arr_chinese[101] = { 0 };
//		for (i = 0; i < n; i++)
//		{
//			arr_chinese[i] = arr2[i].chinese;
//		}
//		bubbleSort_double(arr_chinese, n);
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)//�ҵ���Ӧ��ѧ��
//			{
//				if (arr_chinese[i] == arr2[j].chinese)
//				{
//					printf("%ld %s\n", arr2[j].id, arr2[j].name);
//					arr2[j].chinese = -1;//����ѧ���ĳɼ���Ϊ-1����ֹ�ظ����
//					break;
//				}
//			}
//		}
//	}
//	else if (choice == 3)//����Ӣ��ɼ�����
//	{
//		double arr_english[101] = { 0 };
//		for (i = 0; i < n; i++)
//		{
//			arr_english[i] = arr2[i].english;
//		}
//		bubbleSort_double(arr_english, n);
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)//�ҵ���Ӧ��ѧ��
//			{
//				if (arr_english[i] == arr2[j].english)
//				{
//					printf("%ld %s\n", arr2[j].id, arr2[j].name);
//					arr2[j].english = -1;//����ѧ���ĳɼ���Ϊ-1����ֹ�ظ����
//					break;
//				}
//			}
//		}
//	}
//	
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
////version2
//void bubbleSort_double(double arr[], int len) {
//    int i, j;
//    for (i = 0; i < len - 1; i++) {
//        for (j = 0; j < len - 1 - i; j++) {
//            if (arr[j] < arr[j + 1]) {
//                double tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//
//struct Student {
//    char id[35];
//    char name[35];
//    double math;
//    double chinese;
//    double english;
//};
//
//int main() 
//{
//    int n;
//    scanf("%d", &n);
//
//    struct Student arr[101];
//    int outputStatus[101] = { 0 }; // 0��ʾδ�����1��ʾ�����
//
//    for (int i = 0; i < n; i++) 
//    {
//        scanf("%s %s %lf %lf %lf", arr[i].id, arr[i].name, &arr[i].math, &arr[i].chinese, &arr[i].english);
//    }
//
//    int choice;
//    scanf("%d", &choice);
//
//    if (choice < 1 || choice > 3) 
//    {
//        printf("ERROR\n");
//        return 1;
//    }
//
//    double scores[101];
//    for (int i = 0; i < n; i++) 
//    {
//        if (choice == 1) 
//        {
//            scores[i] = arr[i].math;
//        }
//        else if (choice == 2) 
//        {
//            scores[i] = arr[i].chinese;
//        }
//        else if (choice == 3) 
//        {
//            scores[i] = arr[i].english;
//        }
//    }
//
//    bubbleSort_double(scores, n);
//
//    for (int i = 0; i < n; i++) 
//    {
//        for (int j = 0; j < n; j++) 
//        {
//            if (scores[i] == arr[j].math && choice == 1) 
//            {
//                if (outputStatus[j] == 0) 
//                {
//                    printf("%s %s\n", arr[j].id, arr[j].name);
//                    outputStatus[j] = 1;
//                }
//            }
//            else if (scores[i] == arr[j].chinese && choice == 2)
//            {
//                if (outputStatus[j] == 0)
//                {
//                    printf("%s %s\n", arr[j].id, arr[j].name);
//                    outputStatus[j] = 1;
//                }
//            }
//            else if (scores[i] == arr[j].english && choice == 3) 
//            {
//                if (outputStatus[j] == 0) 
//                {
//                    printf("%s %s\n", arr[j].id, arr[j].name);
//                    outputStatus[j] = 1;
//                }
//            }
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
////version3
//void bubbleSort_double(double arr[], int len) {
//    int i, j;
//    for (i = 0; i < len - 1; i++) {
//        for (j = 0; j < len - 1 - i; j++) {
//            if (arr[j] < arr[j + 1]) {
//                double tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//
//struct Student {
//    char id[35];
//    char name[35];
//    double math;
//    double chinese;
//    double english;
//};
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    struct Student arr[101];
//
//    for (int i = 0; i < n; i++) {
//        scanf("%s %s %lf %lf %lf", arr[i].id, arr[i].name, &arr[i].math, &arr[i].chinese, &arr[i].english);
//    }
//
//    int choice;
//    scanf("%d", &choice);
//
//    if (choice < 1 || choice > 3) {
//        printf("ERROR\n");
//        return 1;
//    }
//
//    double scores[101];
//    for (int i = 0; i < n; i++) {
//        if (choice == 1) {
//            scores[i] = arr[i].math;
//        }
//        else if (choice == 2) {
//            scores[i] = arr[i].chinese;
//        }
//        else if (choice == 3) {
//            scores[i] = arr[i].english;
//        }
//    }
//
//    bubbleSort_double(scores, n);
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (scores[i] == arr[j].math && choice == 1) {
//                printf("%s %s\n", arr[j].id, arr[j].name);
//                arr[j].math = -1; // ����ѧ���ĳɼ����Ϊ-1����ֹ�ظ����
//                break;
//            }
//            else if (scores[i] == arr[j].chinese && choice == 2) {
//                printf("%s %s\n", arr[j].id, arr[j].name);
//                arr[j].chinese = -1; // ����ѧ���ĳɼ����Ϊ-1����ֹ�ظ����
//                break;
//            }
//            else if (scores[i] == arr[j].english && choice == 3) {
//                printf("%s %s\n", arr[j].id, arr[j].name);
//                arr[j].english = -1; // ����ѧ���ĳɼ����Ϊ-1����ֹ�ظ����
//                break;
//            }
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
////version4_error
//void bubbleSort_double(double arr[], int len, int indexes[]) {
//    int i, j;
//    for (i = 0; i < len - 1; i++) {
//        for (j = 0; j < len - 1 - i; j++) {
//            if (arr[j] < arr[j + 1] || (arr[j] == arr[j + 1] && strcmp((char)arr[indexes[j]], (char)arr[indexes[j + 1]]) > 0)) {
//                double tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//                int tmpIndex = indexes[j];
//                indexes[j] = indexes[j + 1];
//                indexes[j + 1] = tmpIndex;
//            }
//        }
//    }
//}
//
//struct Student {
//    char id[35];
//    char name[35];
//    double math;
//    double chinese;
//    double english;
//};
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    struct Student arr[101];
//    int outputStatus[101] = { 0 }; // 0��ʾδ�����1��ʾ�����
//
//    for (int i = 0; i < n; i++) {
//        scanf("%s %s %lf %lf %lf", arr[i].id, arr[i].name, &arr[i].math, &arr[i].chinese, &arr[i].english);
//    }
//
//    int choice;
//    scanf("%d", &choice);
//
//    if (choice < 1 || choice > 3) {
//        printf("ERROR\n");
//        return 1;
//    }
//
//    double scores[101];
//    for (int i = 0; i < n; i++) {
//        if (choice == 1) {
//            scores[i] = arr[i].math;
//        }
//        else if (choice == 2) {
//            scores[i] = arr[i].chinese;
//        }
//        else if (choice == 3) {
//            scores[i] = arr[i].english;
//        }
//    }
//
//    int indexes[101];
//    for (int i = 0; i < n; i++) {
//        indexes[i] = i;
//    }
//
//    bubbleSort_double(scores, n, indexes);
//
//    for (int i = 0; i < n; i++) {
//        if (outputStatus[indexes[i]] == 0) {
//            printf("%s %s\n", arr[indexes[i]].id, arr[indexes[i]].name);
//            outputStatus[indexes[i]] = 1;
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//void bubbleSort_double(double arr[], int len, int indexes[]) {
//    int i, j;
//    for (i = 0; i < len - 1; i++) {
//        for (j = 0; j < len - 1 - i; j++) {
//            if (arr[j] < arr[j + 1] || (arr[j] == arr[j + 1] && indexes[j] > indexes[j + 1])) {
//                double tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//                int tmpIndex = indexes[j];
//                indexes[j] = indexes[j + 1];
//                indexes[j + 1] = tmpIndex;
//            }
//        }
//    }
//}
//
//struct Student {
//    long long id;  // ѧ�����͸�Ϊ long long
//    char name[35];
//    double math;
//    double chinese;
//    double english;
//};
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    struct Student arr[101];
//    int outputStatus[101] = { 0 }; // 0��ʾδ�����1��ʾ�����
//
//    for (int i = 0; i < n; i++) {
//        scanf("%lld %s %lf %lf %lf", &arr[i].id, arr[i].name, &arr[i].math, &arr[i].chinese, &arr[i].english);
//    }
//
//    int choice;
//    scanf("%d", &choice);
//
//    if (choice < 1 || choice > 3) {
//        printf("ERROR\n");
//        return 1;
//    }
//
//    int indexes[101];
//    for (int i = 0; i < n; i++) {
//        indexes[i] = i;
//    }
//
//    bubbleSort_double(indexes, n, indexes); // ���Ȱ�ѧ������
//
//    double scores[101];
//    for (int i = 0; i < n; i++) {
//        if (choice == 1) {
//            scores[i] = arr[indexes[i]].math;
//        }
//        else if (choice == 2) {
//            scores[i] = arr[indexes[i]].chinese;
//        }
//        else if (choice == 3) {
//            scores[i] = arr[indexes[i]].english;
//        }
//    }
//
//    bubbleSort_double(scores, n, indexes); // Ȼ���ճɼ�����
//
//    for (int i = 0; i < n; i++) {
//        if (outputStatus[indexes[i]] == 0) {
//            printf("%lld %s\n", arr[indexes[i]].id, arr[indexes[i]].name);
//            outputStatus[indexes[i]] = 1;
//        }
//    }
//
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
////����һ���ַ������ҳ����в������ظ��ַ�����Ӵ��ĳ���
////version1_error
//int getMax(int arr[], int len)
//{
//	int max = arr[0];
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//int main()
//{
//	char arr[10000]={0};
//	scanf("%s",arr);
//	int len=strlen(arr);
//	int i = 0, j = 0, k = 0;
//	int max=0;
//	int arrnum[10000] = { 0 };
//	for (i = 0; i < len; i++)
//	{
//		int flag=0;
//		for (j = i + 1; j < len; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				flag=1;
//				arrnum[k] = j - i;
//				k++;
//				break;
//			}
//		}
//	}
//	printf("%d",getMax(arrnum,k));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
////version2_correct
//int main() 
//{
//    char arr[10000] = { 0 };
//    scanf("%s", arr);
//    int len = strlen(arr);
//    int max_length = 0;
//    int current_length = 0;
//    int last_index[256]; // ���ڼ�¼ÿ���ַ��ϴγ��ֵ�λ��
//
//    // ��ʼ�� last_index ����
//    for (int i = 0; i < 256; i++)
//    {
//        last_index[i] = -1;
//    }
//
//    int start = 0; // ��ǰ���ظ��Ӵ�����ʼλ��
//
//    for (int i = 0; i < len; i++) 
//    {
//        int prev = last_index[arr[i]]; // ��ȡ��ǰ�ַ��ϴγ��ֵ�λ��
//
//        if (prev == -1 || prev < start)
//        {
//            current_length = i - start + 1;
//        }
//        else
//        {
//            start = prev + 1;
//            current_length = i - start + 1;
//        }
//
//        last_index[arr[i]] = i; // �����ַ���������λ��
//
//        if (current_length > max_length)
//        {
//            max_length = current_length;
//        }
//    }
//
//    printf("%d", max_length);
//
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<math.h>
////ʵ��2������ת��Ϊ10������
//int twototen(int n)
//{
//	int arr[100] = { 0 };
//	int i = 0;
//	while (n != 0)
//	{
//		arr[i] = n % 10;
//		n /= 10;
//		i++;
//	}
//	int sum = 0;
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		sum += arr[j] * pow(2, j);
//	}
//	return sum;
//}
//int tentotwo(int n)//ʵ��10������ת��Ϊ2������
//{
//	int arr[100] = { 0 };
//	int i = 0;
//	while (n != 0)
//	{
//		arr[i] = n % 2;
//		n /= 2;
//		i++;
//	}
//	int sum = 0;
//	int j = 0;
//	for (j = i - 1; j >= 0; j--)
//	{
//		sum = sum * 10 + arr[j];
//	}
//	return sum;
//
//}
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d%d", &n, &m);
//	int sum=twototen(m)+twototen(n);
//	//�����������λ���������4λǰ�油0���������4λֻ�������λ
//	if (tentotwo(sum) < 1000)
//	{
//		printf("%04d", tentotwo(sum));
//	}
//	else
//	{
//		printf("%04d", tentotwo(sum) % 10000);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<math.h>
////ʵ��2������ת��Ϊ10������,������벻�Ƕ�������������-1
//long long twototen(long long n)
//{
//	long long sum = 0;
//	int i = 0;
//	while (n != 0)
//	{
//		if (n % 10 != 0 && n % 10 != 1)
//		{
//			return -1;
//		}
//		sum += (n % 10) * pow(2, i);
//		n /= 10;
//		i++;
//	}
//	return sum;
//}
//int main()
//{
//	long long n;
//	scanf("%lld", &n);
//	if(twototen(n)==(long long)-1)
//		printf("ERROR");
//	else
//		printf("%lld", twototen(n));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<math.h>
////ʵ��2������ת��Ϊ10������,������벻�Ƕ������������ERROR
//int main()
//{
//	//�Ƚ��������������ַ�����
//	 char arr[30]= { 0 };
//	 scanf("%s", arr);
//	 int len = strlen(arr);
//	 int i = 0;
//	 int sum = 0;
//	 for (i = 0; i < len; i++)
//	 {
//		 if (arr[i] != '0' && arr[i] != '1')
//		 {
//			 printf("ERROR");
//			 return 0;
//		 }
//		 sum += (arr[i] - '0') * pow(2, len - 1 - i);
//	 }
//	 printf("%d", sum);
//	 return 0;
//}

//#include<stdio.h>
//#include<string.h>
////#470Ԫ�ز���
//int bubbleSort_int(int arr[], int len)//ð������_int//��С����
//{
//	int i = 0, j = 0;
//	int flag = 0;//�ж�����������Ƿ�����
//	for (i = 0; i < len - 1; i++)
//	{
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 1;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	return flag;
//}
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	scanf("%d",&n);
//	int arr[15] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int numberToFind = 0;
//	scanf("%d", &numberToFind);
//	//����һ���µ����飬��ԭ�����е�Ԫ�ش���������
//	int arr_new[15] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		arr_new[i] = arr[i];
//	}
//	bubbleSort_int(arr_new, n);
//	//��ӡ����������
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr_new[i]);
//	}
//	printf("\n");
//	//��������Ԫ���Ƿ�����
//	if (bubbleSort_int(arr, n) == 0)
//	{
//		printf("ordered ");
//	}
//	else
//	{
//		printf("unordered ");
//	}
//	//�ж������Ԫ���Ƿ���������
//	int flag = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == numberToFind)
//		{
//			flag = 1;
//			printf("%d ", flag);
//			printf("%d", i);
//			return 0;
//		}
//	}
//	printf("0 -1");
//	return 0;
//}

//#include<stdio.h>
////���������ε������ߣ���Ϊ�������ݣ������ù��ɶ����ж����Ƿ�Ϊֱ�������Ρ��������޷��������������Error������ֱ�����������Yes���������No��
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a=0, b=0, c=0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%d%d", &a, &b, &c);
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
//			{
//				printf("Yes\n");
//			}
//			else
//			{
//				printf("No\n");
//			}
//		}
//		else
//		{
//			printf("Error\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
////���������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <=n; j++)
//		{
//			if(i+j>=2+(n+1)/2 && i + j <= (3*n-1)/2 && i - j <= (n+1)/2-2 && j - i <= (n+1)/2-2)
//				printf(" ");
//			else
//				printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
////�����������
//int main()
//{
//	int A, H, n;//AΪ����Ĺ�������HΪ�����Ѫ����nΪ�����˵�����
//	scanf("%d%d%d", &A, &H, &n);
//	int A_I[100] = { 0 };//A_IΪ�����˵Ĺ�����
//	int H_I[100] = { 0 };//H_IΪ�����˵�Ѫ��
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &A_I[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &H_I[i]);
//	}
//	i = 0, j = 0;
//	while (1)
//	{
//		H -= A_I[j];
//		H_I[j] -= A;
//		if (H_I[j] < 1)
//		{
//			j++;
//		}
//		if(H<1&&j<n)
//		{
//			printf("NO");
//			return 0;
//		}
//		if (j == n)
//		{
//			printf("YES");
//			return 0;
//		}
//	}
//}


//�ǵ��ύ���룡
#include<stdio.h>
//#471����ʱ���
int isPalindrome(int a,int b)
{
	int arr_a[2] = { 0 };
	int arr_b[2] = { 0 };
	int i = 0;
	while (a != 0)
	{
		arr_a[i] = a % 10;
		a /= 10;
		i++;
	}
	int j = 0;
	while (b != 0)
	{
		arr_b[j] = b % 10;
		b /= 10;
		j++;
	}
	if (arr_a[0] == arr_b[1] && arr_a[1] == arr_b[0])
		return 1;
	else
		return 0;
}
int main()
{
	int n = 0, i = 0, j = 0;
	scanf("%d", &n);
	while (n--)
	{
		int hour = 0, minute = 0;
		scanf("%d:%d", &hour, &minute);
		while (1)
		{
			minute++;
			if (minute == 60)
			{
				hour++;
				minute = 0;
			}
			if (hour == 24)
			{
				hour = 0;
			}
			if (isPalindrome(hour, minute))
			{
				printf("%02d:%02d\n", hour, minute);
				break;
			}
		}
	}
	return 0;
}