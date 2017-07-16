/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int pre[100005];
int mark[100005];
int n;
int numx=0,markt[100005];
int b[100005];
int find(int y) {
	while (y != pre[y])
		y = pre[y];
	return y;
}
void unix(int a, int b) {
	int x = find(a);
	int y = find(b);
	if (x < y) {
		pre[y] = x;
		mark[y] = 1;
	}
	else if(x>y){
		pre[x] = y;
		mark[x] = 1;
	}
}
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= 100004; i++)
	{
		pre[i] = i;
	}
	int k;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &b[j]);
			if (markt[b[j]] == 0) {
				numx++;
				markt[b[j]] = 1;
			}
			if (j != 0) {
				unix(b[j - 1], b[j]);
			}
		}
	}
	int f = 0;
	for (int i = 1; i <=numx; i++)
	{
		if (mark[i] != 1) {
			f++;
		}
	}
	printf("%d %d\n", f, numx);
	int q=0;
	scanf("%d", &q);
	int r1=0, r2=0;
	for (int i = 0; i < q; i++) {
		scanf("%d%d", &r1, &r2);
		int t1 = find(r1);
		int t2 = find(r2);
		if (t1 == t2) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}
	return 0;
}*/
