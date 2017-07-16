/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
struct tree{
	int weight;
	bool ismother = false;
};

map<int, vector<int>> a;
vector<int> geta;
vector<int> getb;
int n, m, s;
tree root[101];
int mark[101] = {0};
bool cmp(int a, int b) {
	return root[a].weight > root[b].weight;
}
void dfs(int r,int weight) {
	if (!root[r].ismother&&weight == s) {
		for (int i = 0; i < geta.size(); i++)
		{
			if (i == 0) printf("%d", geta[i]);
			else printf(" %d", geta[i]);
			
		}
		printf("\n");return;
	}
	else {
		for (vector<int>::iterator it = a[r].begin(); it != a[r].end(); it++)
		{
			if (weight + root[*it].weight > s)
				continue;
			if (mark[*it] == 0) {
				mark[*it] = 1;
				geta.push_back(root[*it].weight);
				dfs(*it, weight + root[*it].weight);
				geta.pop_back();
				mark[*it] = 0;
			}
		}
	}
}
int main() {
	scanf("%d%d%d",&n, &m, &s);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &root[i].weight);

	}
	int r, num;
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d", &r,&num);
		int child;
		root[r].ismother = true;
		for (int j = 0; j < num; j++)
		{
			scanf("%d", &child);
			a[r].push_back(child);
		}
		sort(a[r].begin(), a[r].end(), cmp);
	}
	geta.push_back(root[0].weight);
	mark[0] = 1;
	dfs(0,root[0].weight);
	return 0;
}*/