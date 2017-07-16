/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int n, k;
struct pro
{
	int hour;
	int min;
	int sec;
	int usetime;
	int totalsec = -1;
};
pro a[10001];
queue<pro> list;
pro wind[10001];
int comp_time(const void *a, const void *b)
{
	pro c = *(pro *)a;
	pro d = *(pro *)b;

	if (c.hour < d.hour) return -1;
	else if (c.hour > d.hour) return 1;
	else
	{
		if (c.min< d.min) return -1;
		else if (c.min > d.min) return 1;
		else
		{
			if (c.sec < d.sec) return -1;
			else return 1;
		}
	}
}
int islike(const void *a, const void *b) {
	pro c = *(pro *)a;
	pro d = *(pro *)b;
	if (d.totalsec == -1) {
		return -1;
	}
	else if (c.totalsec == -1)
		return 1;
	else if (c.totalsec + c.usetime * 60 <= d.totalsec + d.usetime * 60) {
		return -1;
	}
	return 1;
}
int main() {
	cin >> n >> k;
	int truen = 0;
	for (int i = 0;i < n;i++) {
		pro a1;
		scanf("%d:%d:%d %d", &a1.hour, &a1.min, &a1.sec, &a1.usetime);
		a1.totalsec = a1.hour * 3600 + a1.min * 60 + a1.sec;
		if (a1.hour >= 17)
			continue;
		a[truen] = a1;
		truen++;
	}
	qsort(a, truen, sizeof(pro), comp_time);
	double wait = 0;
	for (int i = 0; i < truen; i++)
	{
		list.push(a[i]);
	}
	for (int i = 0;i < k;i++) {
		if (!list.empty()) {
			pro w = list.front();
			if (w.hour < 8) {
				wait += (60 - w.sec) + (59 - w.min)*60 + (7 - w.hour) * 60*60;
				w.hour = 8;w.min = 0;w.sec = 0;
				w.totalsec = 8 * 3600;
			}
			if (w.usetime > 60) {
				w.usetime = 60;
			}
			wind[i] = w;
			list.pop();
		}
	}
	while(!list.empty()){
		qsort(wind,k, sizeof(pro),islike);
		pro w = list.front();
		if (w.hour < 8) {
			wait += (60 - w.sec) + (59 - w.min) * 60 + (7 - w.hour) * 60 * 60;
			w.hour = 8;w.min = 0;w.sec = 0;
			w.totalsec = 8 * 3600;
		}
		if (w.usetime > 60) {
			w.usetime = 60;
		}
		if (wind[0].totalsec + wind[0].usetime * 60 <= w.totalsec) {
			wind[0] = w;
			list.pop();
		}
		else {
			wait += wind[0].totalsec + wind[0].usetime * 60 - w.totalsec;
			int change= wind[0].totalsec + wind[0].usetime * 60;
			wind[0] = w;
			wind[0].totalsec = change;
			list.pop();
		}
	}
	if (truen == 0)
		printf("0.0");
	else
		printf("%.1f", wait / 60.0 / truen);
}*/