/*#include<iostream>
#include<vector>
using namespace std;
vector<int> a, pre1, pre2,post1,post2;
struct node {
	int date;
	node*r;
	node*l;
};
void insertN(node*&tree, int x) {
	if (tree == NULL) {
		tree = new node();
		tree->date = x;
		tree->l = NULL;
		tree->r = NULL;
	}
	else {
		if (tree->date > x) {
			insertN(tree->l, x);
		}
		else {
			insertN(tree->r, x);
		}
	}
}
void preorder(node* root)
{
	if (root == NULL) return;
	pre1.push_back(root->date); 
	preorder(root->l);
	preorder(root->r);
}
void preorder1(node* root)
{
	if (root == NULL) return;
	pre2.push_back(root->date);
	preorder1(root->r);
	preorder1(root->l);
}
void postorder(node* root)
{
	if (root == NULL) return;
	postorder(root->l);
	postorder(root->r);
	post1.push_back(root->date);
}
void postorder1(node* root)
{
	if (root == NULL) return;
	postorder1(root->r);
	postorder1(root->l);
	post2.push_back(root->date);
}

int N;
int main() {
	cin >> N;
	node* root = NULL;
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		insertN(root, x);
		a.push_back(x);
	}
	preorder(root);
	preorder1(root);

	if (a == pre1)
	{
		cout << "YES" << endl;
		postorder(root);
		cout << post1[0];
		for (int i = 1;i<post1.size();i++)
		{
			cout << " " << post1[i];
		}
	}
	else if (a == pre2)
	{
		cout << "YES" << endl;
		postorder1(root);
		cout << post2[0];
		for (int i = 1;i<post2.size();i++)
		{
			cout << " " << post2[i];
		}
	}
	else
	{
		cout << "NO" << endl;
	}
}*/