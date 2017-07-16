/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<algorithm>
using namespace std;

int n, m,nextnum = INT_MAX;
int minx[1001] = {0};
vector<int> a;
vector<int> b;
bool iser = true;
void dfs(int sum, vector<int>::iterator it) {
	if (iser) {
		if (sum > m) {
			return;
		}
		else if (sum == m) {
			iser = false;
			return;
		}
		for (;it != a.end();it++) {
			b.push_back(*it);
			dfs(sum + *it,it+1);
			if (!iser)
				break;
			b.pop_back();
		}
	}
}
int main() {
	scanf("%d%d", &n, &m);
	int t = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		a.push_back(t);
		minx[t]++;
	}
	sort(a.begin(), a.end());
	dfs(0, a.begin());
	if (iser) {
		printf("No Solution\n");
	}
	else {
		for (int i = 0; i < b.size()-1; i++)
		{
			printf("%d ",b[i]);
		}
		printf("%d\n", b[b.size() - 1]);
	}
	return 0;
}*/