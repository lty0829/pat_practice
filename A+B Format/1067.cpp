/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
using namespace std;
int n;
map<int, int>a;
int postion = 0;
int dsnum = 0;
int main() {
	scanf("%d", &n);
	int t = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		if (i != 0 && i == t) {
			dsnum++;
			continue;
		}
		if (t == 0) {
			postion = i;
		}
		a[t] = i;
	}
	int r = 0, g = postion, num=1,qun=1;
	if (postion == 0 && dsnum == n-1) {
		cout << 0 << endl;
		return 0;
	}
	while (num + dsnum != n) {
		a.erase(r);
		while (g != r) {
			int s = g;
			g = a[g];
			num++;
			a.erase(s);
		}
		if (!a.empty()) {
			r = (*a.begin()).second;
			g = a[r];
			qun++;
			num++;
		}

	}
	cout << n - 2 + qun - dsnum << endl;
}*/

