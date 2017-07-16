/*#include<iostream>
#include<queue>
using namespace std;
int map[1002][1002];
int mark[1002];
int deep[1002];
int n, l,k;
int bfs(int v) {
	for (int i = 1;i <= n;i++) {
		mark[i] = 0;
		deep[i] = 0;
	}
	int num = 0;
	queue<int> Q;
	Q.push(v);
	mark[v] = 1;
	while (!Q.empty()) {
		int fr = Q.front();
		Q.pop();
		for (int i = 1;i <= n;i++) {
			if (deep[fr] < l&&mark[i] == 0 && map[i][fr] != 0) {
				Q.push(i);
				mark[i] = 1;
				deep[i] = deep[fr] + 1;
				num++;
			}
		}
	}
	return num;
}
int main() {
	cin >> n >> l;
	for (int i = 1;i <= n;i++) {
		int t;
		cin >> t;
		for (int j = 0;j < t;j++) {
			int y;
			cin >> y;
			map[i][y] = 1;
		}
	}
	cin >> k;
	for (int i = 0;i < k;i++) {
		int b;
		cin >> b;
		int r = bfs(b);
		cout << r << endl;
	}
	return 0;
}*/