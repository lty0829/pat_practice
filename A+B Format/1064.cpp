/*#include<iostream>
#include<algorithm>
#include<math.h>
#include<queue>
using namespace std;
typedef struct NodeTree *Tree;
struct NodeTree {
	int value;
	Tree Right, Left;
};
int N,a[1000];
bool first = true;
void printr(Tree root) {
	queue<Tree> Q;
	Q.push(root);
	while (!Q.empty()) {
		Tree thist = Q.front();
		Q.pop();
		if (thist == NULL) continue;
		if (first) {
			cout << thist->value;
			first = false;
		}
		else {
			cout << " " << thist->value;
		}
		Q.push(thist->Left);
		Q.push(thist->Right);
	}
}
Tree cut(int min, int max) {
	if (min > max) return NULL;
	Tree tree = (Tree)malloc(sizeof(struct NodeTree));
	int n = 0,total=max-min+1,p=0;

	if (min == max) {
		tree->value = a[min];
		tree->Left = cut(min, min - 1);
		tree->Right = cut(min+1, max);
	}
	else {
		while (total != 0) {
			n++;
			total /= 2;
		}
		total = max - min + 1;
		if ((pow(2, n) - total - 1) > pow(2, n - 1) / 2) {
			p = (pow(2, n - 1) - 2) / 2 + total + 1 - pow(2, n - 1);
		}
		else {
			p = (pow(2, n - 1) - 2) / 2 + pow(2, n - 1) / 2;
		}
		tree->value = a[min + p];
		tree->Left = cut(min, min + p - 1);
		tree->Right = cut(min + p + 1, max);
	}
	return tree;
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	sort(a, a + N);
	Tree tree = cut(0, N-1);
	printr(tree);
	return 0;
}*/
