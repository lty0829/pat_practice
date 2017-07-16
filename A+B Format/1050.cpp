/*#include<iostream>
#include<string>
using namespace std;
string n1, n2;
bool a[10000] = {false};
int main() {
	getline(cin, n1);
	getline(cin, n2);
	for (int i = 0;i < n2.size();i++) {
		a[(int)n2[i]] = true;
	}
	int j = 0;
	while (j < n1.size()) {
		if (a[(int)n1[j]]) {
			n1 = n1.erase(j, 1);
		}
		else {
			j++;
		}
	}
	cout << n1 << endl;
}*/