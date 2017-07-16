/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int pre[1001];
int num[1001] = { 1 };
int maxnum;
bool cmp(int a, int b) {
	return a>b;
}
int find(int a) {
	int p = a;
	while (p != pre[p]) {
		p = pre[p];
	}

	return p;
}
void unix(int a, int b) {
	int x = find(a);
	int y = find(b);
	if (x == y)
		return;
	maxnum--;
	if (x < y) {
		pre[y] = x;
		num[x] += num[y];
	}
	else {
		pre[x] = y;
		num[y] += num[x];
	}
}
int n;
vector<int> a[1001];
int main() {
	scanf("%d", &n);
	maxnum = n;
	for (int i = 0; i < n; i++)
	{
		pre[i] = i;
		num[i] = 1;
	}
	int k, id;
	for (int i = 1; i <=n; i++)
	{
		scanf("%d:", &k);
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &id);
			a[id].push_back(i);
		}
	}
	for (int i = 1; i < 1001; i++)
	{
		if (a[i].size() != 0) {
			int x = a[i][0];
			for (int j = 1; j < a[i].size(); j++)
			{
				int y = a[i][j];
				unix(x, y);
			}
		}
	}
	set<int> s;
	for (int i = 0; i<n; i++) {
		int fa = find(i);
		s.insert(fa);
	}
	set<int>::iterator it = s.begin();
	vector<int> final;
	for (; it != s.end(); it++) {
		int fa = find(*it);
		final.push_back(num[fa]);
	}

	printf("%d\n", maxnum);
	sort(final.begin(), final.end(), cmp);
	for (int i = 0; i<final.size(); i++) {
		if (i == 0) {
			printf("%d", final[i]);
		}
		else {
			printf(" %d", final[i]);
		}
	}
	printf("\n");
	return 0;
}*/