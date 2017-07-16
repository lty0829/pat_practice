/*#include<iostream>
#include<algorithm>
using namespace std;
struct mooncake{
	double total;
	double price;
};
int n,d;
mooncake a[1001];
bool cmp(mooncake a, mooncake b) {
	double t1 = a.price / a.total;
	double t2 = b.price / b.total;
	return t1 > t2;
}
int main() {
	cin >> n >> d;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].total;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].price;
	}
	sort(a, a + n, cmp);
	double num=0;
	for (int i = 0; i < n; i++)
	{
		if (d > a[i].total) {
			d -= a[i].total;
			num += a[i].price;
		}
		else if(d <= a[i].total) {
			num += a[i].price*(d / a[i].total);
			break;
		}
	}
	printf("%.2lf\n", num);
	return 0;
}*/