#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//using namespace std;
//int main() {
//	int n, k, sum;
//	cin >> n >> k;
//	sum = n;
//	for (int m; ;) {
//		if (n < k)
//			break;
//		m = n / k;
//		sum = sum + m;
//		n = n % k;
//	}
//	cout << sum;
//}

////这题不这样写简直没办法
//int main() 
//{
//	string arr[105];
//	string s;
//	int n = 0;
//	while (cin >> s)
//	{
//		n++;
//		arr[n] = s;
//	}
//	//You 0 want 1 someone 2 to 3 help 4 you 5
//	//You 6
//	//I 7
//	for (int i = 1; i <= n - 2; i++) 
//	{//注意，读入的时候将想被替换的单词放在了 n-1 的位置，替换的单词放在了 n 的位置，所以循环一直到 n-2 即可。
//		if (arr[i] == arr[n - 1])
//		{
//			cout << arr[n] << " ";//判断到要被替换的单词就输出替换它的单词。
//		}
//		else
//		{
//			cout << arr[i] << " ";
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//#include <iostream>
//#include <cstring>
//using namespace std;
//int main() {
//    char a[5];
//    long long i[5];
//    char b[5];
//    long long j[5];
//    cin >> a >> b;
//    long long x = 1, y = 1;
//    for (int m = 0; m < strlen(a); m++) {
//
//        i[m] = int(a[m]) - 64;
//        x = i[m] * x;
//
//    }
//    for (int n = 0; n < strlen(b); n++) {
//        j[n] = int(b[n]) - 64;
//        y = j[n] * y;
//    }
//
//    if ((x % 47) == (y % 47))
//        cout << "GO";
//    else
//        cout << "STAY";
//    return 0;
//}

//
//int main() {
//	char a[100] = { 0 };
//	int i[100] = { 0 };
//	char b[100] = { 0 };
//	int j[100] = { 0 };
//	scanf("%s %s", a, b);
//	int x = 1, y = 1;
//	for (int m = 0; m < strlen(a); m++) {
//
//		i[m] = a[m] - 64;
//		x = i[m] * x;
//		cout << i[m] << endl;
//	}
//	for (int n = 0; n < strlen(b); n++) {
//		j[n] = (b[n]) - 64;
//		y = j[n] * y;
//		cout << j[n] << endl;
//	}
//
//	if ((x % 47) == (y % 47)) {
//		cout << "GO";
//	}
//	else {
//		cout << "STAY";
//	}
//	return 0;
//}

//int main()
//{
//	char s1[100];
//	char s2[100];
//	cin >> s1;
//	cout << s1 << endl;
//	cin.sync();//清空缓冲区
//	cin.getline(s2, 100);
//	cout << s2 << endl;
//	return 0;
//}  

//int main()
//{
//	char str1[20] = "aellooo";
//	char str2[] = "hello";
//	//strcat(str1, str2); //str1会变为We arecsdn!Hello!
//	cout << strcmp(str1,str2) << endl;
//	return 0;
//}

////自己要经常回味这个代码，要确保自己理解原理，能写出来，能举一反三
//int main()//大数相加
//{
//	char a1[200] = { 0 }, b1[200] = { 0 };
//	int a[200] = { 0 }, b[200] = { 0 }, c[200] = { 0 };
//	int a1_len, b1_len, lenc, i, x;
//	scanf("%s", a1);//输入第一个数
//	scanf("%s", b1);//输入第二个数
//	a1_len=strlen(a1);//第一个数的位数
//	b1_len=strlen(b1);//第二个数的位数
//	for (i = 0; i < a1_len; i++)
//	{
//		a[a1_len - i] = a1[i] - '0';//将第一个数逆序存入数组a
//	}
//	for (i = 0; i < b1_len; i++)
//	{
//		b[b1_len - i] = b1[i] - '0';//将第二个数逆序存入数组b
//	}
//	lenc = 1;
//	x = 0;
//	while (lenc <= a1_len || lenc <= b1_len)
//	{
//		c[lenc] = a[lenc] + b[lenc] + x;//从低位开始相加
//		x = c[lenc] / 10;//进位
//		c[lenc] = c[lenc] % 10;//留下该位的一位数
//		lenc++;
//	}
//	c[lenc] = x;//最高位进位
//	if (c[lenc] == 0)
//	{
//		lenc--;
//	}
//	for (i = lenc; i >= 1; i--)
//	{
//		printf("%d", c[i]);
//	}
//	printf("\n");
//	return 0;
//}

//struct student
//{
//	char name[20];
//	int age;
//	int score;
//	int height;
//};
//int main()
//{
//	const int n = 6;
//	int arr[n]= { 1,2,3 };
//	printf("%d", arr[0]);
//	return 0;
//}

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;