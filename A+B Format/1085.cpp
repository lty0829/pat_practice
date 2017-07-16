/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int n;
long long  p;
long long a[100001];
int bSearch(long long num, int n)
{
	int l = 0, r = n - 1, mid;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (a[mid]>num)
		{
			r = mid - 1;
		}
		else if (a[mid]<num)
		{
			l = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return l;
}
int main() {
	cin >> n >> p;
	for (int i = 0; i <n; i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a, a + n);
	int i;
	long long  tmpMax = 0, resMax=0,m,index;
	for (i = 0; i <n; i++)
	{
		m = a[i] * p;
		index = bSearch(m, n);
		if (a[n - 1] <= m)
		{
			tmpMax = n - 1 - i + 1;
		}
		else
		{
			tmpMax = index - i;
		}
		if (tmpMax>resMax)
		{
			resMax = tmpMax;
		}
	}
		printf("%lld\n", resMax);
	return 0;
}*/