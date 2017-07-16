/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>  
#include<vector>   
using namespace std;
const int maxn = 50000 + 10;
int counts[maxn] = { 0 };
vector<pair<int, int>>rt;
int N, K;
bool cmp(pair<int, int>a, pair<int, int>b) {
	if (a.second != b.second) {
		return a.second > b.second;
	}
	return a.first < b.first;
}
int main()
{
	scanf("%d%d", &N, &K); int t;
	pair<int, int> m = make_pair(0, 0);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &t);
		if (i)
		{
			printf("%d:", t); int j = 0;
			for (vector<pair<int, int>>::iterator it
				= rt.begin(); it != rt.end() && j<K; it++, j++)
			{
				printf(" %d", it->first);
			}
			printf("\n");
		}
		counts[t]++;
		m.first = t;
		m.second = counts[t];
		vector<pair<int, int>>::iterator it = find(rt.begin(), rt.end(), make_pair(t,counts[t]-1));
		if (it != rt.end()) {
			rt.erase(it);
		}
		rt.push_back(m);
		sort(rt.begin(), rt.end(), cmp);
	}
	return 0;
}*/