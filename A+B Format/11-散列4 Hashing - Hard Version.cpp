/*#include<iostream>
#include<algorithm>
using namespace std;
struct point {
	int v;
	int pos;
	int wait;
	int use;
};
point a[1001];
int n;
int mark[1001];
bool cmp(point a, point b) {
	return a.v < b.v;
}
bool isfirst(int d) {
	int mod = a[d].v%n;
	if (a[d].wait == 0 && mark[mod] == 0) {
		mark[mod] = 1;
		return true;
	}
	else {
		for (int i = mod; i != a[d].pos; i=(i+1)%n)
		{
			if (mark[i] == 0) {
				return false;
			}
		}
		mark[a[d].pos] = 1;
		return true;
	}
}

int main() {
	cin >> n;
	int m, t = 0, mod;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		if (m != -1) {
			mod = m%n;
			if (mod <= i)
				a[t].wait = i - mod;
			else
				a[t].wait = i + n - mod;
			a[t].pos = i;
			a[t].v = m;
			a[t].use = 0;
			t++;
		}
	}
	sort(a, a + t, cmp);
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < t; j++) {
			if (a[j].use == 0 && isfirst(j)) {
				a[j].use = 1;
				if (i == 0)
					cout << a[j].v;
				else
					cout << ' ' << a[j].v;
				break;
			}
		}
	}
	cout << endl;
	return 0;
}*/
