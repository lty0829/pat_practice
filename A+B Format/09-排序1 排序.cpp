/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int n,a[100001];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	printf("%d", a[0]);
	for (int i = 1; i < n; i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}*/