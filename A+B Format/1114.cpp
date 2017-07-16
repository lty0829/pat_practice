/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int mark[10000];
int n;
struct node {
	int father;
	int mother;
	int k;
	int chlid[6];
	int m_estate;
	int area;
};
struct node1 {
	int id=10000;
	int m=0;
	double avg_setd=0.0;
	double avg_area=0.0;
};
node a[10001];
vector<node1> e;
vector<int> list;
vector<int>::iterator it;
bool cmp(node1 a, node1 b) {
	if (a.avg_area != b.avg_area) {
		return a.avg_area > b.avg_area;
	}
	return a.id < b.id;
}
int y[10001];
int main() {
	scanf("%d", &n);
	int id, fid, mid,k;
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d%d", &id, &fid, &mid, &k);
		if (mark[fid] == 3) {
			mark[fid] = 4;
			y[fid] = id;
		}
		if (mark[mid] == 3) {
			mark[fid] = 4;
			y[mid] = id;
		}
		list.push_back(id);
		a[id].father = fid;
		a[id].mother = mid;
		a[id].k = k;
		if (mark[fid] == 0) {
			mark[fid] = 3;
		}
		if (mark[mid] == 0) {
			mark[mid] = 3;
		}
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &a[id].chlid[j]);
			if (mark[a[id].chlid[j]] == 3) {
				mark[a[id].chlid[j]] = 4;
				y[a[id].chlid[j]] = id;
			}
			if (mark[a[id].chlid[j]] == 0) {
				mark[a[id].chlid[j]]=3;
			}
		}
		mark[id] = 2;
		scanf("%d%d", &a[id].m_estate, &a[id].area);
	}
	for ( it = list.begin(); it !=list.end(); it++)
	{
		if (mark[*it] != 1) {
			node1 p;
			double totalm = 0, totalar = 0;
			queue<int> Q;
			Q.push(*it);
			p.m = 1;
			p.id = *it;
			mark[*it] = 1;
			while(!Q.empty()) {
				int r = Q.front();
				Q.pop();
				if (a[r].father != -1&&mark[a[r].father]!=1) {
					p.m++;
					if (a[r].father < p.id) p.id = a[r].father;
					if (mark[a[r].father] == 2) {
						Q.push(a[r].father);
					}
					if (mark[a[r].father] == 4 && mark[y[a[r].father]] == 2) {
						p.m++;
						if (y[a[r].father] < p.id) p.id = y[a[r].father];
						Q.push(y[a[r].father]);
						mark[y[a[r].father]] = 1;
					}
					mark[a[r].father] = 1;
				}
				if (a[r].mother != -1&&mark[a[r].mother]!=1) {
					p.m++;
					if (a[r].mother < p.id) p.id = a[r].mother;
					if (mark[a[r].mother] == 2) {
						Q.push(a[r].mother);					
					}
					if (mark[a[r].mother] == 4 && mark[y[a[r].mother]] == 2) {
						p.m++;
						if (y[a[r].mother] < p.id) p.id = y[a[r].mother];
						Q.push(y[a[r].mother]);
						mark[y[a[r].mother]] = 1;
					}
					mark[a[r].mother] = 1;
				}
				for (int i = 0; i < a[r].k; i++)
				{
					if (a[r].chlid[i] != -1&&mark[a[r].chlid[i]]!=1) {
						p.m++;
						if (a[r].chlid[i] < p.id) p.id = a[r].chlid[i];
						if (mark[a[r].chlid[i]] == 2) {
							Q.push(a[r].chlid[i]);
						}
						if (mark[a[r].chlid[i]] == 4 && mark[y[a[r].chlid[i]]] == 2) {
							p.m++;
							if (y[a[r].chlid[i]] < p.id) p.id = y[a[r].chlid[i]];
							Q.push(y[a[r].chlid[i]]);
							mark[y[a[r].chlid[i]]] = 1;
						}
						mark[a[r].chlid[i]] = 1;
					}
				}
				totalm += a[r].m_estate;
				totalar += a[r].area;
			}
			p.avg_setd = totalm / p.m;
			p.avg_area = totalar / p.m;
			e.push_back(p);
		}
	}
	sort(e.begin(), e.end(),cmp);
	printf("%d\n", e.size());
	for (int i = 0; i < e.size(); i++)
	{
		printf("%04d %d %.3lf %.3lf\n", e[i].id, e[i].m, e[i].avg_setd, e[i].avg_area);
	}
	return 0;
}*/