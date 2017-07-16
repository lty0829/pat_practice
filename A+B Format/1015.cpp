/*#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
vector<int> a;
int isprime(int n)
{
	for (int i = 2;i <= sqrt(n);i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
int main() {
	int n, dax;
	while (cin >> n&&n>=0) {
		cin >> dax;
		if (n == 0 || n == 1|| isprime(n) == 0) {
			cout << "No" << endl;
		}
		else {
			int t = n;
			while (t != 0) {
				a.push_back(t%dax);
				t = t / dax;
			}
			int dao=0;
			for (int i = 0;i < a.size();i++) {
				dao += a[i] * pow(dax, a.size()-i-1);
			}
			if (isprime(dao) == 0||dao==0||dao==1) {
				cout << "No" << endl;
			}
			else {
				cout << "Yes" << endl;
			}
		}
		a.clear();
	}
	return 0;
}*/