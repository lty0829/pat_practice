/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
vector<long long>a;
long long b[100001];
long long c[100001];
int main() {
	scanf("%d", &n);
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &b[i]);
		c[i] = b[i];
	}
	sort(c, c + n);
	for (int i = 0; i < n; i++)
	{
		if (b[i]>max)    max = b[i];
		if (c[i] == b[i]&&c[i]==max) {
			a.push_back(c[i]);
		}
	}
	printf("%d\n", a.size());
	if (a.size() == 0) {
		printf("\n");
		return 0;
	}
	printf("%lld", a[0]);
	for (int i = 1; i < a.size(); i++)
	{
		printf(" %lld", a[i]);
	}
	cout << endl;
	return 0;

}*/