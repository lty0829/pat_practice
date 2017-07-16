#include <iostream>
#include<iomanip> 
using namespace std;
/*struct polynomials
{
	int  exponent;
	float coefficient;
};
int main(){
	polynomials exp1[11], exp2[11],exp3[22];
	int k1, k2;
	cin >> k1;
	for (int i = 0; i < k1 ; i++)
	{
		cin >> exp1[i].exponent >> exp1[i].coefficient;
	}
	cin >> k2;
	for (int i = 0; i < k2; i++)
	{
		cin >> exp2[i].exponent >> exp2[i].coefficient;
	}
	int k = 0, t = 0, s = 0;
	while (k < k1||t < k2) {
		if (k == k1) {
			exp3[s] = exp2[t];
			s++;
			t++;
		}
		else if (t == k2) {
			exp3[s] = exp1[k];
			s++;
			k++;
		}
		else if (exp1[k].exponent > exp2[t].exponent) {
			exp3[s] = exp1[k];
			s++;
			k++;
		}
		else if (exp1[k].exponent == exp2[t].exponent) {
			if ((exp1[k].coefficient + exp2[t].coefficient) == 0) {
				t++;k++;
			}
			else {
				exp3[s].exponent = exp1[k].exponent;
				exp3[s].coefficient = exp1[k].coefficient + exp2[t].coefficient;
				s++;t++;k++;
			}
		}
		else if (exp1[k].exponent < exp2[t].exponent) {
			exp3[s] = exp2[t];
			s++;
			t++;
		}
	}
	cout << s;
	for (int i = 0;i < s;i++) {
		//printf(" %d %.1f", exp3[i].exponent, exp3[i].coefficient);
		cout << fixed << setprecision(1);
		cout << " " << exp3[i].exponent << " " << exp3[i].coefficient;
	}
	return 0;
}*/