/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m;
int mark[100001] = {-1};
int y[100001],x[100001];
vector<int> a;
int main() {
	scanf("%d", &n);
	int t1, t2;
	for (int i = 0; i < 100001; i++)
	{
		mark[i] = -1;
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &t1, &t2);
		mark[t1] = t2;
		mark[t2] = t1;
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &t1);
		y[t1] = 1;
		x[i] = t1;
	}
	for (int i = 0; i < m; i++)
	{
		if (mark[x[i]] == -1) {
			a.push_back(x[i]);
		}
		else{
			if(y[mark[x[i]]] != 1)
				a.push_back(x[i]);
		}
	}
	printf("%d\n", a.size());
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size(); i++)
	{
		if (i == 0) {
			printf("%05d", a[i]);
		}
		else{
			printf(" %05d", a[i]);
		}
	}
	//aprintf("\n");
	return 0;
}*/
/*
3
11111 22222
33333 44444
00000 66666
7
55555 44444 00000 88888 22222 11111 23333




*/