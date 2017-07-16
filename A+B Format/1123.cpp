/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;
typedef struct AVLNode *Position;
typedef Position AVLTree;
struct AVLNode {
	int Data;
	AVLTree Left;
	AVLTree Right;
	int Height;
};

int Max(int a, int b)
{
	return a > b ? a : b;
}
int GetHeight(AVLTree tree) {
	if (tree == NULL)return -1;
	return tree->Height;
}
AVLTree SingleLeftRotation(AVLTree A)
{ 

	AVLTree B = A->Left;
	A->Left = B->Right;
	B->Right = A;
	A->Height = Max(GetHeight(A->Left), GetHeight(A->Right)) + 1;
	B->Height = Max(GetHeight(B->Left), A->Height) + 1;

	return B;
}
AVLTree SingleRightRotation(AVLTree A) {
	AVLTree B = A->Right;
	A->Right = B->Left;
	B->Left = A;
	A->Height = Max(GetHeight(A->Left), GetHeight(A->Right)) + 1;
	B->Height = Max(GetHeight(B->Right), A->Height) + 1;
	return B;
}
AVLTree DoubleLeftRightRotation(AVLTree A)
{  

 
	A->Left = SingleRightRotation(A->Left);
	
	return SingleLeftRotation(A);
}
AVLTree DoubleRightLeftRotation(AVLTree A) {
	A->Right = SingleLeftRotation(A->Right);
	return SingleRightRotation(A);
}

AVLTree Insert(AVLTree T, int X)
{
	if (!T) { 
		T = (AVLTree)malloc(sizeof(struct AVLNode));
		T->Data = X;
		T->Height = 0;
		T->Left = T->Right = NULL;
	}

	else if (X < T->Data) {
		
		T->Left = Insert(T->Left, X);
		
		if (GetHeight(T->Left) - GetHeight(T->Right) == 2)
			if (X < T->Left->Data)
				T = SingleLeftRotation(T);     
			else
				T = DoubleLeftRightRotation(T);
	} 

	else if (X > T->Data) {
		
		T->Right = Insert(T->Right, X);
		
		if (GetHeight(T->Left) - GetHeight(T->Right) == -2)
			if (X > T->Right->Data)
				T = SingleRightRotation(T);    
			else
				T = DoubleRightLeftRotation(T); 
	}

	 

	 
	T->Height = Max(GetHeight(T->Left), GetHeight(T->Right)) + 1;

	return T;
}
int n;
int main() {
	scanf("%d", &n);
	int t;
	AVLTree root=NULL;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		root = Insert(root, t);
	}
	queue<AVLTree>Q;
	Q.push(root);
	bool flag = true, end = false;
	bool first = true;
	while (!Q.empty()) {
		AVLTree f = Q.front();
		Q.pop();
		if (first) {
			printf("%d", f->Data);
			first = false;
		}
		else {
			printf(" %d", f->Data);
		}
		if (f->Left) {
			Q.push(f->Left);
		}
		if (f->Right) {
			Q.push(f->Right);
		}
		if (flag) {
			if (!(f->Left) && f->Right)
				flag = false;
			else if (!end && (!(f->Left) || !(f->Right)))
				end = true;
			else if (end && (f->Left || f->Right))
				flag = false;
		}
	}
	printf("\n");
	puts(flag ? "YES" : "NO");
	return 0;
}*/