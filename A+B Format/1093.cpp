/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

using namespace std;
int P[100005] = { 0 };
int T[100005] = { 0 };
vector<int> a;
int main() {
	char cl;
	int i = 0;
	while (1) {
		scanf("%c", &cl);
		if (cl == '\n') {
			break;
		}
		else if (cl == 'P') {
			P[i] = (i == 0) ? 1 : P[i - 1] + 1;
			T[i] = (i == 0) ? 0 : T[i - 1];
		}
		else if (cl == 'T') {
			T[i] = (i == 0) ? 1 : T[i - 1] + 1;
			P[i] = (i == 0) ? 0 : P[i - 1];
		}
		else if (cl == 'A') {
			a.push_back(i);
			T[i] = (i == 0) ? 0 : T[i - 1];
			P[i] = (i == 0) ? 0 : P[i - 1];
		}
		i++;
	}
	long long sum = 0;
	for (int j = 0; j < a.size(); j++)
	{
		sum += P[a[j] - 1] * (T[i - 1] - T[a[j]]);
	}
	cout << sum % 1000000007 << endl;;
	return 0;
}*/