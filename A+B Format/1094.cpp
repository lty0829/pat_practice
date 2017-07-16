/*#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> a[101];
int n, m;
int main() {
	cin >> n >> m;
	int t, k, o;
	for (int i = 0; i < m; i++)
	{
		cin >> t >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> o;
			a[t].push_back(o);
		}
	}
	queue<int> Q;
	queue<int> tmp;
	int level = 0,maxl=1,islevel=1,levelc=0;
	Q.push(1);
	while (!Q.empty()) {
		level++;
		levelc = Q.size();
		if (levelc > maxl) {
			maxl = levelc;
			islevel = level;
		}
		while (!Q.empty()) {
			int y = Q.front();
			Q.pop();
			for (int i = 0; i < a[y].size(); i++)
			{
				tmp.push(a[y][i]);
			}
		}
		swap(tmp, Q);
	}
	cout << maxl << " " << islevel << endl;
	return 0;


}*/