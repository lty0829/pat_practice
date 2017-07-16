/*#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n, a[110], aa[110], b[110];
void output(int *x)
{
	printf("%d", x[0]);
	for (int i = 1;i<n;i++)printf(" %d", x[i]);
	puts("");
}
bool isequal(int *x, int *y)
{
	for (int i = 0;i<n;i++)
		if (x[i] != y[i])return false;
	return true;
}
bool checkinsert()
{
	int flag = 0;
	for (int i = 2;i <= n;i++) {
		if (flag&&!isequal(aa, b)) {
			puts("Insertion Sort");
			output(aa);
			return true;
		}
		sort(aa, aa + i);
		if (isequal(aa, b))flag = 1;
	}
	return false;
}
void checkmerge()
{
	int flag = 0;
	for (int i = 2;i <= n;i *= 2)
	{
		int j;
		for (j = 0;j + i <= n;j += i)
		{
			if (isequal(a, b))flag = 1;
			sort(a + j, a + j + i);
		}
		sort(a + j, a + n);
		if (isequal(a, b))flag = 1;
		if (flag&&!isequal(a, b)) {
			puts("Merge Sort");
			output(a);
			return;
		}
	}
}
int main()
{
	while (~scanf("%d", &n))
	{
		for (int i = 0;i<n;i++)
		{
			scanf("%d", &a[i]);
			aa[i] = a[i];
		}
		for (int i = 0;i<n;i++)
		{
			scanf("%d", &b[i]);
		}
		if (!checkinsert())
			checkmerge();

	}
	return 0;
}*/