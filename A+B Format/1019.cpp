/*#include<iostream>
#include<vector>
using namespace std;
vector<int> num;
bool ispa = true;
int main() {
	int N, b;
	cin >> N >> b;
	int n = N;
	if (n == 0) {
		num.push_back(0);
	}
	while (n != 0) {
		num.push_back(n%b);
		n /= b;
	}
	if (num.size() <= 1) {
		cout << "Yes" << endl;
		for (int i : num) {
			cout << i << endl;
		}
	}
	else {
		int i = 0, j = num.size() - 1;
		while (i < j) {
			if (num[i] != num[j]) {
				ispa = false;
				break;
			}
			i++;
			j--;
		}
		if (ispa) {
			cout << "Yes" << endl;
			cout << num[num.size() - 1];
			for (int t = num.size() - 2;t >= 0;t--) {
				cout << " " << num[t];
			}
		}
		else {
			cout << "No" << endl;
			cout << num[num.size() - 1];
			for (int t = num.size() - 2;t >= 0;t--) {
				cout << " " << num[t];
			}
		}
	}
	return 0;
}*/