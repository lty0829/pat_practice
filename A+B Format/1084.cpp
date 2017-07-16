/*#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
map<char, int> a;
vector<char> b;
string t1, t2;
int main() {
	cin >> t1 >> t2;
	int  j = 0, i = 0;;
	while (i < t2.size()) {
		if (t2[i] >= 'a'&&t2[i] <= 'z')
			t2[i] -= 32;
		if (t1[j] >= 'a'&&t1[j] <= 'z')
			t1[j] -= 32;
		if (t2[i] != t1[j]) {
			if (a[t1[j]] == 0) {
				a[t1[j]]++;
				b.push_back(t1[j]);
			}
			j++;
		}
		else {
			i++;
			j++;
		}
	}
	for (;j < t1.size();j++) {
		if (t1[j] >= 'a'&&t1[j] <= 'z')
			t1[j] -= 32;
		if (a[t1[j]] == 0) {
			a[t1[j]]++;
			b.push_back(t1[j]);
		}
	}
	for (int i = 0;i < b.size();i++) {
		cout << b[i];
	}
	cout << endl;
}*/
