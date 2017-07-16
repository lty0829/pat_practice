/*#include<iostream>
#include<limits.h>
using namespace std;
int G[1002][1002],mark[1002];
int N, M;
struct road {
	int vex;
	int lowcost;
};
road closedge[1002];
int getmin() {
	int mint = INT_MAX;
	int k = 0;
	for (int i = 1; i <=N; i++)
	{
		if (mark[i] == 0 && closedge[i].lowcost < mint) {
			mint = closedge[i].lowcost;
			k = i;
		}
	}
	if (mint == INT_MAX) {
		return -1;
	}
	return k;
}
bool istong = true;
int dist = 0;
int prim(int u) {
	mark[u] = 1;
	for (int i = 1; i <= N; i++)
	{
		closedge[i].vex = u;
		closedge[i].lowcost = G[u][i];
	}
	closedge[u].lowcost = 0;
	for (int i = 1; i <=N-1; i++)
	{
		int k = getmin();
		if (k == -1) {
			istong = false;
			break;
		}
		dist += closedge[k].lowcost;
		closedge[k].lowcost = 0;
		mark[k] = 1;
		for (int j = 1; j <=N; j++)
		{
			if (mark[j] == 0 && G[k][j] < closedge[j].lowcost) {
				closedge[j].lowcost = G[k][j]; closedge[j].vex = k;
			}
		}
	}
	if (istong) {
		return dist;
	}
	else {
		return -1;
	}
}

int main() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1;j <= N;j++) {
			G[i][j] = INT_MAX;
		}
		mark[i] = 0;
	}
	for (int i = 0; i < M; i++)
	{
		int x, y, r;
		cin >> x >> y >> r;
		G[x][y] = G[y][x] = r;
	}
	int d = prim(1);
	if (d == -1) {
		cout << -1 << endl;
	}
	else {
		cout << d << endl;
	}
}*/