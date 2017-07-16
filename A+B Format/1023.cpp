//#include <cstdio>  
/*#include<iostream>
#include <string> 
using namespace std;
string  a;
int ant[10], ant1[10];
int main() {
	cin >> a;
	string a1 = a;
	for (int i = 0;i < a.size();i++) {
		ant[a[i] - '0']++;
	}
	int carry = 0;
	for (int i = a.size()-1;i>=0;i--) {
		a1[i] = ((a[i] - '0') * 2 + carry) % 10 + '0';
		carry = ((a[i] - '0') * 2 + carry) / 10;
	}
	if (carry != 0) {
		a1 = (char)(carry + '0') + a1;
		cout << "No\n" << a1 << endl;
		return 0;
	}
	for (int i = 0;i < a1.size();i++) {
		ant1[a1[i] - '0']++;
	}
	bool flag = true;
	for (int i = 0;i < 10;i++) {
		if (ant[i] != ant1[i]) {
			flag = false;
			break;
		}
	}
	if(flag)cout << "Yes\n" << a1 << endl;
	else cout << "No\n" << a1 << endl;
	return 0;
}*/