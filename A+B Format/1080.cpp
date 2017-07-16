/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct point
{
	double GE;
	double GI;
	int finalx;
	int chance[6];
	int id;
};
bool cmp(point a, point b) {
	if (a.finalx != b.finalx) {
		return a.finalx > b.finalx;
	}
	return a.GE > b.GE;
}
bool cmp1(point a, point b) {
	return a.id < b.id;
}
int n, m, k;
int school[101];
vector<point> number[101];
point a[40001];
int main() {
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &school[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%lf%lf", &a[i].GE, &a[i].GI);
		a[i].id = i;
		a[i].finalx = (a[i].GE + a[i].GI) / 2;
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &a[i].chance[j]);
		}
	}
	sort(a, a + n, cmp);
	int i,j = 0;
	for (int i = 0; i <n; i++)
	{
		for (int h = 0;h < k;h++) {
			int sch = a[i].chance[h];
			if (school[sch] != 0) {
				number[sch].push_back(a[i]);
				school[sch]--;
				break;
			}
			else if (school[sch] == 0) {
				int y = number[sch].size();
				if (y != 0) {
					int fin = number[sch][y - 1].finalx;
					int GE = number[sch][y - 1].GE;
					if (fin == a[i].finalx&&GE == a[i].GE) {
						number[sch].push_back(a[i]);
						break;
					}
				}
			}
		}

	}
	for (int i = 0; i < m; i++)
	{
		if (number[i].size() == 0) {
			printf("\n");
		}
		else {
			sort(number[i].begin(), number[i].end(), cmp1);
			printf("%d", number[i][0].id);
			for (int j = 1; j < number[i].size(); j++)
			{
				printf(" %d", number[i][j].id);
			}
			printf("\n");
		}
	}
	return 0;
}*/