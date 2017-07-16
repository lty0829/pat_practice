/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
struct student
{
	int price=0;
	int problem[6] = { -1,-1,-1,-1,-1,-1 };
	int judge = 0;
	int num;
	int id;
};
int p[6];
student a[10001];
int n, k, m;
bool cmp(student a, student b) {
	if (a.price != b.price) {
		return a.price > b.price;
	}
	if (a.num != b.num) {
		return a.num > b.num;
	}
	if (a.judge != b.judge)
		return a.judge>b.judge;
	return a.id < b.id;
}
int main() {
	scanf("%d%d%d", &n, &k, &m);
	for (int i = 1; i <= k; i++)
	{
		scanf("%d", &p[i]);
	}
	int id, proid, score;
	for (int i = 1;i <= n;i++)
		a[i].id = i;
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d%d", &id, &proid, &score);
		if (score == -1) {
			if(a[id].problem[proid]==-1)
				a[id].problem[proid] = 0;
			continue;
		}
		if (score != -1 && a[id].judge==0) {
			a[id].id = id;
			a[id].judge = 1;
		}
		if (a[id].problem[proid] >= score) {
			continue;
		}
		else if (a[id].problem[proid] < score) {
			if (score == p[proid]) {
				a[id].num++;
			}
			if (a[id].problem[proid] != -1) {
				a[id].price -= a[id].problem[proid];
				a[id].price += score;
			}
			else {
				a[id].price += score;
			}
			a[id].problem[proid] = score;
			
		}
	}
	sort(a+1, a + n+1, cmp);
	int goal = 1;
	for (int i = 1; i <= n; i++)
	{
		if (a[i].judge==0) {
			break;
		}
		if (i != 1 && a[i].price != a[i - 1].price)
			goal = i;
		printf("%d %05d %d", goal, a[i].id,a[i].price);
		for (int j = 1; j <= k; j++)
		{
			if (a[i].problem[j] == -1)
				printf(" -");
			else
				printf(" %d", a[i].problem[j]);
		}
		printf("\n");
	}
	return 0;
}*/