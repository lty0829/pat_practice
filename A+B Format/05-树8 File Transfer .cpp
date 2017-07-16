/*#include<iostream>
using namespace std;
int pre[10002];
int t;
int find(int a){
	int f = a;
	while (f != pre[f]) {
		f = pre[f];
	}
	int i = a, j;
	while (pre[i] != f) {
		j = pre[i];
		pre[i] = f;
		i = j;
	}
	return f;
}
void Unix(int a, int b) {
	int x = find(a);
	int y = find(b);
	if (x < y) {
		pre[y] = x;
		t--;
	}
	else {
		pre[x] = y;
		t--;
	}
}
void mix(int a, int b) {
	int x = find(a);
	int y = find(b);
	if (x != y) {
		cout << "no" << endl;
	}
	else {
		cout << "yes" << endl;
	}
}
int main() {
	int n;
	cin >> n;
	t = n - 1;
	for (int i = 1;i <= n;i++) {
		pre[i] = i;
	}
	while (1) {
		char a;
		int i, j;
		cin >> a;
		if (a == 'C') {
			cin >> i >> j;
			mix(i, j);
		}
		else if (a == 'I') {
			cin >> i >> j;
			Unix(i, j);
		}
		else {
			break;
		}
	}
	if (t != 0)
		printf("There are %d components.", t+1);
	else
		printf("The network is connected.");
	return 0;
}*/