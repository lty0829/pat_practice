/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<cmath>  
using namespace std;
int maxs = 0;
vector<int> w;
int n, k,p;
void dfs(int t,vector<int> &b,int m) {
	if (t == k&&m==0) {
		int num = 0;
		for (int y = 0;y < b.size();y++) {
			num += b[y];
		}
		if (num >= maxs) {
			maxs = num;
			w = b;
		}
		return;
	}
	else if (t >= k||m<=0) {
		return;
	}
	int higher = sqrt(m);
	int lower = t>0 ? b[t - 1] : 1;
	for (int i = lower; i <= higher; i++)
	{
		long tmp = pow(i, p);
		if (tmp > m) {
			return;
		}
		else {
			b[t] = i;
			dfs(t + 1, b, m - tmp);
		}
	}
	return;
}
int main() {
	scanf("%d%d%d", &n, &k, &p);
	vector<int> factor(k);
	dfs(0, factor, n);
	if (w.size() == k) {
		printf("%d = ", n);
		for (int i = k-1; i >= 0; i--)
		{
			if (i == k-1) {
				printf("%d^%d", w[i],p);
			}
			else {
				printf(" + %d^%d", w[i],p);
			}
		}
		cout << endl;
	}
	else {
		printf("Impossible\n");
	}
	return 0;
}*/