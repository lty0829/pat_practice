/*#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;
int N,pre[10001],cnt, maxn = -1;
int visit[10001];
map<int, vector<int>> tree;
set<int> res;
set<int> tres;
void dfs(int p, int step) {
	if (step>maxn) {
		res.clear();
		res.insert(p);
		maxn = step;
	}
	else if (step == maxn) {
		res.insert(p);
	}

	vector<int>::iterator ite = tree[p].begin();
	for (;ite != tree[p].end();++ite) {
		if (visit[*ite] != 1) {
			visit[*ite] = 1;
			dfs(*ite, step + 1);
			visit[*ite] = 0;
		}
	}
}
int find(int x){
	int r = x;
	while (r != pre[r]) {
		r = pre[r];
	}
	return r;
}
void Union(int a, int b) {
	int i = find(a);
	int j = find(b);
	if (i != j) {
		cnt--;
		pre[j] = i;
	}
}
int main() {
	cin >> N;
	cnt = N - 1;
	for (int i = 1;i <= N;++i) {
		pre[i] = i;
	}
	for (int i = 0;i < N - 1;i++) {
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
		Union(a, b);
	}
	if (cnt != 0) {
		printf("Error: %d components\n", cnt + 1);
		return 0;
	}
	set<int>::iterator ite;
	visit[1] = 1;
	dfs(1, 1);
	visit[1] = 0;//因为已经是树，所以不会再有环了，所以所有dfs后都恢复该点的可访问性很重要  

	ite = res.begin();
	for (;ite != res.end();++ite) {
		tres.insert(*ite);
	}


	int point = (*res.begin());
	visit[point] = 1;
	dfs(point, 1);
	visit[point] = 0;

	ite = res.begin();
	for (;ite != res.end();++ite) {
		tres.insert(*ite);
	}

	ite = tres.begin();
	for (;ite != tres.end();++ite) {
		printf("%d\n", *ite);
	}

	return 0;
}*/