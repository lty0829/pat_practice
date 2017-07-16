/*#include<iostream>
using namespace std;
int n;
int bac[31];
int med[31];
typedef struct TreeNode *Tree;
struct TreeNode {
	int v;
	Tree left, right;
};
void inp(Tree T) {
	if (T) {
		cout <<" "<< T->v;
		inp(T->left);
		inp(T->right);
	}
}
Tree maketree(int pf, int pb, int lf, int lb) {
	if (pf > pb) return NULL;
	int p = lf;
	while (med[p] != bac[pb]) p++;

	Tree tree = (Tree)malloc(sizeof(struct TreeNode));
	tree->v = med[p];
	tree->left = maketree(pf, pb - lb + p - 1, lf, p - 1);
	tree->right = maketree(pb - lb + p, pb - 1, p + 1, lb);

	return tree;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> bac[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> med[i];
	}
	Tree T = maketree(0, n - 1, 0, n - 1);
	cout << "Preorder:";
	inp(T);
	
	return 0;
}*/