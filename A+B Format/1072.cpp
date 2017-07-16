/*#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<limits.h>
using namespace std;
int mark[1022];
double dist[1022][1022], ming[1022];
struct gation {
	int index;
	double mm;
	double sum;
};
vector<gation> a;
int n, m, k, t;
int str2int(char p[])
{
	int indicator = 0;
	if (p[0] == 'G')
		indicator = 1;
	int index = indicator == 0 ? 0 : n;
	index += atoi(p + indicator);
	return index;
}
void dijkstra(int star) {
	for (int i = 1; i <= n+m; i++)
	{
		mark[i] = 0;
		ming[i] = dist[star][i];
	}
	mark[star] = 1;
	int k = -1;
	double min;
	do{
		min = INT_MAX;
		k = -1;
		for (int i = 1;i <= m + n;i++) {
			if (mark[i] == 0 && ming[i] < min) {
				min = ming[i];
				k = i;
			}
		}
		if (k != -1) {
			mark[k] = 1;
			for (int i = 1; i <= n+m; i++)
			{
				if (mark[i] == 0 && dist[k][i]<INT_MAX) {
					if (ming[i] > dist[k][i] + min) {
						ming[i] = min + dist[k][i];
					}
				}
			}
		}
	} while (k != -1);
}

bool cmp(double a, double b) {
	return a < b;
}
bool cmp1(gation a, gation b) {
	if (a.mm != b.mm)
		return a.mm>b.mm;
	if (a.sum != b.sum)
		return a.sum < b.sum;
	return a.index < b.index;
}
int main() {
	cin >> n >> m >> k >> t;
	for (int i = 1;i <= n+m;i++) {
		for (int j = 1;j <= n+m;j++) {
			dist[i][j] = INT_MAX;
			dist[i][j] = INT_MAX;
		}
	}
	char p1[5], p2[5];
	for (int i = 0; i < k; i++)
	{
		cin >> p1 >> p2;
		int r1 = str2int(p1);
		int r2 = str2int(p2);
		int de;
		cin >> de;
		dist[r1][r2] = dist[r2][r1] = de;
	}
	for (int i = 0; i <m ; i++)
	{
		int turn = n + i + 1;
		dijkstra(turn);
		int isok = true;
		for (int j = 1;j <= n;j++) {
			if (ming[j]>t) {
				isok = false;
				break;
			}
		}
		if (isok) {
			gation f;
			f.index = turn;
			sort(ming + 1, ming + 1 + n, cmp);
			f.mm = ming[1];
			double num=0.0;
			for (int j = 1;j <= n;j++) {
				num += ming[j];
			}
			f.sum = num;
			a.push_back(f);
		}
		

	}
	if (a.size() == 0) {
		printf("No Solution\n");
		return 0;
	}
	sort(a.begin(), a.end(), cmp1);
	printf("G%d\n%.1f %.1f\n", a[0].index-n, a[0].mm, a[0].sum / n);

}*/