/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
#include<set>  
using namespace std;
struct point {
	string id;
	int time;
	string per;
	int index;
	int flag;
	int pos;
};
struct node {
	int time;
	int index = 0;
};
bool cmp(point a,point b){
	if (a.id != b.id)
		return a.id < b.id;
	return a.time < b.time;
}
bool cmp1(point a, point b) {
	return a.time < b.time;
}
int n, m;
point a[10001];
int b[80001];
set<string>w;
map<string, vector<node>> mapx;
map<string, int>num;
int main() {
	cin >> n >> m;
	string str;
	int h, mx, s;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].id;
		scanf("%d:%d:%d",&h,&mx,&s);
		a[i].time = h * 3600 + mx * 60 + s;
		cin>> str;
		a[i].index = (str == "in")? 0 : 1;
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d:%d:%d", &h, &mx, &s);
		b[i] = h * 3600 + mx * 60 + s;
	}
	sort(a, a + n, cmp);
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		string name = a[i].id;
		if (mapx[name].size() == 0&&a[i].index==0) {
			node r;
			r.time = a[i].time;
			r.index = i;
			mapx[name].push_back(r);
			index = 0;
			a[i].pos = 0;
		}
		else if (mapx[name].size() == 0 && a[i].index == 1) {
			a[i].flag = 1;
			index = 0;
		}
		else {
			if (index == 0 && a[i].index == 0) {
				node r;
				r.time = a[i].time;
				r.index = i;
				a[mapx[name][mapx[name].size()-1].index].flag = 1;
				mapx[name].pop_back();
				mapx[name].push_back(r);
				a[i].pos = mapx[name].size() - 1;
			}
			else if (index == 0 && a[i].index == 1) {
				node r;
				r.time = a[i].time;
				r.index = i;
				mapx[name].push_back(r);
				a[i].pos = mapx[name].size() - 1;
				index = 1;
			}
			else if (index == 1 && a[i].index == 0) {
				node r;
				r.time = a[i].time;
				r.index = i;
				mapx[name].push_back(r);
				a[i].pos = mapx[name].size() - 1;
				index = 0;
			}
			else if (index == 1 && a[i].index == 1) {
				a[i].flag = 1;
			}
		}
		if (i == n - 1) {
			if (mapx[name].size() % 2 != 0) {
				a[mapx[name][mapx[name].size() - 1].index].flag = 1;
				mapx[name].pop_back();
			}
		}
		else {
			if (name != a[i + 1].id&&mapx[name].size() % 2 != 0) {
				a[mapx[name][mapx[name].size() - 1].index].flag = 1;
				mapx[name].pop_back();
			}
		}
	}
	sort(a, a + n, cmp1);
	int Que = 0,ss = 0,ans=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].flag)
			continue;
		while (Que < m && b[Que] < a[i].time)
		{
			Que++;
			printf("%d\n", ss);
		}
		string name = a[i].id;
		if (a[i].index == 0) {
			ss++;
		}
		else if (a[i].index == 1) {
			ss--;
			num[name] += mapx[name][a[i].pos].time - mapx[name][a[i].pos - 1].time;
			if (num[name] > ans) {
				ans = num[name];
				w.clear();
				w.insert(name);
			}
			else if (num[name] == ans) {
				w.insert(name);
			}
		}
	}
	while (Que<m)
	{
		printf("%d\n", ss);
		Que++;
	}
	set<string>::iterator ii;
	for (ii = w.begin();ii != w.end();ii++)
		cout << *ii << " ";
	printf("%02d:%02d:%02d\n", ans / 3600, ans % 3600 / 60, ans % 60);
	return 0;
}*/