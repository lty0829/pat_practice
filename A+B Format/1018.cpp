/*#include<iostream>
#include<vector>
#define INT_MAX 0x7fffffff
using namespace std;
struct station {
	int road = 0;
	int numbike = 0;
};
int Cmax, N, p, M;
station mark[501];
int map[501][501];
int minsend = INT_MAX, minback = INT_MAX,mindict = INT_MAX;
int cursend = 0;
int curback = 0;
vector<int> node;
vector<int> list;
void dfs(int p,int start,int dict) {
	if (start == p) {
		if (mindict > dict) {
			mindict = dict;
			minsend = cursend;
			minback = curback;
			list.clear();list.push_back(0);
			for (int i = 0;i < node.size();i++)
				list.push_back(node[i]);
		}
		else if (mindict == dict) {
			if (cursend < minsend || cursend == minsend && curback < minback) {
				mindict = dict;
				minsend = cursend;
				minback = curback;
				list.clear();list.push_back(0);
				for (int i = 0;i < node.size();i++)
					list.push_back(node[i]);
			}
		}
		return;
	}
	for (int i = 1;i <= N;i++) {
		if (mark[i].road != 1&&map[start][i]!=0) {
			mark[i].road = 1;
			int lastsend = cursend, lastback = curback;
			node.push_back(i);
			if (mark[i].numbike + curback < Cmax / 2) {
				cursend += Cmax / 2 - (mark[i].numbike + curback);
				curback = 0;
			}
			else
				curback = mark[i].numbike + curback - Cmax / 2;
			dfs(p, i, dict + map[start][i]);
			cursend = lastsend;
			curback = lastback;
			node.pop_back();
			mark[i].road = 0;
		}
	}
}


int main() {

	cin >> Cmax >> N >> p >> M;
	for (int i = 1;i <= N;i++) {
		cin >> mark[i].numbike;
	}
	for (int i = 0;i < M;i++) {
		int r, t,pos;
		cin >> r >> t >> pos;
		map[r][t] = map[t][r] = pos;
	}
	dfs(p, 0, 0);
	cout << minsend << " "<<list[0];
	for (int i = 1;i < list.size();i++) {
		cout << "->" << list[i];
	}
	cout << " " << minback << endl;
	return 0;
}*/