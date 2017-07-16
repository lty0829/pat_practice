/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
int n;
int b[1001];
bool isqueen(int m,int k) {
	if (m != k-1) {
		for (int i = m+1; i < k; i++)
		{
			if (b[m] == b[i] || abs(m - i) == abs(b[m] - b[i]))
				return false;
		}
		return isqueen(m + 1, k);
	}
	return true;
}
int y, x;
int main() {
	scanf("%d", &y);
	for (int i = 0;i < y;i++) {
		scanf("%d", &x);
		for (int j = 0; j < x; j++)
		{
			scanf("%d", &b[j]);
		}
		if (isqueen(0, x))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}*/
