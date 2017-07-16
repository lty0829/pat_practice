/*#include<iostream>
#include<algorithm>
using namespace std;
int a[101], b[101],n;

void PercDown(int A[], int p, int N) {
	int parent, child;
	int tmp = A[p];
	for (parent = p;(parent * 2 + 1) < N;parent=child) {
		child = parent * 2 + 1;
		if (child != N - 1 && A[child] < A[child + 1])
			child++;
		if (tmp >= A[child])break;
		else {
			A[parent] = A[child];
		}
	}
	A[parent] = tmp;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	int j = 0,i;
	for (i = 0; i < n-1; i++)
	{
		if (b[i] > b[i + 1])
			break;
	}
	for (j= i+1; j < n; j++)
	{
		if (a[j] != b[j]) {
			break;
		}
	}
	if (j == n) {
		cout << "Insertion Sort\n";
		sort(b, b + i + 2);
		cout << b[0];
		for (int i = 1; i < n; i++)
		{
			cout << " " << b[i];
		}
		cout << endl;
	}
	else {
		cout << "Heap Sort\n";
		for (i = n - 1;i > 0;i--) {
			if (b[0] >b[i]) {
				break;
			}
		}
		swap(b[0], b[i]);
		PercDown(b, 0, i);
		cout << b[0];
		for (int i = 1; i < n; i++)
		{
			cout << " " << b[i];
		}
		cout << endl;

	}
	return 0;
}*/