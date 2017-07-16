/*#include<iostream>
#include<queue>
using namespace std;
int pos[30],in[30],N;
typedef struct TreeNode *Tree;
struct TreeNode {
	int v;
	Tree left, right;
};
bool first = true;
void printr(Tree root) {
	queue<Tree> Q;
	Q.push(root);
	while (!Q.empty()) {
		Tree thist = Q.front();
		Q.pop();
		if (thist == NULL) continue;
		if (first) {
			cout << thist->v;
			first = false;
		}
		else {
			cout << " " << thist->v;
		}
		Q.push(thist->left);
		Q.push(thist->right);
	}
}
Tree makeTree(int pf,int pb,int lf,int lb) {
	if (pf > pb) return NULL;
	int p = lf;
	while (in[p] != pos[pb]) p++;

	Tree tree = (Tree)malloc(sizeof(struct TreeNode));
	tree->v = in[p];
	tree->left = makeTree(pf, pb-lb+p-1, lf, p - 1);
	tree->right = makeTree(pb - lb+p, pb - 1, p + 1, lb);

	return tree;
}
int main() {
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> pos[i];
	}
	for (int i = 0;i < N;i++) {
		cin >> in[i];
	}
	Tree a = makeTree(0,N-1,0,N-1);
	printr(a);
	return 0;
}*/
