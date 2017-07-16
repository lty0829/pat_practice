/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
struct name
{
	char name1[5];
};
bool cmp(name a, name b) {
	return strcmp(a.name1, b.name1) <= 0;
}
vector<name> a[2501];
int N, K,C;
int main() {
	scanf("%d%d", &N,&K);
	name s;
	int d;
	for (int i = 0; i < N; i++)
	{
		scanf("%s%d",s.name1, &C);
		for (int i = 0; i < C; i++)
		{
			scanf("%d", &d);
			a[d].push_back(s);
		}
	}
	for (int i = 1; i <= K; i++)
	{
		printf("%d %d\n", i, a[i].size());
		sort(a[i].begin(), a[i].end(),cmp);
		for (name b : a[i]) {
			printf("%s\n", b.name1);
		}
	}
	return 0;
}*/

