#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode {
	ElementType Data;
	BinTree Left;
	BinTree Right;
};

void PreorderTraversal(BinTree BT); /* ����������ɲ���ʵ�֣�ϸ�ڲ��� */
void InorderTraversal(BinTree BT);  /* ����������ɲ���ʵ�֣�ϸ�ڲ��� */

BinTree Insert(BinTree BST, ElementType X);
BinTree Delete(BinTree BST, ElementType X);
Position Find(BinTree BST, ElementType X);
Position FindMin(BinTree BST);
Position FindMax(BinTree BST);
void PreorderTraversal(BinTree BT) {
	if (BT) {
		printf("%d ", BT->Data);
		PreorderTraversal(BT->Left);
		PreorderTraversal(BT->Right);
	}
}
void InorderTraversal(BinTree BT) {
	if (BT) {
		InorderTraversal(BT->Left);
		printf("%d ", BT->Data);
		InorderTraversal(BT->Right);
	}
}
/*int main()
{
	BinTree BST, MinP, MaxP, Tmp;
	ElementType X;
	int N, i;

	BST = NULL;
	scanf("%d", &N);
	for (i = 0; i<N; i++) {
		scanf("%d", &X);
		BST = Insert(BST, X);
	}
	printf("Preorder:"); PreorderTraversal(BST); printf("\n");
	MinP = FindMin(BST);
	MaxP = FindMax(BST);
	scanf("%d", &N);
	for (i = 0; i<N; i++) {
		scanf("%d", &X);
		Tmp = Find(BST, X);
		if (Tmp == NULL) printf("%d is not found\n", X);
		else {
			printf("%d is found\n", Tmp->Data);
			if (Tmp == MinP) printf("%d is the smallest key\n", Tmp->Data);
			if (Tmp == MaxP) printf("%d is the largest key\n", Tmp->Data);
		}
	}
	scanf("%d", &N);
	for (i = 0; i<N; i++) {
		scanf("%d", &X);
		BST = Delete(BST, X);
	}
	printf("Inorder:"); InorderTraversal(BST); printf("\n");

	return 0;
}*/
BinTree Insert(BinTree BST, ElementType X)
{
	if (!BST) { /* ��ԭ��Ϊ�գ����ɲ�����һ�����Ķ��������� */
		BST = (BinTree)malloc(sizeof(struct TNode));
		BST->Data = X;
		BST->Left = BST->Right = NULL;
	}
	else { /* ��ʼ��Ҫ����Ԫ�ص�λ�� */
		if (X < BST->Data)
			BST->Left = Insert(BST->Left, X);   /*�ݹ����������*/
		else  if (X > BST->Data)
			BST->Right = Insert(BST->Right, X); /*�ݹ����������*/
												/* else X�Ѿ����ڣ�ʲô������ */
	}
	return BST;
}

BinTree Delete(BinTree BST, ElementType X)
{
	Position Tmp;

	if (!BST)
		printf("Not Found\n");
	else {
		if (X < BST->Data)
			BST->Left = Delete(BST->Left, X);   /* ���������ݹ�ɾ�� */
		else if (X > BST->Data)
			BST->Right = Delete(BST->Right, X); /* ���������ݹ�ɾ�� */
		else { /* BST����Ҫɾ���Ľ�� */
			   /* �����ɾ����������������ӽ�� */
			if (BST->Left && BST->Right) {
				/* ��������������С��Ԫ�����ɾ����� */
				Tmp = FindMin(BST->Right);
				BST->Data = Tmp->Data;
				/* ����������ɾ����СԪ�� */
				BST->Right = Delete(BST->Right, BST->Data);
			}
			else { /* ��ɾ�������һ�������ӽ�� */
				Tmp = BST;
				if (!BST->Left)       /* ֻ���Һ��ӻ����ӽ�� */
					BST = BST->Right;
				else                   /* ֻ������ */
					BST = BST->Left;
				free(Tmp);
			}
		}
	}
	return BST;
}
Position Find(BinTree BST, ElementType X) {
	if (!BST) return NULL;
	if (X > BST->Data)
		return Find(BST->Right, X);
	else if (X < BST->Data)
		return Find(BST->Left, X);
	else return BST;
}
Position FindMin(BinTree BST) {
	if (!BST) return NULL;
	else if (!BST->Left) return BST;
	else return FindMin(BST->Left);
}
Position FindMax(BinTree BST) {
	if (!BST) return NULL;
	else if (!BST->Right) return BST;
	else return FindMax(BST->Right);
}