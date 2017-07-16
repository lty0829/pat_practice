/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
using namespace std;
int n,m,r;
int sum=0;
int a[100002];
int main() {
	scanf("%d", &n);
	for (int i = 1; i <=n; i++)
	{
		scanf("%d", &r);
		sum += r;
		a[i] = sum;
	}
	scanf("%d", &m);
	int x, y,ans;
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d", &x,&y);
		if (y < x) {
			int d = x;
			x = y;
			y = d;
		}
		ans = a[y - 1] - a[x - 1];
		printf("%d\n", a[n] - ans>ans ? ans : a[n] - ans);
	}
}*/