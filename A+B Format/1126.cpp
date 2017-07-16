/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int cnt = 0;
vector<int> v[505];
int mark[505];
int n, m;
void dfs(int s) {
	mark[s] = 1;
	cnt++;
	for (int i = 0; i < v[s].size(); i++)
	{
		if (mark[v[s][i]] == 0) {
			dfs(v[s][i]);
		}
	}
}
int main() {
	scanf("%d%d", &n, &m);
	int a, b;
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);
	
	int odd = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i != 1) printf(" ");
		if (v[i].size() % 2 != 0) odd++;
		printf("%d", v[i].size());
	}
	printf("\n");
	if (cnt ==n &&odd == 0) 
		printf("Eulerian");
	else if (odd == 2 && cnt == n)
		printf("Semi-Eulerian");
	else
		printf("Non-Eulerian");
	return 0;
}*/
