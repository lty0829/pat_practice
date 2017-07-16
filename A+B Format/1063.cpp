/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<set>
using namespace std;
set<int> a[51];
int n,k;
int main() {
	scanf("%d", &n);
	int m, t;
	for (int j = 1; j <=n ; j++)
	{
		scanf("%d", &m);
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &t);
			a[j].insert(t);
		}
	}
	scanf("%d", &k);
	set<int>::iterator it;
	for (int i = 0; i < k; i++)
	{
		int s1, s2,num=0;
		scanf("%d%d", &s1, &s2);
		int z1 = a[s1].size();
		int z2 = a[s2].size();
		int w = (z1 < z2) ? s1 : s2;
		int we = (z1 < z2) ? s2 : s1;
		for (it = a[w].begin();it != a[w].end();it++) {
			if (a[we].find(*it) != a[we].end()) {
				num++;
			}
		}
		double e= (double)num / (double)(z1 + z2 - num)*100.0;
		printf("%.1lf%%\n", e);
	}
}*/