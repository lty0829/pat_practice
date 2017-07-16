/*#include<iostream>
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
}*/
/*int main()
{
	int n;
	cin >> n;

	AVLTree root = NULL;

	int x;
	int i;
	for (i = 0;i<n;i++)
	{
		cin >> x;
		root = Insert(root, x);
	}
	cout << root->Data << endl;
	return 0;
}*/