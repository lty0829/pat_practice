/*#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define MaxInputSize 2000
using namespace std;
typedef struct TreeNode *HuffmanTree;
typedef struct TreeNode nHuffmanTree;
struct TreeNode {
	int Weight;
	HuffmanTree Left, Right;
};
typedef struct HNode *Heap;
struct HNode {
	HuffmanTree Data;
	int Size;
	int Capacity;
};
typedef Heap MinHeap;
struct pa {
	char a;
	string str;
};
bool Insert(MinHeap H, nHuffmanTree X)
{
	int i;
	if (H->Size == H->Capacity) {
		return false;
	}
	i = ++H->Size;
	for (; H->Data[i / 2].Weight > X.Weight; i /= 2)
		H->Data[i] = H->Data[i / 2];
	H->Data[i] = X;
	return true;
}
MinHeap CreateHeap(int MinSize)
{

	MinHeap H = (MinHeap)malloc(sizeof(struct HNode));
	H->Data = (HuffmanTree)malloc((MinSize + 1)*sizeof(struct TreeNode));
	H->Size = 0;
	H->Capacity = MaxInputSize;
	H->Data[0].Weight = 0;

	return H;
}
MinHeap CreateMinHeap(int weight[], int len)
{
	int i;
	MinHeap minH = CreateHeap(MaxInputSize);
	nHuffmanTree nHT;
	for (i = 0; i < len; i++)    
	{
		nHT.Weight = weight[i];
		nHT.Left = NULL;
		nHT.Right = NULL;
		Insert(minH, nHT);
	}
	return minH;
}

HuffmanTree DeleteMin(MinHeap H)
{ 
	int Parent, Child;
	HuffmanTree MinItem;
	nHuffmanTree X;
	if (H->Size==0) {
		return NULL;
	}
	MinItem = (HuffmanTree)malloc(sizeof(nHuffmanTree));
	*MinItem = H->Data[1];						 
	X = H->Data[H->Size--]; 
	for (Parent = 1; Parent * 2 <= H->Size; Parent = Child) {
		Child = Parent * 2;
		if ((Child != H->Size) && (H->Data[Child].Weight>H->Data[Child + 1].Weight))
			Child++;  
		if (X.Weight <= H->Data[Child].Weight) break; 
		else  
			H->Data[Parent] = H->Data[Child];
	}
	H->Data[Parent] = X;

	return MinItem;
}

HuffmanTree Huffman(MinHeap H)
{ 
	int i; HuffmanTree T;
	int times = H->Size;
	for (i = 1; i < times; i++) {
		T = (HuffmanTree)malloc(sizeof(struct TreeNode)); 
		T->Left = DeleteMin(H);
		T->Right = DeleteMin(H);
		T->Weight = T->Left->Weight + T->Right->Weight;
		Insert(H, *T); 
	}
	T= DeleteMin(H);
	return T;
}
void getWplValue(HuffmanTree H, int top, int *wp) {
	if (H->Right == NULL&&H->Left == NULL) {
		(*wp) += top*H->Weight;
	}
	else {
		getWplValue(H->Left, top + 1, wp);
		getWplValue(H->Right, top + 1, wp);
	}
}
bool cmp(pa a,pa b) {
	return a.str.size() < b.str.size();
}
int main() {
	int n;
	cin >> n;
	char *like = new char[n];
	int *weight = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> like[i] >> weight[i];
	}
	MinHeap minheap = CreateMinHeap(weight, n);
	HuffmanTree huff = Huffman(minheap);
	int value = 0;
	getWplValue(huff, 0, &value);
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int stuWPL = 0;
		vector<pa> lu;
		for (int j = 0;j < n;j++) {
			pa d;
			cin >> d.a >> d.str;
			lu.push_back(d);
			stuWPL += d.str.size()*weight[j];
		}
		sort(lu.begin(), lu.end(), cmp);
		int cmp1, cmp2;
		if (stuWPL == value) {
			bool flag = true;
			for (cmp1 = 0; cmp1 < n; cmp1++)
			{
				string tmpstr = lu[cmp1].str;
				for (cmp2 = cmp1 + 1; cmp2 < n; cmp2++)
				{
					if (lu[cmp2].str.substr(0, tmpstr.size()) == tmpstr)
					{
						flag = false;
					}
				}
			}
			if (flag == true)
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}*/