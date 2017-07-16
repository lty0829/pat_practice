/*#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int map[11][11];
int mark[11];
int n, e;
vector<int> a;
void dfs(int v) {
	mark[v] = 1;
	for (int i = 0;i < n;i++) {
		if (mark[i] == 0 && map[v][i] != 0) {
			a.push_back(i);
			dfs(i);
		}
	}
}
void bfs(int v) {
	mark[v] = 1;
	queue<int>Q;
	Q.push(v);
	while (!Q.empty()) {
		int fr = Q.front();
		Q.pop();
		for (int i = 0;i < n;i++) {
			if (mark[i] == 0 && map[fr][i] != 0) {
				a.push_back(i);
				Q.push(i);
				mark[i] = 1;
			}
		}
	}
}
int ismark() {
	for (int i = 0;i < n;i++) {
		if (mark[i] == 0) {
			return i;
		}
	}
	return -1;
}
int main() {
	cin >> n >> e;
	for (int i = 0;i < e;i++) {
		int x, y;
		cin >> x >> y;
		map[x][y] = map[y][x] = 1;
	}
	int t;
	while (ismark() != -1) {
		t = ismark();
		a.clear();
		a.push_back(t);
		dfs(t);
		cout << "{ ";
		for (int j : a) {
			cout << j << " ";
		}
		cout << "}" << endl;
	}
	for (int i = 0;i < n;i++) {
		mark[i] = 0;
	}
	while ( ismark() != -1) {
		t = ismark();
		a.clear();
		a.push_back(t);
		bfs(t);
		cout << "{ ";
		for (int j : a) {
			cout << j << " ";
		}
		cout << "}" << endl;
	}
	return 0;
}*/