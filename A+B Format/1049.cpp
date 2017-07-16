/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int N;
long long a[31], b[31];
int main() {
	scanf("%d", &N);
	string str = to_string(N);
	if (str.size() == 1) {
		cout << 1 << endl;
		return 0;
	}
	a[1] = 1;b[1] = 1;
	for (int i = 2;i < str.size();i++) {
		a[i] += pow(10, i - 1);
		a[i] += 9 * a[i - 1];
		b[i] = a[i];
		a[i] += a[i - 1];
	}
	long long sum = 0;
	sum += a[str.size() - 1];
	for (int i = 0;i < str.size();i++) {
		if (str[i] == '1') {
			sum += atoi(str.substr(i + 1, str.size() - i - 1).c_str())+1;
			if (i != 0)
				sum += a[str.size() - i - 1];
		}
		else if(str[i] == '0') {
			continue;
		}
		else {
			if (i == 0||i==str.size()-1) {
				sum += pow(10, str.size() - i - 1);
				sum += a[str.size() - i - 1] * ((str[i] - '0') - 1);
			}
			else {
				sum += pow(10, str.size() - i - 1);
				sum += a[str.size() - i - 1] * ((str[i] - '0'));
			}

		}
	}
	cout << sum << endl;
	return 0;
}*/