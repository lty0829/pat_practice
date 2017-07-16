/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;
int mark[1286][128][60];
int M, N, L, T, total = 0;
int xx[6] = { 1,-1,0,0,0,0 };
int yy[6] = { 0,0,1,-1,0,0 };
int zz[6] = { 0,0,0,0,1,-1 };
struct node {
	int x, y, z;
	node(int _x, int _y, int _z) {
		x = _x; y = _y; z = _z;
	}
};
void bfs(int x, int y, int z) {
	queue<node> que;
	que.push(node(x, y, z));
	mark[x][y][z] = 0;
	int cnt = 1;
	while (!que.empty()) {
		node n = que.front();
		for (int i = 0; i<6; i++) {
			int tx = n.x + xx[i];
			int ty = n.y + yy[i];
			int tz = n.z + zz[i];
			if ((tz<L && tz >= 0 && tx<M && tx >= 0 && ty<N && ty >= 0) && mark[tx][ty][tz] == 1) {
				mark[tx][ty][tz] = 0;
				cnt++;
				que.push(node(tx, ty, tz));
			}
		}
		que.pop();
	}
	if (cnt >= T)
		total += cnt;
}
int main() {
	scanf("%d%d%d%d", &M, &N, &L, &T);
	for (int i = 0; i < L; i++)
	{
		for (int j = 0;j < M;j++) {
			for (int k = 0; k < N; k++)
			{
				scanf("%d", &mark[j][k][i]);
			}
		}
	}
	for (int i = 0; i < L; i++)
	{
		for (int j = 0;j < M;j++) {
			for (int k = 0; k < N; k++)
			{
				if (mark[j][k][i] == 1) {
					bfs(j, k, i);
				}
			}
		}
	}
	cout << total << endl;
	return 0;
}*/