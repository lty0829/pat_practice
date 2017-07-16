#include <iostream>
#include<vector>
#include<queue>
/*using namespace std;
int M, N;
vector<int> children[101];
int nochild[101],lastlevel;
int level[101];
void BFS() {
	queue<int> Q;
	Q.push(1);
	while (!Q.empty()) {
		int t = Q.front();
		Q.pop();
		if (children[t].size() != 0) {
			for (int i = 0; i < children[t].size(); i++)
			{
				Q.push(children[t][i]);
				level[children[t][i]] = level[t] + 1;
				if(level[children[t][i]]>lastlevel)
					lastlevel = level[children[t][i]];
			}
		}
		else {
			nochild[level[t]]++;
		}
	}
}
int main() {
	cin >> N >> M;
	int ID, K,child;
	for (int i = 0; i < M; i++)
	{
		cin >> ID >> K;
		for (int j = 0; j < K; j++)
		{
			cin >> child;
			children[ID].push_back(child);
		}
	}
	BFS();
	for (int i = 0;i <= lastlevel-1;i++) {
		cout << nochild[i] << " ";
	}
	cout << nochild[lastlevel] << endl;
	return 0;
}*/