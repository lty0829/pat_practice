/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int age[51],n;
vector<int> a;
int main() {
	scanf("%d", &n);
	int y;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &y);
		if (age[y] == 0) {
			a.push_back(y);
		}
		age[y]++;
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size(); i++)
	{
		printf("%d:%d\n", a[i], age[a[i]]);
	}
	return 0;
}*/