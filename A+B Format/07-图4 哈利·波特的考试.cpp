/*#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int N, M;
int D[101][101], G[101][101],most[101];
bool Floyd() {
	int i, j, k;
	for (i = 1;i <= N;i++) {
		for ( j = 1; j <= N; j++)
		{
			D[i][j] = G[i][j];
		}
	}
	for (k = 1;k <= N;k++) {
		for (i = 1;i <= N;i++) {
			for (j = 1;j <= N;j++) {
				if (D[i][k] + D[k][j] < D[i][j]) {
					D[i][j] = D[i][k] + D[k][j];
				}
			}
		}
	}
	for (i = 1;i <= N;i++) {
		for (j = 1; j <= N; j++) {
			if (most[i] < D[i][j] && D[i][j] != 10000&&i!=j) {
				most[i] = D[i][j];
			}
			if (D[i][j] == 10000&&i!=j) {
				most[i] = 0;
				break;
			}
		}
	}
	return true;
}


int main() {
	cin >> N >> M;
	if (N == 1) {
		cout << 0 << endl;
		return 0;
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			G[i][j] = 10000;
		}
	}
	for (int i = 0; i < M; i++)
	{
		int x, y,cost;
		cin >> x >> y>>cost;
		G[x][y] =G[y][x]= cost;
	}
	Floyd();
	int t = INT_MAX,y=0;
	for (int i = 1; i <= N; i++)
	{
		if (most[i] < t&&most[i]!=0) {
			t = most[i];
			y = i;
		}
	}
	if (y == 0||N==1) {
		cout << 0 << endl;
		return 0;
	}
	cout << y << " " << most[y] << endl;
	return 0;
}*/