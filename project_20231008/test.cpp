#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() {
	int n, k=0, sum;
	cin >> n, k;
	sum = n;
	for (int m; ;) {
		if (n < k)
			break;
		m = n / k;
		sum = sum + m;
		n = n % k;



	}
	cout << sum;


}