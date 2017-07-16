/*#include<iostream>
#include<map>
#include<string>
#include<limits.h>
#include<vector>
using namespace std;
map<string, int> happiness;
map<string, map<string, int>> dist;
map<string, int> mark;
int n, m;
vector<string> a;
vector<string> b;
int minpath = INT_MAX;
int maxhapp = 0;
int maxave = 0;
int roadnum = 1;

void dfs(string city, int num,int path,int happ) {
	if (city == "ROM") {
		if (path < minpath) {
			minpath = path;
			maxhapp = happ;
			maxave = happ / num;
			roadnum = 1;
			b = a;
		}
		else if (path == minpath) {
			roadnum++;
			if (happ > maxhapp) {
				maxhapp = happ;
				maxave = happ / num;
				b = a;
			}
			else if (happ == maxhapp) {
				if ((happ / num) > maxave) {
					maxave = happ / num;
					b = a;
				}
			}
		}
		return;
	}
	for (map<string, int>::iterator it = dist[city].begin();it != dist[city].end();it++) {
		if (mark[it->first] == 0) {
			a.push_back(it->first);
			mark[it->first] = 1;
			dfs(it->first, num + 1, path + it->second, happ + happiness[it->first]);
			mark[it->first] = 0;
			a.pop_back();
		}
	}
}



int main() {
	cin >> n >> m;
	string star;
	cin >> star;
	mark[star] = 1;
	string city1,city2;
	int hap;
	for (int i = 1;i < n;i++) {
		
		cin >> city1 >> hap;
		happiness[city1] = hap;
		mark[city1] = 0;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> city1 >> city2 >> hap;
		dist[city1][city2] = hap;
		dist[city2][city1] = hap;
	}
	a.push_back(star);
	if (star == "ROM") {
		cout << 1 << " " << 0 << " " << 0 << " " << 0 << endl;
		cout << star << endl;
		return 0;
	}
	dfs(star, 0, 0, 0);
	cout << roadnum << " " << minpath << " " << maxhapp << " " << maxave << endl;
	cout << star;
	for (int i = 1; i < b.size(); i++)
	{
		cout << "->" << b[i];
	}
	cout << endl;
	return 0;
}*/