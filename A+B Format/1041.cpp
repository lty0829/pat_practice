/*#include<iostream>
#include<vector>
using namespace std;
struct point {
	int index;
	bool isque = false;
};
struct point1 {
	int wea;
	int num;
};
point1 a[10001];
point b[10001];
int N;
int main() {
	cin >> N;
	int t;
	int y = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> t;
		if (a[t].num != 0) {
			a[t].num++;
			b[a[t].wea].isque = true;
		}
		else {
			a[t].num++;
			b[y].index = t;
			a[t].wea = y;
			y++;
		}
	}
	for (int i = 0; i < y; i++)
	{
		if (!b[i].isque) {
			cout << b[i].index << endl;
			return 0;
		}
	}
	cout << "None" << endl;
	return 0;
}*/