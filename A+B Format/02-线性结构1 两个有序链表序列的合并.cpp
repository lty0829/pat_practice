/*#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
	ElementType Data;
	PtrToNode   Next;
};
typedef PtrToNode List;*/

//List Read(); /* 细节在此不表 */
//void Print(List L); /* 细节在此不表；空链表将输出NULL */

/*List Merge(List L1, List L2);

int main()
{
	List L1, L2, L;
	L1 = Read();
	L2 = Read();
	L = Merge(L1, L2);
	Print(L);
	Print(L1);
	Print(L2);
	return 0;
}
List Read() {
	int n;
	List L, thisL;
	L = (List)malloc(sizeof(struct Node));
	thisL = L;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		ElementType s;
		scanf("%d", &s);
		List p;
		p= (List)malloc(sizeof(struct Node));
		p->Data = s;
		thisL->Next = p;
		thisL = thisL->Next;
	}
	thisL->Next = (List)malloc(sizeof(struct Node));
	thisL->Next = NULL;
	return L;
}
void Print(List L) {
	List thisL;
	thisL = L;
	if (thisL->Next == NULL) {
		printf("NULL\n");
		return;
	}
	while (thisL->Next->Next!=NULL) {
		printf("%d ", thisL->Next->Data);
		thisL = thisL->Next;
	}
	printf("%d\n", thisL->Next->Data);
}
List Merge(List L1, List L2) {
	List thisL1,thisL2,L,L3;
	thisL1 = L1;
	thisL2 = L2;
	L = (List)malloc(sizeof(struct Node));
	L3 = L;
	while (thisL1->Next != NULL || thisL2->Next != NULL) {
		if (thisL1->Next == NULL) {
			L3->Next = thisL2->Next;
			break;
		}
		else if (thisL2->Next == NULL) {
			L3->Next = thisL1->Next;
			break;
		}
		else if (thisL1->Next->Data <= thisL2->Next->Data) {
			L3->Next = (List)malloc(sizeof(struct Node));
			L3->Next->Data = thisL1->Next->Data;
			L3 = L3->Next;
			thisL1 = thisL1->Next;
		}
		else if (thisL1->Next->Data > thisL2->Next->Data) {
			L3->Next = (List)malloc(sizeof(struct Node));
			L3->Next->Data = thisL2->Next->Data;
			L3 = L3->Next;
			thisL2 = thisL2->Next;
		}

	}
	L1->Next = NULL;
	L2->Next = NULL;
	return L;
}*/