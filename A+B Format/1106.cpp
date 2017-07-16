/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> a[100001];
vector<int> re;
int deep[100001];
int n;
double p,r;
int main() {
	scanf("%d%lf%lf", &n, &p, &r);
	int k, t;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		if (k == 0) {
			re.push_back(i);
		}
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &t);
			a[i].push_back(t);
		}
	}
	queue<int> Q;
	Q.push(0);
	deep[0] = 1;
	while (!Q.empty()) {
		int y = Q.front();
		Q.pop();
		for (int i = 0; i < a[y].size(); i++)
		{
			deep[a[y][i]] = deep[y] + 1;
			Q.push(a[y][i]);
		}
	}
	int minx = 100003, num = 1;
	for (int i = 0;i < re.size();i++) {
		if (deep[re[i]] < minx) {
			num = 1;
			minx = deep[re[i]];
		}
		else if (deep[re[i]] == minx) {
			num++;
		}
	}
	double e = r / 100;
	double w = p;
	for (int i = 0; i < minx - 1; i++)
	{
		w *= (1 + e);
	}
	printf("%.4lf %d\n", w, num);
	return 0;
}*/