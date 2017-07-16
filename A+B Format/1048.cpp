/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int N, M;
int a[100001];
bool b[501] = { false };
int c[501] = {0};
int main() {
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
		b[a[i]] = true;
		c[a[i]]++;
	}
	int i, j;
	sort(a, a + N);
	bool ishav = false;
	for (i = 0; i < N; i++)
	{
		j = M - a[i];
		if (j < 0) {
			break;
		}
		if (j > 500) {
			continue;
		}
		if (b[j]&&j!=a[i]) {
			ishav = true;
			break;
		}
		else if (b[j] && j == a[i] && c[j]>1) {
			ishav = true;
			break;
		}
	}
	if (ishav) {
		printf("%d %d\n", a[i], j);
	}
	else {
		printf("No Solution\n");
	}
	return 0;
}*/