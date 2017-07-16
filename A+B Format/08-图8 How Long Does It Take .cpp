/*#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int map[102][102];
int in_count[102],e_time[102];
int n, m, sum;
vector<int> a;
int whomax(int a, int b) {
	return a < b ? b : a;
}


bool maxpath() {
	stack<int> s;
	for (int i = 0; i < n; i++)
	{
		if (in_count[i] == 0) {
			s.push(i);
		}
	}
	while (!s.empty()) {
		int flag = s.top();
		s.pop();
		a.push_back(flag);
		for (int i = 0; i < n; i++)
		{
			if (map[flag][i] != 0) {
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
		for (int j = 0; j < n; j++)
		{
			if (map[j][t] != 0)
				e_time[t] = whomax(e_time[j] + map[j][t], e_time[t]);
			juic = whomax(juic, e_time[t]);
		}
		sum = juic;
	}
	return true;
}



int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y, v;
		cin >> x >> y >> v;
		if (v != 0) {
			map[x][y] = v;
			in_count[y]++;
		}
	}
	if (maxpath()) {
		cout << sum << endl;
	}
	else {
		printf("Impossible\n");
	}
}*/