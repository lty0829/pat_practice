/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
struct node {
	string e;
};
int a[10001];
node b[10001];
int n, k;
bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return true;
}
int main() {
	scanf("%d", &n);
	int t;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		if (i == 0) {
			b[t].e = "Mystery Award";
			a[t] = 1;
		}
		else if (isPrime(i+1)) {
			b[t].e = "Minion";
			a[t] = 1;
		}
		else{
			b[t].e = "Chocolate";
			a[t] = 1;
		}
	}
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &t);
		if(a[t]==0)
			printf("%04d: Are you kidding?\n", t);
		else
			printf("%04d: %s\n", t, b[t].e.c_str());
		if (a[t] == 1) {
			a[t] = 2;
			b[t].e = "Checked";
		}
	}
	return 0;
}*/
