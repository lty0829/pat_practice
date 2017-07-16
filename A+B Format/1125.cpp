/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int n;
int a[10001];
int main() {
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	int len = a[0];
	for (int i = 1; i < n; i++)
	{
		len = (len + a[i]) / 2;
	}
	printf("%d\n", len);
	return 0;
}*/
