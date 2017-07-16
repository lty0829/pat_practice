/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int a[100001];
int m, n;
bool is_prime(int r) {
	if (r < 2)return false;
	if (r == 2 || r == 3) return true;
	for (int i = 2;i*i <= r;i++) {
		if (r % i == 0)
			return false;
	}
	return true;
}
int main() {
	scanf("%d%d", &m, &n);
	int j = 0;
	while (!is_prime(m)) {
		m ++;
	}
	int position, y;
	for (int i = 0;i < n;i++) {
		scanf("%d", &y);
		for (j = 0; j < m; j++)
		{
			if (a[(y + j*j) % m] == 0) {
				cout << (y + j*j) % m << ((i!=n-1) ? " " : "\n");
				a[(y + j*j) % m] = 1;
				break;
			}
		}
		if (j == m)
			cout << "-" << ((i != n - 1) ? " " : "\n");
	}
	return 0;
}*/