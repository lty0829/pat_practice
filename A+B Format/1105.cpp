/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int n, m;
int N;
int a[10001];
int b[10001][10001];
int getm(int e) {
	int t = sqrt(e);
	while (e%t != 0) {
		t++;
	}
	if (t >= e / t) {
		return t;
	}
	return e / t;
}
bool cmp(int x, int y) {
	return x > y;
}
int main() {
	scanf("%d", &N);
	m = getm(N);
	n = N / m;
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a+1, a + N+1, cmp);
	int c = 1;
	int x = 1, y = 1;
	for (int i = 1; i <= N; i++)
	{
		if ((x > n&&y == 1) || (b[x][y] != 0 && c == 1)) {
			c = 2;
			x = x - 1;
			y = y + 1;
		}
		else if((x==n&&y>m)||b[x][y]!=0&&c==2){
			c = 3;
			x = x - 1;
			y = y - 1;
		}
		else if ((x <= 0&& y == m) || b[x][y] != 0 && c == 3) {
			c = 4;
			x = x + 1;
			y = y - 1;
		}
		else if ((x == 1 && y <=0) || b[x][y] != 0 && c == 4) {
			c = 1;
			x = x + 1;
			y = y + 1;
		}
		b[x][y] = a[i];
		if (c == 1) {
			x = x + 1;
		}
		else if (c == 2) {
			y = y + 1;
		}
		else if (c == 3) {
			x = x - 1;
		}
		else if (c == 4) {
			y = y - 1;
		}
	}
	for (int i = 1; i <=m ; i++)
	{
		for (int j = 1;j <= n;j++) {
			if (j == 1)
				printf("%d", b[j][i]);
			else
				printf(" %d", b[j][i]);
		}
		printf("\n");
	}
}*/