/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct point {
	int Galleon, Sickle, Knut;
};
point a, b;
int main() {
	scanf("%d.%d.%d", &a.Galleon, &a.Sickle, &a.Knut);
	scanf("%d.%d.%d", &b.Galleon, &b.Sickle, &b.Knut);
	int r=0;
	point d;
	d.Knut = (a.Knut + b.Knut) % 29;
	r = (a.Knut + b.Knut) / 29;
	d.Sickle = (a.Sickle + b.Sickle+r) % 17;
	r = (a.Sickle + b.Sickle + r) / 17;
	d.Galleon = (a.Galleon + b.Galleon + r);
	printf("%d.%d.%d", d.Galleon, d.Sickle, d.Knut);
	return 0;
}*/