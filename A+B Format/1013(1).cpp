/*#include<iostream>  
using namespace std;
int  pre[1050];   
int a[1000000][2];//t 用于标记独立块的根结点  
int N, M, K;
int Find(int x)
{
	int r = x;
	while (r != pre[r])
		r = pre[r];

	int i = x, j;
	while (pre[i] != r)
	{
		j = pre[i];
		pre[i] = r;
		i = j;
	}
	return r;
}
void mix(int x, int y)
{
	int fx = Find(x), fy = Find(y);
	if (fx < fy)
	{
		pre[fy] = fx;
	}
	else if (fx>fy) {
		pre[fx] = fy;
	}
}
int main() {
	cin >> N >> M >> K;
	for (int i = 0;i < M;i++) {
		cin >> a[i][0] >> a[i][1];
	}
	for (int i = 0; i < K; i++)
	{
		int check,cnt = 0;
		cin >> check;
		for (int j = 1;j <= N;j++) {
			pre[j] = j;
		}
		for (int j = 0;j < M;j++) {
			if (a[j][0] == check || a[j][1] == check) continue;
			if (pre[a[j][0]] == pre[a[j][1]]) continue;
			mix(a[j][0], a[j][1]);
		}
		for (int j = 1;j <= N;j++) {
			if (j != check&&pre[j] == j) {
				cnt++;
			}
		}
		printf("%d\n", cnt - 1);
	}
	return 0;
}*/