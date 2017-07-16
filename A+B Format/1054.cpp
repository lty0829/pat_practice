/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
using namespace std;
int n, m,color,maxl =0;
map<int,int> a;
int main() {
	scanf("%d%d", &m, &n);
	int t;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0;j < m;j++) {
			scanf("%d", &t);
			a[t]++;
			if (color!=t&&a[t] > maxl) {
				maxl = a[t];
				color=t;
			}
			else if (color == t) {
				maxl = a[t];
			}
		}

	}
	cout << color << endl;
	return 0;
}*/
