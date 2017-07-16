/*#define MaxTree 100
#include<iostream>
using namespace std;
struct TreeNode
{
	char Element;
	int left;
	int right;
}T1[MaxTree],T2[MaxTree];

int BuildTree(struct TreeNode T[])
{
	int Root=-1,N,check[MaxTree],i;
	char cl, cr;
	cin >> N;
	if (N) {
		for (i = 0; i<N; i++) check[i] = 0;
		for (i = 0; i<N; i++) {
			cin >> T[i].Element >> cl >> cr;
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
bool isM = true;
void issmall(int n1, int n2) {
	int l1 = T1[n1].left;
	int l2 = T2[n2].left;
	int r1 = T1[n1].right;
	int r2 = T2[n2].right;
	if (l1 == -1 && l2 == -1 && r1 == -1 && r2 == -1) {
		return;
	}
	else if (T1[l1].Element == T2[l2].Element&&r1 == r2&&r1 == -1) {
		issmall(l1, l2);
	}
	else if (T1[l1].Element == T2[r2].Element&&r1 == l2&&r1 == -1) {
		issmall(l1, r2);
	}
	else if (T1[r1].Element == T2[l2].Element&&l1 == r2&&l1 == -1) {
		issmall(r1, l2);
	}
	else if (T1[r1].Element == T2[r2].Element&&l1 == l2&&l1 == -1) {
		issmall(r1, r2);
	}
	else if (T1[l1].Element == T2[l2].Element&&T1[r1].Element == T2[r2].Element) {
		issmall(l1, l2);
		issmall(r1, r2);
	}
	else if (T1[l1].Element == T2[r2].Element&&T1[r1].Element == T2[l2].Element) {
		issmall(l1, r2);
		issmall(r1, l2);
	}
	else {
		isM = false;
	}
}
int main() {
	int n1 = BuildTree(T1);
	int n2 = BuildTree(T2);
	if (n1 == n2&&n1 == -1) {
		cout << "Yes" << endl;
	}
	else if (n1 == -1 || n2 == -1) {
		cout << "No" << endl;
	}
	else if (T1[n1].Element == T2[n2].Element) {
		issmall(n1, n2);
		if (isM) {
			cout << "Yes" << endl;
		}
		else
			cout << "No" << endl;
	}
	else {	
		cout << "No" << endl;
	}
}*/