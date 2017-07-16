/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
struct node{
	int length = -1;
	int time = 0;
};
int n, m;
int maxtime=INT_MAX, maxdis =INT_MAX;
int maxtdis = INT_MAX;
node mapx[502][502];
int mark[502];
vector<int> fast;
vector<int> ashort;
void dfs(int res,int dist,int time,int y,vector<int> &a) {
	if (res == dist) {
		if (time < maxtime) {
			maxtime = time;
			fast = a;
		}
		else if (time == maxtime&&fast.size()>a.size()) {
			fast = a;
		}
		if (y < maxdis) {
			maxdis = y;
			maxtdis = time;
			ashort = a;
		}
		else if (y == maxdis&&time < maxtdis) {
			maxtdis = time;
			ashort = a;
		}
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (mapx[res][i].length != -1 && mark[i] == 0) {
			a.push_back(i);
			mark[i] = 1;
			dfs(i, dist, time + mapx[res][i].time, y + mapx[res][i].length, a);
			a.pop_back();
			mark[i] = 0;
		}
	}
}
bool issame() {
	if (fast.size() != ashort.size()) {
		return false;
	}
	for (int i = 0; i < fast.size(); i++)
	{
		if (fast[i] != ashort[i])
			return  false;
	}
	return true;
}
int main() {
	scanf("%d%d", &n, &m);
	int V1, V2, oneway, length, time;
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d%d%d%d", &V1, &V2, &oneway, &length, &time);
		if (oneway == 1) {
			mapx[V1][V2].length = length;
			mapx[V1][V2].time = time;
		}
		else if (oneway == 0) {
			mapx[V1][V2].length = mapx[V2][V1].length = length;
			mapx[V1][V2].time = mapx[V2][V1].time = time;
		}
	}
	int  source, destination;
	scanf("%d%d", &source, &destination);
	vector<int> w;
	w.push_back(source);
	dfs(source, destination, 0, 0, w);
	if (issame()) {
		printf("Distance = %d; Time = %d: ", maxdis, maxtime);
		for (int i = 0; i < fast.size(); i++)
		{
			if (i == 0) {
				printf("%d", fast[0]);
			}
			else
				printf(" -> %d", fast[i]);
		}
		printf("\n");
	}
	else {
		printf("Distance = %d: ", maxdis);
		for (int i = 0; i < ashort.size(); i++)
		{
			if (i == 0) {
				printf("%d", ashort[0]);
			}
			else
				printf(" -> %d", ashort[i]);
		}
		printf("\n");
		printf("Time = %d: ", maxtime);
		for (int i = 0; i < fast.size(); i++)
		{
			if (i == 0) {
				printf("%d", fast[0]);
			}
			else
				printf(" -> %d", fast[i]);
		}
		printf("\n");
	}
	return 0;
}*/