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

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;