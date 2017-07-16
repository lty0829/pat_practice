/*#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> a;
int N;
bool cmp1(string aa, string bb) {
	return (aa + bb) < (bb + aa);
}
int main() {
	cin >> N;
	string mMath;
	for (int i = 0; i < N; i++)
	{
		cin >> mMath;
		a.push_back(mMath);
	}
	sort(a.begin(), a.end(),cmp1);

	int n = 0, i = 0;
	while (1) {
		n = 0;
		while (n < a[i].size() && a[i][n] == '0') {
			n++;
		}
		if (n != a[i].size()) {
			break;
		}
		else {
			i++;
		}
		if (i == a.size()) {
			cout << 0 << endl;
			return 0;
		}
	}
	cout << a[i].substr(n, a[i].size()-n);
	for (int j = i+1; j < a.size(); j++)
	{
		cout << a[j];
	}
	cout << endl;
	return 0;
}*/