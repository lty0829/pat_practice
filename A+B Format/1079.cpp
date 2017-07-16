/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
#include<math.h>  
#include<vector>
using namespace std;
struct point {
	int num;
	int id;
};
int n;
double p, r;
vector<int> a[100001];
vector<point> retail;
int deepth[100001];
int main() {
	scanf("%d%lf%lf", &n, &p, &r);
	int k;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		int x;
		point y;
		if (k == 0) {
			scanf("%d", &x);
			y.id = i;
			y.num = x;
			retail.push_back(y);
		}
		else {
			for (int j = 0; j < k; j++)
			{
				scanf("%d", &x);
				a[i].push_back(x);
			}
		}
	}
	queue<int> q;
	q.push(0);
	while (!q.empty()) {
		int y = q.front();
		q.pop();
		for (int i = 0; i < a[y].size(); i++)
		{
			deepth[a[y][i]] = deepth[y] + 1;
			q.push(a[y][i]);
		}
	}
	double sum = 0, pre = 0;;
	if (n == 1) {
		sum = retail[0].num*p;
		printf("%.1lf\n", sum);
		return 0;
	}
	for (int i = 0; i < retail.size(); i++)
	{
		pre = 1 + r / 100;
		sum += pow(pre, deepth[retail[i].id])*retail[i].num;
	}
	sum *= p;
	printf("%.1lf\n", sum);
	return 0;
}*/