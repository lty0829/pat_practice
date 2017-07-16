#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
vector<pair<int,int>> b[10001];
int mark[10001];
int n;
vector<pair<int, int>>linew;
vector<pair<int, int>>lineb;
int minnuml = 10000;
void dfs(int x1, int x2, int line, int numl) {
	if (x1 == x2) {
		if (lineb.empty()) {
			lineb = linew;
			minnuml = numl;
		}
		else if(lineb.size()>linew.size()){
			lineb = linew;
			minnuml = numl;
		}
		else if (lineb.size() == linew.size()) {
			if (minnuml > numl) {
				lineb = linew;
				minnuml = numl;
			}
		}
		return;
	}
	else {
		for (int i = 0; i < b[x1].size(); i++)
		{
			if (mark[b[x1][i].second] == 0) {
				mark[b[x1][i].second] = 1;
				linew.push_back(b[x1][i]);
				if (line != 0 && line != b[x1][i].first) numl++;
				dfs(b[x1][i].second, x2, b[x1][i].first,numl);
				if (line != 0 && line != b[x1][i].first) numl--;
				linew.pop_back();
				mark[b[x1][i].second] = 0;
			}
		}
	}
}
int main() {
	scanf("%d", &n);
	int k,t[101];
	for (int i = 1; i <=n ; i++)
	{
		scanf("%d", &k);
		for (int j = 0; j < k; j++)
		{
			scanf("%d", &t[j]);
			if (j != 0) {
				b[t[j]].push_back(make_pair(i, t[j - 1]));
				b[t[j - 1]].push_back(make_pair(i, t[j]));
			}
		}
	}
	scanf("%d", &k);
	int x1, x2;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < 10001; j++)
		{
			mark[j] = 0;
		}
		linew.clear();
		lineb.clear();
		minnuml = 10000;
		scanf("%d%d", &x1, &x2);
		dfs(x1, x2,0,0);
		int begin = x1, end=-1;
		int transfer = lineb[0].first;
		printf("%d\n", lineb.size());
		for (int i = 0; i < lineb.size(); i++)
		{
			if (transfer != lineb[i].first) {
				printf("Take Line#%d from %04d to %04d.\n", transfer, begin, end);
				begin = end;
				end = lineb[i].second;
				transfer = lineb[i].first;
			}
			else {
				end = lineb[i].second;
			}
		}
		printf("Take Line#%d from %04d to %04d.\n", transfer, begin, end);
	}
	return 0;
}
