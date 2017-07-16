/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> a;

int main() {
	int n,i,t;
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d", &t);
		a.push_back(t);
	}
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d", &t);
		a.push_back(t);
	}
	sort(a.begin(), a.end());
	if(a.size()%2==0)
		printf("%d\n", a[a.size() / 2 - 1]);
	else 
		printf("%d\n", a[a.size() / 2]);
	return 0;
}*/