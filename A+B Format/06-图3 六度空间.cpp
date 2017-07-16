/*#include<iostream>
#include<queue>
using namespace std;
int n, m;
int map[10002][10002];
int mark[10002];
int deep[10002];
int bfs(int v) {
	for (int i = 1;i <=n;i++) {
		deep[i] = 0;
		mark[i] = 0;
	}
	int num = 1;
	queue<int> Q;
	Q.push(v);
	mark[v] = 1;
	deep[v] = 1;
	while (!Q.empty()) {
		int t = Q.front();
		Q.pop();
		for (int i = 1;i <= n;i++) {
			if (deep[t] <= 6 && mark[i] == 0 && map[t][i] != 0) {
				Q.push(i);
				mark[i] = 1;
				deep[i] = deep[t] + 1;
				num++;
			}
		}
	}
	return num;
}
int main(){
	cin >> n >> m;
	for (int i = 0;i < m;i++) {
		int x, y;
		cin >> x >> y;
		map[x][y] = map[y][x] = 1;
	}
	for (int i = 1;i <= n;i++) {
		int t = bfs(i);
		printf("%d: %.2f", i, (float)t / (float)n * 100);
		cout << "%\n";
	}
	return 0;
}*/