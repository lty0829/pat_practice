/*#include<iostream>
using namespace std;
#define INF 0x7fffffff
int *hand, city, road, start, target,visit[501],d[501][501];
int min_dist = INF;
int max_amount;
int cnt;
void dfs(int start, int dist, int amount) {
	if (start == target) {
		if (dist < min_dist) {
			cnt = 1;
			min_dist = dist;
			max_amount = amount;
		}
		else if (dist == min_dist) {
			cnt++;
			if (amount>max_amount)
			{
				max_amount = amount;
			}
		}
		return;
	}
	for (int i = 0;i < city;i++) {
		if (d[start][i] != 0 && visit[i] != 1) {
			visit[i] = 1;
			dfs(i, dist + d[start][i], amount + hand[i]);
			visit[i] = 0;
		}
	}
}
int main() {
	cin >> city >> road >> start >> target;
	hand = (int*)malloc(sizeof(int)*city);
	for (int i = 0; i < city; i++)
	{
		cin >> hand[i];
	}
	for (int i = 0; i < road; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		d[a][b] = d[b][a] = c;
	}
	visit[start] = 1;
	dfs(start, 0, hand[start]);
	cout << cnt << ' ' << max_amount << endl;
	return 0;

}*/
