/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct tree{
	int v;
	tree*left;
	tree*right;
};
tree*root;
int a[1001];
tree* Insert(tree* BST, int X)
{
	if (!BST) { 
		BST = new tree();
		BST->v = X;
		BST->left = BST->right = NULL;
	}
	else {
		if (X <= BST->v)
			BST->left = Insert(BST->left, X);   
		else  if (X > BST->v)
			BST->right= Insert(BST->right, X); 									
	}
	return BST;
}
int main() {
	int n;
	scanf("%d", &n);
	int t;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		root = Insert(root, t);
	}
	vector<int> s;
	queue<tree*> Q;
	queue<tree*> tmp;
	Q.push(root);
	s.push_back(1);
	int num = 0;
	while (!Q.empty()) {
		num = 0;
		while (!Q.empty()) {
			tree*r = Q.front();
			Q.pop();
			if (r->left) {
				num++;
				tmp.push(r->left);
			}
			if (r->right) {
				num++;
				tmp.push(r->right);
			}

		}
		swap(Q, tmp);
		s.push_back(num);
	}
	printf("%d + %d = %d\n", s[s.size()-2], s[s.size()-3], s[s.size() - 2]+ s[s.size() - 3]);


	return 0;
}*/