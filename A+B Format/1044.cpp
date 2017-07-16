/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
vector<pair<int, int>> r;
vector<pair<int, int>> minr;
int tmin = INT_MAX;
int N,a[100001],M;
int main() {
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	int sum = 0;;
	int beg = 0, end = 0;
	while (1) {
		if ((end == N&&sum<M)||beg>end) {
			break;
		}
		if (sum < M) {
			sum += a[end];
			end++;
		}
		else if (sum == M) {
			r.push_back(make_pair(beg + 1, end));
			if (end != N) {
				sum += a[end];
				end++;
			}
			else {
				sum = 0;
			}
		}
		else if (sum>M&&sum < tmin) {
			minr.clear();
			minr.push_back(make_pair(beg + 1, end));
			tmin = sum;
			sum -= a[beg];
			beg++;
		}
		else if (sum > M&&sum == tmin) {
			minr.push_back(make_pair(beg + 1, end));
			sum -= a[beg];
			beg++;
		}
		else {
			sum -= a[beg];
			beg++;
		}
	}
	if (r.empty()) {
		for (int i = 0; i < minr.size(); i++)
		{
			printf("%d-%d\n", minr[i].first, minr[i].second);
		}
		return 0;
	}
	for (int i = 0; i < r.size(); i++)
	{
		printf("%d-%d\n", r[i].first, r[i].second);
	}
	return 0;
}*/
