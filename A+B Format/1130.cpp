/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct node {
	char v[20];
	int r;
	int l;
};
int check[30];
node tree[30];
int n;
int maketree(int n) 
{
	int le, ri;
	for (int i = 1;i <= n;i++) {
		cin >> tree[i].v;
		scanf("%d%d", &le, &ri);
		if (le != -1) {
			tree[i].l = le;
			check[le] = 1;
		}
		else
			tree[i].l = -1;
		if (ri != -1) {
			tree[i].r = ri;
			check[ri] = 1;
		}
		else {
			tree[i].r = -1;
		}
	}
	int i;
	for (i = 1; i <= n; i++)
	{
		if (check[i] == 0) {
			break;
		}
	}
	return i;

}
void printtree(int r, int depth) {
	if (r != -1) {
		if (!(depth == 0 || tree[r].l == -1 && tree[r].r == -1))
			cout << "(";
		printtree(tree[r].l,depth+1);
		cout << tree[r].v;
		printtree(tree[r].r,depth+1);
		if (!(depth == 0 || tree[r].l == -1 && tree[r].r == -1))
			cout << ")";
	}
}
int main() {
	scanf("%d", &n);
	int root = maketree(n);
	printtree(root,0);
	char c;
	int t;
	scanf("%c%d", &c,&t);
	cout << t <<" "<<c<< endl;
	return 0;
}*/