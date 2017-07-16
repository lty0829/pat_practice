/*#include<iostream>
#include<queue>
#include<string>
using namespace std;
int n, m, k, q;
int T[1005];
queue<int> window[21];
queue<int> yellow;
int time1[1005][2];
bool isto[1005];
bool isNU() {
	for (int i = 0;i < n;i++) {
		if (!window[i].empty()) {
			return true;
		}
	}
	return false;
}
void list() {
	int t[21];
	for (int i = 0;i < n;i++) {
		t[i] = T[window[i].front()];
		isto[i] = true;
	}
	while (isNU()) {
		int min = 100000,j=-1;
		for (int i = 0;i < n;i++) {
			if (t[i] < min&&!window[i].empty()) {
				min = t[i];
				j = i;
			}
		}
		if (j == -1)
			break;
		int r = window[j].front();
		time1[r][0] = 8 + t[j] / 60;
		time1[r][1] = t[j] % 60;	
		if (!isto[j]) {
			time1[r][0] = -1;
		}
		if (time1[r][0] >=17) {
			isto[j] = false;
		}
		window[j].pop();
		if (!yellow.empty()) {
			window[j].push(yellow.front());
			yellow.pop();
		}
		if(!window[j].empty())
			t[j] += T[window[j].front()];

	}
}
int main() {
	cin >> n >> m >> k >> q;
	for (int i = 1;i <= k;i++) {
		int t;
		cin >> t;
		T[i] = t;
	}
	int peo = 1;
	while (window[n - 1].size() < m) {
		for (int i = 0;i < n;i++) {
			window[i].push(peo);
			peo++;
		}
	}
	while (peo <= k) {
		yellow.push(peo);
		peo++;
	}
	list();
	for (int i = 1;i <= q;i++) {
		int r;
		cin >> r;
		if (time1[r][0] == -1)
			cout << "Sorry" << endl;
		else
			printf("%02d:%02d\n", time1[r][0], time1[r][1]);
	}
}*/
/*
2 2 9 9
1 2 6 4 3 1 9 100 534
1 2 3 4 5 6 7 8 9
*/
