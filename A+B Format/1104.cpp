/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int n;
double a[100003];

double sum;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%lf", &a[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		sum += a[i] * i*(n-i+1);
	}
	printf("%.2lf\n", sum);
	return 0;
}*/