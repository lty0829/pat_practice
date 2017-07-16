/*#include<iostream>
using namespace std;
struct Sum
{
	int max;
	int first;
	int last;
};
int *list;
Sum MaxSubseqSum(int A[], int N) {
	int ThisSum,length;
	Sum MaxSum;
	bool iszero = true;
	MaxSum.max = 0;
	MaxSum.first = A[0];
	length = ThisSum = 0;
	for (int i = 0;i < N;i++) {
		ThisSum += A[i];
		length++;
		if (ThisSum > MaxSum.max) {
			MaxSum.last = A[i];
			MaxSum.first = A[i - length + 1];
			MaxSum.max = ThisSum;
		}
		else if (ThisSum < 0) {
			ThisSum = 0;
			length = 0;
		}
		else if (ThisSum >= MaxSum.max&&ThisSum == 0) {
			MaxSum.last = 0;
			MaxSum.first = 0;
			MaxSum.max = 0;
			iszero = false;
		}
	}
	if (MaxSum.max == 0&&length==0&&iszero) {
		MaxSum.max = 0;
		MaxSum.first = A[0];
		MaxSum.last = A[N - 1];
	}
	return MaxSum;
}
int main() {
	int n;
	cin >> n;
	list = (int*)malloc(n*sizeof(int));
	for (int i = 0;i < n;i++) {
		cin >> list[i];
	}
	Sum a = MaxSubseqSum(list, n);
	cout<<a.max<<" "<<a.first<<" "<<a.last<<endl;
}*/