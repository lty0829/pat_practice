/*#define MaxTree 35
#include<iostream>
#include<string>
using namespace std;
int mark[MaxTree];
struct TreeNode {
	int parent;
	int left;
	int right;
}T[MaxTree];
int n,str;
bool pos = true,isf = true;
void afterTree(int n) {
	if (n != -1) {
		afterTree(T[n].left);
		afterTree(T[n].right);
		if (isf) {
			isf = false;
			cout << n;
		}
		else cout << " "<<n ;
	}
}

int main() {
	cin >> n;
	for (int i = 1;i <= n;i++) {
		T[i].left = -1;
		T[i].right = -1;
		T[i].parent = -1;
	}
	int beg = -1,pare = -1;
	for (int i = 0;i < 2 * n;i++) {
		string order;
		int t;
		cin >> order;
		if (order.compare("Push") == 0) {
			cin>>t;
			if (i == 0) {
				str = t;
				beg = t;
			}
			else {
				if (pos) {
					T[beg].left = t;
					T[t].parent = beg;
					beg = t;
				}
				else {
					T[pare].right = t;
					T[t].parent = pare;
					beg = t;
				}
			}
			pos = true;
		}
		else {
			pare = beg;
			mark[beg] = 1;
			do {
				beg = T[beg].parent;
			} while (mark[beg] != 0);
				
			pos = false;
		}
	}
	afterTree(str);
	return 0;
}*/