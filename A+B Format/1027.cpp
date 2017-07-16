/*#include<iostream>
#include<string>
using namespace std;
int red, green, blue;
string getthirty(int a) {
	int t = a;
	string list = "";
	while (t != 0) {
		int e = t % 13;
		if (e >= 10) {
			list = (char)(e - 10 + 'A') + list;
		}
		else {
			list = (char)(e + '0') + list;
		}
		t = t / 13;
	}
	if (list.size() == 1) {
		list = '0' + list;
	}
	if (list.size() == 0) {
		list = "00";
	}
	return list;
}
int main() {
	cin >> red >> green >> blue;
	string r = getthirty(red);
	string g = getthirty(green);
	string b = getthirty(blue);
	cout << "#" + r + g + b << endl;
	return 0;
}*/



