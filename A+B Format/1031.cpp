/*#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
int getn2(int n) {
	int n2 = 3,n1,n3;
	if (n % 2 == 0) {
		n2 = 4;
	}
	n1 = n3 = (n - n2) / 2+1;
	while (n2<n1) {
		n2 += 2;
		n1--;
	}
	return n2;
}
int main() {
	string s;
	cin >> s;
	int n = s.size();
	int t = getn2(s.size());
	for (int i = 0;i < (n - t) / 2;i++) {
		cout << s[i] << setw(t-1) << s[n - 1 - i] << endl;
	}
	cout << s.substr((n - t) / 2, t) << endl;
	return 0;
}*/