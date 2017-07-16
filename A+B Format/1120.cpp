/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include <string.h>
using namespace std;
int getnum(char d[]) {
	int num = 0;
	for (int i = 0; i < strlen(d); i++)
	{
		num += d[i] - '0';
	}
	return num;
}
int mark[1001];
int n;
vector<int> a;
int main() {
	scanf("%d", &n);
	char e[6];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", e);
		int t = getnum(e);
		if (mark[t] == 0) {
			mark[t] = 1;
			a.push_back(t);
		}

	}
	sort(a.begin(), a.end());
	printf("%d\n", a.size());
	for (int i = 0; i < a.size(); i++)
	{
		if (i == 0) {
			printf("%d", a[i]);
		}
		else {
			printf(" %d", a[i]);
		}
	}
	printf("\n");
	return 0;
}*/