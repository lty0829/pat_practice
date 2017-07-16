/*#include<iostream>
using namespace std;
struct polynomials {
	int exponent;
	float coefficient;
};
int k1, k2, s;
float a[2001];
polynomials *list1, *list2;
int main() {	
	cin >> k1;
	list1 = (polynomials*)malloc(sizeof(polynomials)*k1);
	for (int i = 0; i < k1; i++)
	{
		cin >> list1[i].exponent >> list1[i].coefficient;
	}
	cin >> k2;
	list2 = (polynomials*)malloc(sizeof(polynomials)*k2);
	for (int i = 0; i < k2; i++)
	{
		cin >> list2[i].exponent >> list2[i].coefficient;
	}
	for (int i = 0;i < k1;i++) {
		for (int j = 0; j < k2; j++)
		{
			a[list1[i].exponent + list2[j].exponent] += list1[i].coefficient*list2[j].coefficient;
		}
	}
	for (int i = 2000;i >= 0;i--) {
		if (a[i] != 0) {
			s++;
		}
	}
	cout << s;

	for (int i = 2000;i >= 0;i--) {
		if (a[i] != 0) {
			printf(" %d %.1f", i, a[i]);
		}
	}
}*/