/*#include<iostream>
using namespace std;
int st[10001];
int clor[201];
int que[201][10001];
int n, m, k;
int LCS(int row, int col)
{
	int i, j;
	int max;
	for (i = 1;i <= row;i++) {
		for (j = 1;j <= col;j++) {
			max = que[i - 1][j - 1];
			if (max < que[i][j - 1])max = que[i][j - 1];
			if (max < que[i - 1][j])max = que[i - 1][j];      //先求出左边、上边、左上边 三个值中的最大值  
			if (clor[i] == st[j]) {              //如果相等，则将最大值+1  
				que[i][j] = max + 1;
			}
			else {
				que[i][j] = max;
			}
		}
	}
	return que[row][col];
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> clor[i+1];
	}
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> st[i+1];
	}
	cout << LCS(m, k) << endl;
	return 0;
}*/