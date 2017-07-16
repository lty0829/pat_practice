/*#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
struct station {
	double price;
	double distance;
};
bool cmp(station a, station b) {
	return a.distance < b.distance;
}
double Cmax, D, Davg;
int N;
station a[501];
int main() {
	cin >> Cmax >> D >> Davg >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i].price >> a[i].distance;
	}
	sort(a, a + N,cmp);
	if (a[0].distance != 0) {
		printf("The maximum travel distance = 0.00\n");
		return 0;
	}
	int ft = 0, st = 0;
	double totalprice = 0.0,gas=0.0, distance = 0.0, max_di = Cmax*Davg;
	bool isreach = false;
	bool isover = false;
	while (1)
	{
		double min = 10000.0;
		bool ismin = false;
		for (int i = ft+1; i < N; i++)
		{
			if (a[ft].distance + max_di < a[i].distance) {
				if (i == ft + 1) {
					distance = a[ft].distance + max_di;
					isreach = false;
					isover = true;
				}
				break;
			}
			else if (a[i].price <= a[ft].price) {
				if (gas < (a[i].distance - a[ft].distance) / Davg) {
					totalprice += ((a[i].distance - a[ft].distance) / Davg - gas)*a[ft].price;
					gas = 0;
				}
				else {
					gas = gas - (a[i].distance - a[ft].distance) / Davg;
				}
				distance = a[i].distance;
				ft = i;
				ismin = false;
				break;
			}
			else if (a[i].price>a[ft].price) {
				if (a[i].price < min) {
					st = i;
					min = a[i].price;
					ismin = true;
				}
			}
		}
		if (ismin&&a[ft].distance + max_di >= D) {
			if (gas < (D - a[ft].distance) / Davg)
				totalprice += ((D - a[ft].distance) / Davg - gas)*a[ft].price;
			isreach = true;
			isover = true;
		}
		else if (ismin) {
			totalprice += (Cmax - gas)*a[ft].price;
			gas = Cmax - (a[st].distance - a[ft].distance) / Davg;
			distance = a[st].distance;
			ft = st;
		}
		if (ft == N - 1 && a[ft].distance + max_di < D) {
			distance = a[ft].distance + max_di;
			isreach = false;
			isover = true;
		}
		else if (ft == N - 1 && a[ft].distance + max_di >= D) {
			if (gas < (D - a[ft].distance) / Davg)
				totalprice += ((D - a[ft].distance) / Davg-gas)*a[ft].price;
			isreach = true;
			isover = true;
		}
		if (isover)
			break;
	}
	if (isreach) {
		printf("%.2f\n", totalprice);
	}
	else
		printf("The maximum travel distance = %.2f\n", distance);
}*/