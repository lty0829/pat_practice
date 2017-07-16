/*#include<iostream>
#include<stack>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int map[102][102];
int in_count[102],out_count[102], e_time[102],pre[102],e_time1[102];
int n, m, sum;
vector<int> a,b;
vector<pair<int, int>> toe,tmap;
int whomax(int a, int b) {
	return a < b ? b : a;
}
int whomin(int a, int b) {
	return a < b ? a : b;
}

bool maxpath() {
	stack<int> s;
	for (int i = 1; i <= n; i++)
	{
		if (in_count[i] == 0) {
			s.push(i);
		}
	}
	while (!s.empty()) {
		int flag = s.top();
		s.pop();
		a.push_back(flag);
		for (int i = 1; i <= n; i++)
		{
			if (map[flag][i] != -1) {
				in_count[i]--;
				if (in_count[i] == 0) {
					s.push(i);
				}
			}
		}
	}
	e_time[0] = 0;
	if (a.size() < n) {
		return false;
	}
	int juic = 0;
	for (int i = 0; i < n; i++)
	{
		int t = a[i];
		for (int j = 1; j <= n; j++)
		{
			if (map[j][t] != -1) {
				if (e_time[j] + map[j][t]>e_time[t]) {
					pre[t] = j;
				}
				e_time[t] = whomax(e_time[j] + map[j][t], e_time[t]);
			}
			juic = whomax(juic, e_time[t]);
		}
		sum = juic;
	}




	for (int i = 1; i <= n; i++)
	{
		if (out_count[i] == 0) {
			s.push(i);
		}
	}
	while (!s.empty()) {
		int flag = s.top();
		s.pop();
		b.push_back(flag);
		for (int i = 1; i <= n; i++)
		{
			if (map[i][flag] != -1) {
				out_count[i]--;
				if (out_count[i] == 0) {
					s.push(i);
				}
			}
		}
	}
	for (int i = 1;i <= n;i++) {
		e_time1[i] = INT_MAX;
	}
	e_time1[0] = 0;
	if (b.size() < n) {
		return false;
	}
	for (int i = 0; i < n; i++)
	{
		int t = b[i];
		if(e_time1[t]==INT_MAX)
			e_time1[t] = sum;
		for (int j = 1; j <= n; j++)
		{
			if (map[j][t] != -1) {
				e_time1[j] = whomin(e_time1[t] - map[j][t], e_time1[j]);
			}
		}
	}

	for (int i = tmap.size()-1;i >=0;i--) {
		if (map[tmap[i].first][tmap[i].second] != -1) {
			if (e_time[tmap[i].first] + map[tmap[i].first][tmap[i].second] == e_time1[tmap[i].second]
				&&e_time1[tmap[i].second]== e_time[tmap[i].second]) {
				toe.push_back(tmap[i]);
			}
		}
	}
	return true;
}
bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}


int main() {
	cin >> n >> m;
	for (int i = 1;i <= n;i++) {
		pre[i] = i;
	}
	for (int i = 1; i <=n ; i++)
	{
		for (int j = 1;j <= n;j++) {
			map[i][j] = -1;
		}
	}
	for (int i = 0; i < m; i++)
	{
		int x, y, v;
		cin >> x >> y >> v;
			tmap.push_back(make_pair(x, y));
			map[x][y] = v;
			in_count[y]++;
			out_count[x]++;
	}
	if (maxpath()) {
		cout << sum << endl;
		sort(toe.begin(), toe.end(), cmp);
		for (int i = 0; i < toe.size(); i++)
		{
			cout << toe[i].first << "->" << toe[i].second << endl;
		}
	}
	else {
		cout << 0 << endl;
	}
}*/