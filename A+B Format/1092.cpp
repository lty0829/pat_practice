/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
using namespace std;
map<char,int> a;
int main() {
	char v;
	int l1 = 0, l2 = 0, l3 = 0;
	bool isr = false;
	while (1) {
		scanf("%c", &v);
		if (v == '\n')
			break;
		a[v]++;
		l1++;
	}
	while (1) {
		scanf("%c", &v);
		if (v == '\n')
			break;
		if (a[v] != 0) {
			l2++;
			a[v]--;
		}
		else {
			isr = true;
		}
		l3++;
	}
	if (isr) {
		cout << "No" << " " << l3 - l2 << endl;
	}
	else {
		cout << "Yes" << " " << l1 - l2 << endl;
	}
}*/