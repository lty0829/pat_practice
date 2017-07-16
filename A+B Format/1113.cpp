/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int n;
long long a[100001];
int main() {
	scanf("%d", &n);
	int t;
	t = n / 2;
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a, a + n);
	long long sum1=0, sum2=0;
	for (int i = 0; i < t; i++)
	{
		sum1 += a[i];
	}
	for (int i = t; i < n; i++)
	{
		sum2 += a[i];
	}
	printf("%d %lld\n", n-2*t, sum2 - sum1);
	return 0;



}*/