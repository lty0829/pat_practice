/*#include <iostream>
#include<string.h>
using namespace std;
int a[1001][1001];
int N, M, K;
int mark[1001];

void dfs(int cur,int check) {
	int i;
	for (i = 1;i <= N;i++) {
		if (a[cur][i] && cur != check&&i != check&&!mark[i]) {
			mark[i] = 1;
			dfs(i,check);
		}
	}
}
int main() {
	cin >> N >> M >> K;
	for (int i = 0; i < M; i++)
	{
		int k, t;
		cin >> k >> t;
		a[k][t] = a[t][k] = 1;
	}
	for (int i = 1;i <= K;i++) {
		int repair_city=0;
		int check;
		cin >> check;
		for (int j = 1;j <= N;j++) {
			mark[j] = 0;
		}
		for (int j = 1;j <= N;j++) {
			if (!mark[j] && j != check) {
				repair_city++;
			}
			dfs(j,check);
		}
		printf("%d\n", repair_city - 1);
	}
	return 0;
}*/