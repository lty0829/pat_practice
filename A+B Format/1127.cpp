/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
struct node {
	int v;
	node*l;
	node*r;
};
int n, post[31], inorder[31];
node* maketree(int rf,int rt,int lf,int lt) {
	node*tree = new node();
	if (rf > rt) {
		return NULL;
	}
	int r = rf;
	while (inorder[r] != post[lt])
		r++;
	tree->v = post[lt];
	tree->l = maketree(rf, r-1, lf, lf - rf + r-1);
	tree->r = maketree(r + 1, rt, lf - rf + r, lt - 1);
	return tree;
}

vector<node*>Q;
int main() {
	scanf("%d", &n);
	int y;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &y);
		inorder[i] = y;
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &y);
		post[i] = y;
	}
	node*root;
	root = maketree(0, n - 1, 0, n - 1);
	bool isd = false;
	bool isf = true;
	vector<node*> tmp;
	Q.push_back(root);
	while (!Q.empty()) {
		while (!Q.empty()) {
			if (isd) {

				node*s = Q[Q.size()-1];
				Q.pop_back();
				cout << " " << s->v;
				if (s->l != NULL)
					tmp.push_back(s->l);
				if (s->r != NULL)
					tmp.push_back(s->r);
			}
			else {
				node*s = Q[Q.size() - 1];
				Q.pop_back();
				if (isf) {
					cout << s->v;
					isf = false;
				}
				else {
					cout << " " << s->v;
				}
				if (s->r != NULL)
					tmp.push_back(s->r);
				if (s->l != NULL)
					tmp.push_back(s->l);
			}
		}
		isd = !isd;
		swap(Q, tmp);
	}
	return 0;
}*/