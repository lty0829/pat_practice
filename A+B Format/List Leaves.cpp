/*#define MaxTree 11
#include<iostream>
#include<queue>
using namespace std;
struct TreeNode
{
	char Element;
	int left;
	int right;
}T1[MaxTree];
int BuildTree(struct TreeNode T[])
{
	int Root = -1, N, check[MaxTree], i;
	char cl, cr;
	cin >> N;
	if (N) {
		for (i = 0; i<N; i++) check[i] = 0;
		for (i = 0; i<N; i++) {
			cin >> cl >> cr;
			if (cl != '-') {
				T[i].left = cl - '0';
				check[T[i].left] = 1;
			}
			else T[i].left = -1;
			if (cr != '-') {
				T[i].right = cr - '0';
				check[T[i].right] = 1;
			}
			else T[i].right = -1;
		}
		for (i = 0; i<N; i++)
			if (!check[i]) break;
		Root = i;
	}
	return Root;
}
bool isf = true;
void LevelorderTraversal(int BT)
{
	queue<int> Q;
	int T;

	if (BT==-1) return;
	Q.push(BT);
	while (!Q.empty()) {
		T = Q.front();
		Q.pop();
		//printf("%d ", T->Data); 
		if (T1[T].left == -1 && T1[T].right == -1) {
			if (isf) {
				isf = false;
				cout << T;
			}
			else cout << " " << T;
		}

		if (T1[T].left != -1)   Q.push(T1[T].left);
		if (T1[T].right != -1)  Q.push(T1[T].right);
		
	}
}
int main() {
	int n1 = BuildTree(T1);
	LevelorderTraversal(n1);
}*/