/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int mp[201][201];
int n,m;
bool checkham(int k) {
	int x;
	vector<int> v;
	set<int> y;
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &x);
		v.push_back(x);
		y.insert(x);
	}
	if (y.size() != n || v[0] != v[k - 1] || k != (n + 1)) return false;
	for (int i = 1; i < k; i++)
	{
		if (mp[v[i - 1]][v[i]] != 1)
			return false;
	}
	return true;
}
int main() {
	scanf("%d%d", &n, &m);
	int t1, t2;
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d", &t1, &t2);
		mp[t1][t2] = mp[t2][t1] = 1;
	}
	scanf("%d", &t1);
	for (int i = 0; i < t1; i++)
	{
		scanf("%d", &t2);
		if (checkham(t2)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}*/
