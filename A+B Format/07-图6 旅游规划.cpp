/*#include<iostream>
#include<limits.h>
#include<stack>
using namespace std;
struct road {
	int dict;
	int cost;
};
road map[501][501];
int n, m, x, tag, path[501], mark[501], dist[501], cost[501];
stack<int> a;
void dijkstra(int x, int end) {
	int i, j, k, min, ocost;
	for (i = 0;i < n;i++)
	{
		dist[i] = map[x][i].dict;
		cost[i] = map[x][i].cost;
		path[i] = x;
	}
	path[x] = -1;
	mark[x] = 1;
	do
	{
		min = INT_MAX;
		ocost = 0;
		k = -1;
		for (int i = 0; i < n; i++)
		{
			if (mark[i] == 0 && dist[i] < min) {
				min = dist[i];
				ocost = cost[i];
				k = i;
			}
		}
		if (k == end) return;
		if (k != -1) {
			mark[k] = 1;
			for (int i = 0; i < n; i++)
			{
				if (mark[i] == 0 && map[k][i].dict < INT_MAX) {
					if (dist[i] > min + map[k][i].dict) {
						dist[i] = min + map[k][i].dict;
						cost[i] = ocost + map[k][i].cost;
						path[i] = k;
					}
					else if (dist[i] == min + map[k][i].dict) {
						if (cost[i] > ocost + map[k][i].cost) {
							cost[i] = ocost + map[k][i].cost;
							path[i] = k;
						}
					}
				}
			}
		}
	} while (k != -1);
}
int main() {
	cin >> n >> m >> x >> tag;
	for (int i = 0;i < n;i++) {
		path[i] = -1;
		mark[i] = 0;
		for (int j = 0;j < n;j++) {
			map[i][j].dict = INT_MAX;
			map[i][j].cost = INT_MAX;
		}
	}
	for (int i = 0; i < m; i++)
	{
		int x1, y, dict, cost;
		cin >> x1 >> y >> dict >> cost;
		map[x1][y].cost = map[y][x1].cost = cost;
		map[x1][y].dict = map[y][x1].dict = dict;
	}
	if (x == tag) {
		printf("0 0\n");
		return 0;
	}
	dijkstra(x, tag);
	cout << dist[tag] << " " << cost[tag] << endl;
	return 0;
}*/