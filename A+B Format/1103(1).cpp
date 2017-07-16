/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>  
#include <vector>  
#include <cmath>  
using namespace std;
int N, K, P;
vector<int> finalFactor;
long sum = 0;

bool dfs(int n, int cur, vector<int> &factor) {
	if (cur == K) {
		//因子的个数达到了k个  
		if (n == 0) {
			//式子的和刚好与N相等  
			int tmpSum = 0;
			for (int i = 0; i<factor.size(); i++) {
				tmpSum += factor[i];
			}
			if (tmpSum >= sum) {
				finalFactor = factor;
				sum = tmpSum;
			}
			return true;
		}
		else {
			return false;
		}
	}
	int higher = sqrt(n);
	int lower = cur>0 ? factor[cur - 1] : 1;
	for (int i = lower; i <= higher; i++) {
		long tmp = pow(i, P);
		if (tmp > n) {
			return false;
		}
		else {
			factor[cur] = i;
			dfs(n - tmp, cur + 1, factor);
		}
	}
	return true;
}

int main(int argc, char** argv) {
	scanf("%d%d%d", &N, &K, &P);
	vector<int> factor(K);
	dfs(N, 0, factor);
	if (finalFactor.size() == 0) {
		printf("Impossible\n");
		return 0;
	}
	printf("%d = ", N);
	for (int i = finalFactor.size() - 1; i >= 0; i--) {
		if (i != 0)
			printf("%d^%d + ", finalFactor[i], P);
		else
			printf("%d^%d\n", finalFactor[i], P);
	}
	return 0;
}*/