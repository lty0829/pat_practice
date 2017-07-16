/*#include<iostream>
using namespace std;
typedef struct HNode *Heap; 
struct HNode {
	int *Data; 
	int Size;        
	int Capacity;     
};
typedef Heap MinHeap; 
MinHeap CreateHeap(int MinSize)
{ 

	MinHeap H = (MinHeap)malloc(sizeof(struct HNode));
	H->Data = (int *)malloc((MinSize + 1)*sizeof(int));
	H->Size = 0;
	H->Capacity = MinSize;
	H->Data[0] = 10001;

	return H;
}
bool IsFull(MinHeap H)
{
	return (H->Size == H->Capacity);
}
void PercDown(MinHeap H, int p)
{ 
	int Parent, Child;
	int X;
	X = H->Data[p]; 
	for (Parent = p; Parent * 2 <= H->Size; Parent = Child) {
		Child = Parent * 2;
		if ((Child != H->Size) && (H->Data[Child]>H->Data[Child + 1]))
			Child++;  
		if (X <= H->Data[Child]) break; 
		else  
			H->Data[Parent] = H->Data[Child];
	}
	H->Data[Parent] = X;
}

void BuildHeap(MinHeap H)
{ 
	int i;
	for (i = H->Size / 2; i>0; i--)
		PercDown(H, i);
}
int N, M;
MinHeap H1;
int main() {
	cin >> N >> M;
	H1 = CreateHeap(N);
	for (int i = 0;i < N;i++) {
		int t;
		cin >> t;
		H1->Data[i + 1] = t;
		H1->Size++;
		BuildHeap(H1);
	}
	for (int i = 0;i < M;i++) {
		int t;
		cin >> t;
		int j = t;
		while (j != 1) {
			cout << H1->Data[j]<<" ";
			j /= 2;
		}
		cout << H1->Data[1] << endl;
	}
	return 0;
}*/