/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;
struct tree {
	int right;
	int left;
};
tree a[21];
int mark[21];
int n;
int bulidtree() {
	char l[5], r[5];
	for (int i = 0; i < n; i++)
	{
		cin >> l >> r;
		if (l[0] != '-') {
			sscanf(l, "%d", &a[i].left);
			mark[a[i].left] = 1;
		}
		else {
			a[i].left = -1;
		}
		if (r[0] != '-') {
			sscanf(r, "%d", &a[i].right);
			mark[a[i].right] = 1;
		}
		else {
			a[i].right = -1;
		}
	}
	int root;
	for (int i = 0; i < n; i++)
	{
		if (mark[i] == 0) {
			root = i;
			break;
		}
	}
	return root;
}

int main() {
	cin >> n;
	if (n == 1)
	{
		puts("YES 0");
		return 0;
	}
	int root = bulidtree();
	queue <int> Q;
	int r, cnt = 1;
	bool flag = true;
	Q.push(root);
	while (!Q.empty()) {
		r = Q.front();
		Q.pop();
		if (a[r].left != -1) {
			Q.push(a[r].left);
		}
		else {
			flag = false;
			break;
		}
		cnt++;
		if (cnt == n)
			break;
		if (a[r].right != -1) {
			Q.push(a[r].right);
		}
		else {
			flag = false;
			break;
		}
		cnt++;
		if (cnt == n)
			break;
	}
	if (!flag)
		printf("NO %d\n", root);
	else
		printf("YES %d\n", a[r].right == -1 ? a[r].left : a[r].right);
	return 0;
}*/