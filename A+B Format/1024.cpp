/*#include<iostream>
#include<string>
using namespace std;
string N;
int K;
bool isre(string a) {
	for (int i = 0;i < a.size() / 2;i++) {
		if (a[i] != a[a.size() - 1 - i]) {
			return false;
		}
	}
	return true;
}
int main() {
	int i,compare=0;
	cin >> N >> K;
	string a = N;
	string a1 = a;
	for (i = 0;i < K;i++) {
		if (isre(a)) {
			break;
		}
		int k = a1.size();
		for (int j = k - 1;j >= 0;j--) {
			a[j] = ((a1[j] - '0') + (a1[k - 1 - j] - '0') + compare) % 10 + '0';
			compare = ((a1[j] - '0') + (a1[k - 1 - j] - '0') + compare) / 10;
		}
		if (compare != 0) {
			a = (char)(compare + '0') + a;
		}
		a1 = a;
		compare = 0;
	}
	cout << a << endl;
	cout << i << endl;
}*/