/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct tree {
	int v;
	tree* left;
	tree* right;
};
int pre[31], post[31];
int n;
bool flag = true;
tree* maketree(int pre1,int pre2,int post1,int post2)
{
	if (pre1 > pre2) return NULL;
	tree* node = new tree();
	node->v = pre[pre1];
	node->left = NULL;
	node->right = NULL;
	if (pre1 == pre2) {
		return node;
	}
	int k = 0;
	for (k = pre1 + 1;k <= pre2;k++) {
		if (pre[k] == post[post2 - 1])
			break;
	}
	if (k - pre1 > 1) {
		node->left = maketree(pre1 + 1, k-1, post1, post1 + k - pre1 - 2);
		node->right = maketree(k, pre2, post1 + k - pre1 - 1, post2 - 1);
	}
	else {
		flag = false;
		node->right = maketree(k, pre2, post1 + k - pre1 - 1, post2 - 1);
	}
	return node;

}
bool isf;
void inorder(tree*node) {
	if (node) {
		inorder(node->left);
		if(!isf){
			printf("%d", node->v);
			isf = true;
		}
		else {
			printf(" %d", node->v);
		}		
		inorder(node->right);
	}
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &pre[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &post[i]);
	}
	tree* root;
	root = maketree(0, n - 1, 0, n - 1);
	if (flag) printf("Yes\n");
	else printf("No\n");
	inorder(root);
	printf("\n");
	return 0;
}*/