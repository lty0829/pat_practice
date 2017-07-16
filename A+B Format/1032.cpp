/*#include<iostream>
#include<algorithm> 
using namespace std;
int first1, first2, n;
int *a;
int main() {
	cin >> first1 >> first2 >> n;
	a = (int*)malloc(sizeof(int) * 100000);
	for (int i = 0; i < n; i++)
	{
		int r;
		cin >> r;
		char e;
		cin >> e;
		cin >> a[r];
	}
	int start = first1, len1 = 0, len2 = 0;
	while (start != -1)
	{
		len1++; start = a[start];
	}
	start = first2;
	while (start != -1)
	{
		len2++; start = a[start];
	}
	int difference = abs(len1 - len2);
	if (len2 > len1)
	{
		swap(first1, first2);
	}//以便于之后统一处理，总使得第一个单词长度不短于第二个单词  
	start = first1; int startt = first2;
	int i = 0;
	while (start != -1)
	{
		if (start == startt)
			break;
		if (i >= difference)
		{
			startt = a[startt];
		}
		start = a[start];
		i++;
	}
	//cout << start;  
	if (start != -1)
		printf("%05d\n", start);
	else
		printf("-1\n");
	return 0;

}*/