/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n;
double p, r;
int deep[100001], maxd=0;
vector<int> mapx[100001];
int main() {
	scanf("%d%lf%lf", &n, &p, &r);
	int root, t;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		if (t == -1) {
			root = i;
		}
		else {
			mapx[t].push_back(i);
		}
	}
	queue<int>Q;
	queue<int>cur;
	int level = 1;
	Q.push(root);
		while (!Q.empty()) {
			int y = Q.front();
			for (int i = 0; i < mapx[y].size(); i++)
			{
				deep[mapx[y][i]] = deep[y] + 1;
				if (deep[mapx[y][i]]>maxd) {
					maxd = deep[mapx[y][i]];
					level = 1;
				}
				else if (deep[mapx[y][i]]==maxd) {
					level++;
				}
				Q.push(mapx[y][i]);
			}
			Q.pop();
		}
	double rate = r / 100;
	double num=p;
	for (int i = 0; i < maxd; i++)
	{
		num *= (1 + rate);
	}
	printf("%.2lf %d\n", num, level);
	return 0;

}*/
