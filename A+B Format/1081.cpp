/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
using namespace std;
struct point {
	long long a;
	long long b;
	long long s;
};
int n;
point a[101];
long long GreatestCommonDivisor(long long a, long long b)
{
	long long temp;

	if (a < b)
	{
		// 交换两个数，使大数放在a的位置上。  
		temp = a;
		a = b;
		b = temp;
	}

	while (b != 0)
	{
		// 利用辗转相除法，直到b为0为止。  
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

long long LeastCommonMultiple(long long a, long long b)
{
	long long temp = a * b / GreatestCommonDivisor(a, b);
	return temp;
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld/%lld", &a[i].a, &a[i].b);
	}
	point t;
	t.a = a[0].a;
	t.b = a[0].b;
	t.s = 0;
	long long c, g;
	for (int i = 1; i < n; i++)
	{
		c = LeastCommonMultiple(t.b, a[i].b);
		g = t.a*(c / t.b) + a[i].a*(c / a[i].b);
		t.s += g / c;
		t.a = g%c;
		t.b = c;
	}
	if (t.s == 0 && t.a == 0) {
		printf("0\n");
		return 0;
	}
	if (t.s != 0 && t.a == 0) {
		printf("%lld\n", t.s);
		return 0;
	}
	c = GreatestCommonDivisor(abs(t.a), t.b);
	t.a = t.a / c;
	t.b = t.b / c;
	if (t.s == 0) {
		printf("%lld/%lld\n", t.a, t.b);
	}
	else {
		printf("%lld %lld/%lld\n", t.s,t.a, t.b);
	}
	return 0;
}*/