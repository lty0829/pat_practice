/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<queue>
using namespace std;
int n, m;
int rankr[1001];
int mice[1001];
queue<int> a;
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &mice[i]);
	}
	int t;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		a.push(t);
	}
	while (a.size() != 1) {
		int ranknum = a.size() / m + ((a.size() % m == 0) ? 0 : 1);
		int curank = ranknum + 1;
		queue<int> tmp;
		for (int i = 0; i < ranknum; i++)
		{
			int max = -1;
			int maxnum = -1;
			for (int j = i*m; j < i*m+m&&a.size()!=0; j++)
			{
				int index = a.front();
				a.pop();
				if (mice[index] > max) {
					max = mice[index];
					if (maxnum != -1)
					{
						rankr[maxnum] = curank;
					}
					maxnum = index;
				}
				else {
					rankr[index] = curank;
				}
			}
			tmp.push(maxnum);
		}
		a = tmp;
	}
	rankr[a.front()] = 1;
	cout << rankr[0];
	for (int i = 1; i < n; i++)
	{
		cout << " " << rankr[i];
	}
	cout << endl;
	return 0;
}*/