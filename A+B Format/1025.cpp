/*#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#define INF 0x6FFFFFFF 
using namespace std;
struct student {
	string id;
	int score;
	int rank[2];
	int local;
};
vector<student> nfinal;

bool cmp(student a,student b) {		
	if (a.score == b.score)
		return a.id < b.id;
	return a.score > b.score;
}
int main() {
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		
		cin >> m;
		vector<student> nlocal(m);
		for (int j = 0; j < m; j++)
		{
			cin >> nlocal[j].id >> nlocal[j].score;
			nlocal[j].local = i + 1;
		}
		sort(nlocal.begin(), nlocal.end(), cmp);
		int rank = 0;
		int thiss = INF;
		for (int j = 0;j < m;j++) {
			if (thiss == nlocal[j].score) {
				nlocal[j].rank[1] = rank;
			}
			else {
				rank = j + 1;
				nlocal[j].rank[1] = j + 1;
				thiss = nlocal[j].score;
			}
			nfinal.push_back(nlocal[j]);
		}
		
	}
	sort(nfinal.begin(), nfinal.end(),cmp);
	cout << nfinal.size() << endl;
	int rank = 0;
	int thiss = INF;
	for (int i = 0;i < nfinal.size();i++) {
		if (thiss == nfinal[i].score) {
			nfinal[i].rank[0] = rank;
		}
		else {
			rank = i + 1;
			nfinal[i].rank[0] = i + 1;
			thiss = nfinal[i].score;
		}
		cout << nfinal[i].id << " " << nfinal[i].rank[0] << " " << nfinal[i].local << " " << nfinal[i].rank[1] << endl;
	}

	return 0;
}*/