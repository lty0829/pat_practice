/*#include <iostream>
using namespace std;
struct polynomials
{
	int  exponent;
	int coefficient;
};
polynomials *list1, *list2,*list4,*list5,*list6;
polynomials list3[1000][1000];

int add(polynomials ex1[], polynomials ex2[],int k1,int k2,polynomials ex3[]) {
	int k = 0, t = 0, s = 0;
	while (k < k1 || t < k2) {
		if (k == k1) {
			ex3[s] = ex2[t];
			s++;
			t++;
		}
		else if (t == k2) {
			ex3[s] = ex1[k];
			s++;
			k++;
		}
		else if (ex1[k].coefficient > ex2[t].coefficient) {
			ex3[s] = ex1[k];
			s++;
			k++;
		}
		else if (ex1[k].coefficient == ex2[t].coefficient) {
			if ((ex1[k].exponent + ex2[t].exponent) == 0) {
				t++;k++;
			}
			else {
				ex3[s].coefficient = ex1[k].coefficient;
				ex3[s].exponent = ex1[k].exponent + ex2[t].exponent;
				s++;t++;k++;
			}
		}
		else if (ex1[k].coefficient < ex2[t].coefficient) {
			ex3[s] = ex2[t];
			s++;
			t++;
		}
	}
	return s;
}

int main(){
	int k1, k2,s;
	cin >> k1;
	list1 = (polynomials*)malloc(sizeof(polynomials)*k1);
	for (int i = 0; i < k1 ; i++)
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
		for (int j = 0;j < k2;j++) {
			list3[i][j].exponent = list1[i].exponent*list2[j].exponent;
			list3[i][j].coefficient = list1[i].coefficient+list2[j].coefficient;
		}
	}
	list4 = (polynomials*)malloc(sizeof(polynomials)*1000);
	list5 = (polynomials*)malloc(sizeof(polynomials)*1000);
	if(k1!=0)
		for (int j = 0;j < k2;j++) {
			list5[j] = list3[0][j];
		}
	s = k2;
	if (k1 > 1) {
		for (int i = 0; i < k1 - 1; i++)
		{
			s = add(list5, list3[i + 1], s, k2, list4);
			for (int k = 0; k < s; k++)
			{
				for (int j = k + 1; j < s; j++)
				{
					if (list4[k].coefficient < list4[j].coefficient)
					{
						polynomials a = list4[k];
						list4[k] = list4[j];
						list4[j] = a;
					}
				}
			}
			for (int j = 0;j < s;j++) {
				list5[j] = list4[j];
			}
		}

		for (int i = 0; i < s - 1; i++)
		{
			cout << list4[i].exponent << " " << list4[i].coefficient << " ";
		}
		cout << list4[s - 1].exponent << " " << list4[s - 1].coefficient << endl;
	}
	else {
		for (int i = 0; i < k2 - 1; i++)
		{
			cout << list3[0][i].exponent << " " << list3[0][i].coefficient << " ";
		}
		cout << list3[0][k2 - 1].exponent << " " << list3[0][k2-1].coefficient << endl;
	}
	list6 = (polynomials*)malloc(sizeof(polynomials)*k2);
	s = add(list1, list2,k1, k2, list6);
	if (s == 0) {
		cout << "0 0" << endl;
	}
	else {
		for (int i = 0; i < s - 1; i++)
		{
			cout << list6[i].exponent << " " << list6[i].coefficient << " ";
		}
		cout << list6[s - 1].exponent << " " << list6[s - 1].coefficient << endl;
	}
	return 0;
}*/