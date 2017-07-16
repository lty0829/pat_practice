/*#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
struct node {
	int v = 0;
	node* left;
	node* right;
};
int u = -1;
int n;
int a[101];
int b[101][2];
node* makeT(int v,int l,int r) {
	if (v != -1) {
		u++;
		int t = u;
		node*T = new node();
		if (b[t][0] != -1 && b[t][1] != -1) {
			T->left = makeT(b[t][0], l, l + b[t][1] - b[t][0] - 1);
			T->v = a[l + b[t][1] - b[t][0]];
			T->right = makeT(b[t][1], l + b[t][1] - b[t][0] + 1, r);
			return T;
		}
		else if (b[t][0] == -1 && b[t][1] != -1) {
			T->left = makeT(b[t][0], 0, 0);
			T->v = a[l];
			T->right = makeT(b[t][1], l + 1, r);
			return T;
		}
		else if (b[t][0] != -1 && b[t][1] == -1) {
			T->left = makeT(b[t][0], l, r-1);
			T->v = a[r];
			T->right = makeT(b[t][1], 0 , 0);
			return T;
		}
		if (b[t][0] == -1 && b[t][1] == -1) {
			T->left = makeT(b[t][0], 0,0);
			T->v = a[l];
			T->right = makeT(b[t][1], 0,0);
			return T;
		}
	}
	else {
		return NULL;
	}
}
int main() {
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> b[i][0] >> b[i][1];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	node* T;
	T = makeT(0,0,n-1);
	queue<node*>Q;
	Q.push(T);
	bool isf = false;
	while (!Q.empty()) {
		node*y = Q.front();
		Q.pop();
		if (!isf) {
			cout << y->v;
			isf = true;
		}
		else
			cout <<" "<<y->v ;
		if (y->left) {
			Q.push(y->left);
		}
		if (y->right) {
			Q.push(y->right);
		}
	}
	cout << endl;
	return 0;
}*/