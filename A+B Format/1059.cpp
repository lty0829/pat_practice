/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<math.h>
#include<map>
#include<vector>
using namespace std;
map<long long, long long>a;
vector<long long> b;
long long n;
int main() {
	scanf("%I64d", &n);
	long long  m = n;
	long long i = 0;
	bool isbraek = true;
	while (1) {
		for (i = 2; i <= sqrt(m); i++)
		{
			if (m%i == 0) {
				if (a[i] == 0) {
					b.push_back(i);
				}
				a[i]++;
				m = m / i;
				isbraek = false;
				break;
			}
		}
		if (m == 1)
			break;
		if (isbraek ) {
			if (a[m] == 0) {
				b.push_back(m);
			}
			a[m]++;
			break;
		}
		isbraek = true;
	}
	cout << n << "=";
	if (n == 1) {
		printf("1\n");
		return 0;
	}
	for (i = 0; i < b.size(); i++)
	{
		if (a[b[i]] == 1) {
			if (i == b.size()-1) {
				cout << b[i] << endl;
			}
			else {
				cout<<b[i]<<"*";
			}
		}
		else {
			if (i == b.size() - 1) {
				cout << b[i] << "^" << a[b[i]] << endl;
			}
			else {
				cout << b[i] << "^" << a[b[i]] <<"*";
			}
		}
			
	}
	return 0;
}*/
