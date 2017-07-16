/*#include<iostream>
using namespace std;
struct score {
	int tag;
	int c;
	int m;
	int e;
	int a=-1;
};
score a[1000000];
int N, M;
int b[2001][5];
int pai(int w,int t) {
	int r=1;
	for (int i = 0; i < N; i++)
	{
		if (i != w&&b[w][t]<b[i][t]) {
			r++;
		}
	}
	return r;
}
int main() {
	cin >> N >> M;
	for (int i = 0;i < N;i++) {
		int t;
		cin >> t;
		a[t].tag = i;
		cin >> a[t].c >> a[t].m >> a[t].e;
		a[t].a = (a[t].c + a[t].m + a[t].e) / 3;
		b[i][0] = a[t].c;
		b[i][1] = a[t].m;
		b[i][2] = a[t].e;
		b[i][3] = a[t].a;
		b[i][4] = t;
	}
	for (int i = 0;i < M;i++) {
		int hao;
		cin >> hao;
		if (a[hao].a == -1) {
			cout << "N/A" << endl;
			continue;
		}
		int c = pai(a[hao].tag, 0);
		int m = pai(a[hao].tag, 1);
		int e = pai(a[hao].tag, 2);
		int v = pai(a[hao].tag, 3);
		if (v <= c&&v <= e&&v <= m) {
			cout << v << " " << "A" << endl;
		}
		else if (c <= e&&c <= m) {
			cout << c << " " << "C" << endl;
		}
		else if (m <= e) {
			cout << m << " " << "M" << endl;
		}
		else
			cout << e << " " << "E" << endl;
	}
	return 0;
}*/