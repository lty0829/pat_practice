/*#include<iostream>
#include<string>
using namespace std;
int N;
int shun[55];
string a1[55];
string a2[55];
void init() {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 1;j <= 13;j++) {
			if (i == 0) {
				a1[i * 13 + j] = "S" + to_string(j);
			}
			else if (i == 1) {
				a1[i * 13 + j] = "H" + to_string(j);
			}
			else if (i == 2) {
				a1[i * 13 + j] = "C" + to_string(j);
			}
			else if (i == 3) {
				a1[i * 13 + j] = "D" + to_string(j);
			}
		}
	}
	a1[53] = "J1";
	a1[54] = "J2";
}
int main() {
	cin >> N;
	for (int i = 1; i <= 54; i++)
	{
		cin >> shun[i];
	}
	init();
	for (int j = 0; j < N; j++)
	{
		for (int i = 1; i <= 54; i++)
		{
			a2[shun[i]] = a1[i];
		}
		for (int i = 1; i <= 54; i++) {
			a1[i] = a2[i];
		}
	}
	cout << a1[1];
	for (int i = 2; i <= 54; i++) {
		cout << " " << a1[i];
	}
	cout << endl;
}*/