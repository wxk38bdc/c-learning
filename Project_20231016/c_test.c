#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", n);
//	return 0;
//}

//int get_max(int arr[], int len)
//{
//	int max = arr[0];
//	for (int i = 1; i < len; i++)
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
//	char arr[1001] = { 0 };
//	int count[26] = { 0 };
//	scanf("%s", arr);
//	int len = strlen(arr);
//	for (int i = 0; i < len; i++)
//	{
//		count[arr[i] - 'a']++;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		if (count[i] == get_max(count, 26))
//		{
//			printf("%c\n%d\n", i + 'a', count[i]);
//			break;
//		}
//	}
//	return 0;
//}

////��;���ϵĴ���
//int main()
//{
//	int Case=0;
//	scanf("%d", &Case);
//	//��ʼ�����鲢����
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr_total[100009] = { 0 };
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int arr_add[100009] = { 0 };
//	return 0;
//}

//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int is_huiwenshu(int* arr, int k)
//{
//	int left = 0, right = k - 1;
//	int flag = 1; // ��ʼ��Ϊ1
//	while (left < right)
//	{
//		if (arr[left] != arr[right])
//		{
//			return 0; // ֱ�ӷ���0�����ټ����ж�
//		}
//		left++;
//		right--;
//	}
//	return flag;
//}
//
//int main()
//{
//	int n = 0, count = 0, i = 0, k = 0;//k������¼λ��
//	scanf("%d", &n);
//	for (int j = 11; j<=n; j++)
//	{
//		k = 0;
//		int arr[5] = { 0 };
//		int tmp = j;
//		while (tmp)
//		{
//			arr[k] = tmp % 10;
//			tmp /= 10;
//			k++;
//		}
//		if (is_huiwenshu(arr,k) == 1 && is_prime(j) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	for (int i = 5; i <=n; i+=2)
//	{
//		if (is_prime(i) == 1 && is_prime(i - 2) == 1)
//		{
//			printf("%d %d\n", i - 2, i);
//			count++;
//		}
//	}
//	if(count == 0)
//	{
//		printf("empty\n");
//	}
//	return 0;
//}

//�Ȼ�һ��
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[210] = { 0 };
//	//�����ַ���
//	scanf("%[^\n]", arr);
//	//��ȡ�ַ�������
//	int len = strlen(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//void replaceSubstring(char* original, const char* find, const char* replace) {
//    char newString[1000]; // �ʵ������㹻��Ļ�����
//    char* start = original;
//    while ((start = strstr(start, find))) {
//        strncpy(newString, original, start - original); // ����ǰ�벿��
//        newString[start - original] = '\0'; // �����ַ���ĩβ��� null ��ֹ��
//        strcat(newString, replace); // ����滻�ַ���
//        strcat(newString, start + strlen(find)); // ���ʣ�ಿ��
//        strcpy(original, newString); // �����ַ������ƻ�ԭʼ�ַ���
//        start += strlen(replace); // �ƶ�����һ��ƥ��λ��
//    }
//}
//
//int main() {
//    char str[] = "This is a test. This is only a test.";
//    const char* find = "is";
//    const char* replace = "was";
//    replaceSubstring(str, find, replace);
//    printf("%s\n", str);
//    return 0;
//}

//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int reverse_num(int n)
//{
//	int tmp = 0;
//	while (n)
//	{
//		tmp = tmp * 10 + n % 10;
//		n /= 10;
//	}
//	return tmp;
//}
//int main()
//{
//	int m = 0, n = 0, count = 0, count_num[100000] = { 0 };
//	scanf("%d %d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		if (is_prime(i) == 1&&is_prime(reverse_num(i))==1)
//		{
//			count_num[count] = i;
//			count++;
//		}
//	}
//	for (int i = 0; i <count-1; i++)
//	{
//		printf("%d,", count_num[i]);
//	}
//	if (count != 0)
//	{
//		printf("%d", count_num[count - 1]);
//	}
//	if(count==0)
//	{
//		printf("No");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1, t = 0;
//	scanf("%d", &t);
//	int A = 0, B = 0;
//	while (n <= t)
//	{
//		int arr[100] = { 0 };
//		int count = 0;
//		int i = 0;
//		int count_1 = 0,count_0 = 0;
//		int m = n;
//		while (m)
//		{
//			arr[count] = m % 2;
//			m /= 2;
//			count++;
//		}
//		for (i = 0; i < count; i++)
//		{
//			if (arr[i] == 1)
//			{
//				count_1++;
//			}
//			else
//			{
//				count_0++;
//			}
//		}
//		//printf("%d:%d %d\n", n, count_1, count_0);
//		if (count_1 > count_0)
//		{
//			A++;
//		}
//		else
//		{
//			B++;
//		}
//		n++;
//	}
//	printf("%d %d", A, B);
//	return 0;
//}

//#include<stdio.h>
////�õݹ��㷨��һ��ʮ������ת��Ϊ���������M(M<=16)
////Thanks GItHub copilot!!!I love you!!!
//void convert(int n, int m)
//{
//	if (n>0&&m<=10)
//	{
//		convert(n / m, m);
//		printf("%d", n % m);
//	}
//	else if (n>0&&m>10)
//	{
//		convert(n / m, m);
//		if (n % m >= 10)
//		{
//			printf("%c", n % m - 10 + 'A');
//		}
//		else
//		{
//			printf("%d", n % m);
//		}
//	}
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	convert(n, m);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[10] = { 0 };
//	scanf("%s %s", arr1, arr2);
//	int i = 0, j = 0;
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	int ret1 = 1, ret2 = 1;
//	for (i = 0; i < len1; i++)
//	{
//		ret1*=arr1[i]-'A'+1;
//	}
//	for (j = 0; j < len2; j++)
//	{
//		ret2 *= arr2[j] - 'A' + 1;
//	}
//	if (ret1 % 47 == ret2 % 47)
//	{
//		printf("GO");
//	}
//	else
//	{
//		printf("STAY");
//	}
//	return 0;
//}

////ð������
//void bubblesort(int arr[], int len)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int len = 10;
//	bubblesort(arr, len);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char s[100];
//	scanf("%[^\n]", s);
//	printf("%s", s);
//	return 0;
//}

//int add(int x, int y);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}

//int akm(int m, int n)
//{
//	if (m == 0)
//	{
//		return n + 1;
//	}
//	else if (m > 0 && n == 0)
//	{
//		return akm(m - 1, 1);
//	}
//	else if (m > 0 && n > 0)
//	{
//		return akm(m - 1, akm(m, n - 1));
//	}
//}
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int ret = akm(m, n);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	char arr[100]={0};
//	int k = 0;
//	scanf("%s", arr);
//	scanf("%d", &k);
//	int len = strlen(arr);
//	printf("%c", arr[len-k]);
//	return 0;
//}

//double func(int n, int x)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return 2.0 * x;
//	}
//	else if (n > 1)
//	{
//		return 2.0 * x * func(n - 1, x) - 2.0 * (n - 1) * func(n - 2, x);
//	}
//}
//int main()
//{
//	double x = 0;
//	double n = 0;
//	scanf("%lf %lf", &n, &x);
//	double ret=func(n, x);
//	printf("%.0lf", ret);
//	return 0;
//}

//double func(double n, double x)
//{
//	if (n == 1)
//	{
//		return sqrt(1 + x);
//	}
//	else if (n > 1)
//	{
//		return sqrt(n + func(n - 1, x));
//	}
//}
//int main()
//{
//	double x, n;
//	scanf("%lf %lf", &x, &n);
//	double sum = func(n, x);
//	printf("%.2lf", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int isPrimeNumber(int n)
//{
//	int k = 2;
//	if (n == 2)
//	{
//		return 1;
//	}
//	for (k = 2; k <=sqrt(n); k++)
//	{
//		if (n % k == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (isPrimeNumber(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<windows.h>
//void menu()
//{
//	printf("********************\n");
//	printf("*****  1.play  *****\n");
//	printf("*****  0.exit  *****\n");
//	printf("********************\n");
//}
//void game()
//{
//	//���������
//	int ret = rand() % 100+1;
//	printf("���Լ�����2���Ӻ�ػ���\n");
//	//���
//	system("shutdown -s -t 120");
//	//������
//	while (1)
//	{
//		printf("������һ��������1~100����");
//		int i = 0;
//		scanf("%d", &i);
//		if (i < ret)
//		{
//			printf("̫С��������������\n");
//		}
//		else if (i > ret)
//		{
//			printf("̫����������������\n");
//		}
//		else
//		{
//			printf("�¶���������%d\n", ret);
//			system("shutdown -a");
//			printf("�ػ���ȡ��\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//���������seed
//
//	do
//	{
//		menu();
//
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	}while (input);
//	return 0;
//}

//int main()
//{
//	char arr[100] = { 0 };
//	system("shutdown -s -t 120");//ִ�йػ�
//	while (1)
//	{
//		printf("��ע�⣬��ĵ��Խ���2����֮��ػ���������룺��Ҫ�ػ�ѽ������ȡ���ػ���\n������:>");
//		scanf("%s", &arr);
//		if (strcmp(arr, "abc") == 0)//����������ַ�������if(����)�ͻ�ִ��ȡ���ػ�
//		{
//
//			system("shutdown -a");//ȡ���ػ�
//			break;//����ѭ��
//		}
//		else
//		{
//			printf("������������ԣ�ע�����Ⱑ��");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//int get_gcd(int m, int n)
//{
//	int MIN = (m < n) ? m : n;
//	int MAX = m + n - MIN;
//	int gcd = MIN;
//	for (;; gcd--)
//	{
//		if (MIN % gcd == 0 && MAX % gcd == 0)
//		{
//			return gcd;
//		}
//	}
//}
//int main()
//{
//	int m = 1;
//	int n = 1;
//	scanf("%d%d", &m, &n);
//	int gcd = get_gcd(m, n);
//	printf("%d", gcd);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int monthNumber;
//
//    // ��ʾ�û������·ݺ���
//    printf("�������·ݺ��루1-12����");
//    scanf("%d", &monthNumber);
//
//    // ʹ��if�������·ݺ�������·�����
//    if (monthNumber >= 1 && monthNumber <= 12) {
//        if (monthNumber == 1) {
//            printf("һ�� (January)\n");
//        }
//        else if (monthNumber == 2) {
//            printf("���� (February)\n");
//        }
//        else if (monthNumber == 3) {
//            printf("���� (March)\n");
//        }
//        else if (monthNumber == 4) {
//            printf("���� (April)\n");
//        }
//        else if (monthNumber == 5) {
//            printf("���� (May)\n");
//        }
//        else if (monthNumber == 6) {
//            printf("���� (June)\n");
//        }
//        else if (monthNumber == 7) {
//            printf("���� (July)\n");
//        }
//        else if (monthNumber == 8) {
//            printf("���� (August)\n");
//        }
//        else if (monthNumber == 9) {
//            printf("���� (September)\n");
//        }
//        else if (monthNumber == 10) {
//            printf("ʮ�� (October)\n");
//        }
//        else if (monthNumber == 11) {
//            printf("ʮһ�� (November)\n");
//        }
//        else {
//            printf("ʮ���� (December)\n");
//        }
//    }
//    else {
//        printf("��Ч���·ݺ��룬������1-12֮������֡�\n");
//    }
//
//    // ʹ��switch�������·�����
//    printf("ʹ��switch�������·����ƣ�\n");
//    switch (monthNumber) {
//    case 1:
//        printf("һ�� (January)\n");
//        break;
//    case 2:
//        printf("���� (February)\n");
//        break;
//    case 3:
//        printf("���� (March)\n");
//        break;
//    case 4:
//        printf("���� (April)\n");
//        break;
//    case 5:
//        printf("���� (May)\n");
//        break;
//    case 6:
//        printf("���� (June)\n");
//        break;
//    case 7:
//        printf("���� (July)\n");
//        break;
//    case 8:
//        printf("���� (August)\n");
//        break;
//    case 9:
//        printf("���� (September)\n");
//        break;
//    case 10:
//        printf("ʮ�� (October)\n");
//        break;
//    case 11:
//        printf("ʮһ�� (November)\n");
//        break;
//    case 12:
//        printf("ʮ���� (December)\n");
//        break;
//    default:
//        printf("��Ч���·ݺ��룬������1-12֮������֡�\n");
//        break;
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() 
//{
//    int x = 0;
//    int y = 1;  
//    if (x == 1)
//    {
//        if (y == 1)
//        {
//            printf("Hello world!\n");
//        }
//    }
//    else
//    {
//        printf("Nice to meet you!\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <windows.h>
//
//void menu()
//{
//    printf("********************\n");
//    printf("*****  1.play  *****\n");
//    printf("*****  0.exit  *****\n");
//    printf("********************\n");
//}
//
//void game()
//{
//    // ���������
//    int ret = rand() % 100 + 1;
//    printf("���Լ�����2���Ӻ�ػ���\n");
//
//    // ��㣺ģ����������2���Ӻ�ػ�
//    system("shutdown -s -t 120");
//
//    // ������
//    while (1)
//    {
//        printf("������һ��������1~100����");
//        int i = 0;
//        scanf("%d", &i);
//
//        if (i < ret)
//        {
//            printf("̫С��������������\n");
//        }
//        else if (i > ret)
//        {
//            printf("̫����������������\n");
//        }
//        else
//        {
//            printf("�¶���������%d\n",ret);
//
//            // ȡ��������ػ�����
//            system("shutdown -a");
//            printf("�ػ���ȡ��\n");
//            break;
//        }
//    }
//}
//
//int main()
//{
//    int input = 0;
//
//    // ��ʼ�������������������
//    srand((unsigned int)time(NULL));
//
//    do
//    {
//        menu();
//
//        printf("��ѡ��");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game(); // ������Ϸ
//            break;
//        case 0:
//            printf("��Ϸ����\n");
//            break;
//        default:
//            printf("�������\n");
//            break;
//        }
//    } while (input);
//
//    return 0;
//}

//int main()
//{
//	int arr[100][100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int count[100000] = { 0 };
//	int xia = 0, youxia = 0;
//	int k = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int tmp = 0;
//	}
//	//for (i = 0; i < n; i++)
//	//{
//	//	for (j = 0; j < n; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	char s, t;
//	scanf("%c %c", &s, &t);
//	int num1 = (int)s - 65;
//	int num2 = (int)t - 65;
//	int sum = num1 + num2;
//	if (sum <= 25)
//	{
//		printf("%c", sum + 65);
//	}
//	else
//	{
//		printf("%c%c", sum / 26 + 65, sum % 26 + 65);
//	}
//	return 0;
//}

//int main()
//{
//    long long M, k, n;
//    scanf("%lld %lld %lld", &M, &k, &n);
//    if (n == 2)
//    {
//        printf("%lld", (k * k - 2) % M);
//    }
//    else if (n == 1)
//    {
//		printf("%lld", k % M);
//    }
//	else
//	{
//        long long tmp1 = k;
//        long long tmp2 = k * k - 2;
//        for(int i=3;i<=n;i++)
//		{
//			long long tmp = tmp2;
//			tmp2 = (k * tmp2 - tmp1) % M;
//			tmp1 = tmp;
//		}
//		printf("%lld", tmp2);
//	}
//    return 0;
//}

//int main()
//{
//	int arr[3][3][3] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			for (int k = 0; k < 3; k++)
//			{
//				printf("%d ", arr[i][j][k]);
//			}
//		}
//	}
//	return 0;
//}

//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to NANKAI";
//	char arr2[] = "*****************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(200);
//		arr2[right] = arr1[right];
//		arr2[left] = arr1[left];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(50);
//		if (left <= right)
//		{
//			system("cls");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
////������������ʵ�ֶ��ֲ���
//int main()
//{
//	int arr[] = { 2,4,6,8,12,15,18,23,25,59,108,1024 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int find = 0;
//	int key = (right + left) / 2;
//	scanf("%d", &find);
//	int flag = 0;
//	while (left <= right)
//	{
//		key = (right + left) / 2;
//		if (find == arr[key])
//		{
//			printf("�ҵ��ˣ��±���%d", key);
//			flag = 1;
//			break;
//		}
//		else if (find > arr[key])
//		{
//			left = key + 1;
//		}
//		else if (find < arr[key])
//		{
//			right = key - 1;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("���ź���û�ҵ�");
//	}
//	return 0;
//}

//#include<stdio.h>
////��10��������ƽ��ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%d", sum / 10);
//	return 0;
//}


//int main() 
//{
//	int a = 0;
//	
//	while(scanf("%d", &a)!=EOF)
//	{
//		scanf("%d", &a);
//		int left = 0;
//		int right = a - 1;
//		int i = 0;
//		for (i = 0; i < a; i++)
//		{
//			int j = 0;
//			for (j = 0; j < a; j++)
//			{
//				if (j == left || j == right)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//			left++;
//			right--;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//
//	while(scanf("%d", &a)!=EOF)
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < a; j++)
//		{
//			if(i==0||i==a-1||j==0||j==a-1)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

////����ת��
//int main()
//{
//	int arr[11][11] = { 0 };
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int i = 0, j = 0;
//	for(i=0;i<n;i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (j = 0; j < m; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�����ӡ
//	for (i = 9; i >=0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//#include <stdio.h>
////��������A������B��ֵ
//int main()
//{
//	int A[10] = { 0 };
//	int B[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &A[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &B[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//	printf("����A��Ԫ���ǣ�");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	printf("����A��Ԫ���ǣ�");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	return 0;
//}

//ð������
#include<stdio.h>
void bubbleSort(int arr1[],int sum)
{
	int i = 0, j = 0;
	for (i = 0; i <sum; i++)
	{
		int flag = 1;
		for (j = 0; j < sum - 1 - i; j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				flag = 0;
				int tmp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = tmp;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int n, m;
	int i = 0;
	scanf("%d %d", &n, &m);
	int sum = m + n;
	int arr1[2001] = { 0 };
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = m; i < m + n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	bubbleSort(arr1,sum);
	for (i = 0; i < m+n; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}
