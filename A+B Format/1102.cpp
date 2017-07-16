/*#include<iostream>
#include<queue>
using namespace std;
struct node {
	int v;
	int left;
	int right;
};
int n;
node T[11],T1[11];
int buildtree() {
	int Root = -1, N, check[11], i;
	char cl, cr;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		check[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> cl >> cr;
		if (cl != '-') {
			T[i].left = cl - '0';
			T1[i].right = cl - '0';
			check[T[i].left] = 1;
		}
		else {
			T[i].left = -1;
			T1[i].right = -1;
		}
		if (cr != '-') {
			T[i].right = cr - '0';
			T1[i].left = cr - '0';
			check[T[i].right] = 1;
		}
		else
		{
			T[i].right = -1;
			T1[i].left = -1;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (check[i] != 1) break;
	}
	Root = i;
	return Root;
}
bool isr = false;
void print1(int g) {
	if (g != -1) {
		print1(T1[g].left);
		if (!isr) {
			cout << g;
			isr = true;
		}
		else {
			cout << " " << g;
		}
		print1(T1[g].right);
	}
}
int main() {
	int root = buildtree();
	queue<int> Q;
	Q.push(root);
	bool iu = false;
	while (!Q.empty()) {
		int y = Q.front();
		if (!iu) {
			cout << y;
			iu = true;
		}
		else {
			cout << " " << y;
		}
		Q.pop();
		if (T1[y].left != -1) {
			Q.push(T1[y].left);
		}
		if (T1[y].right != -1) {
			Q.push(T1[y].right);
		}
	}
	cout << endl;
	print1(root);
	cout << endl;
	return 0;
}*/
