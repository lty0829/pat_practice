/*#include<iostream>
#include<string>
using namespace std;
int minsym=1;
bool issym(string a) {
	for (int i = 0;i < a.size() / 2;i++) {
		if (a[i] != a[a.size() - i - 1]) {
			return false;
		}
	}
	return true;
}
int main() {
	string a;
	getline(cin,a);
	int thisterm = 0;
	for (int i = 0; i < a.size(); i++)
	{
		//int t = (i + 1 < a.size() - i - 1) ? i + 1 : a.size() - 1 - i;
		for (int j = i + 1;j <= a.size();j++) {
			string child = a.substr(i, j - i);
			if (issym(child) && child.size()>minsym) {
				minsym = child.size();
			}
		}

	}
	cout << minsym << endl;
	return  0;
}*/