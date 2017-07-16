/*#include<iostream>
#include<string>
using namespace std;
string a;
int main() {
	cin >> a;
	if (a[0] == '-') {
		a = a.substr(1, a.size() - 1);
		if (a.find("-") != -1) {
			int b = a.find("-");
			int t = atoi(a.substr(b + 1, a.size() - b - 1).c_str());
			if (t != 0) {
				printf("-0.");
				for (int i = 0; i < t - 1; i++)
				{
					printf("0");
				}
				cout << a.substr(0, 1) + a.substr(2, b - 3) << endl;
			}
			else {
				cout <<"-"<<a.substr(0, b - 1) << endl;
			}
		}
		else {
			int b = a.find("+");
			int t = atoi(a.substr(b + 1, a.size() - b - 1).c_str());
			printf("-");
			if (t != 0) {
				if (b - 3 <= t) {
					cout << a.substr(0, 1) + a.substr(2, b - 3);
					for (int i = 0; i < t-b+3; i++)
					{
						printf("0");
					}
					cout << endl;
				}
				else {
					cout << a.substr(0, 1) + a.substr(2, t) + "." + a.substr(2 + t, b - 3 - t) << endl;
				}
			}
			else {
				cout << a.substr(0, b - 1) << endl;
			}
		}
	}
	else {
		a = a.substr(1, a.size() - 1);
		if (a.find("-") != -1) {
			int b = a.find("-");
			int t = atoi(a.substr(b + 1, a.size() - b - 1).c_str());
			if (t != 0) {
				printf("0.");
				for (int i = 0; i < t - 1; i++)
				{
					printf("0");
				}
				cout << a.substr(0, 1) + a.substr(2, b - 3) << endl;
			}
			else {
				cout  << a.substr(0, b - 1) << endl;
			}
		}
		else {
			int b = a.find("+");
			int t = atoi(a.substr(b + 1, a.size() - b - 1).c_str());
			if (t != 0) {
				if (b - 3 <= t) {
					cout << a.substr(0, 1) + a.substr(2, b - 3);
					for (int i = 0; i < t - b + 3; i++)
					{
						printf("0");
					}
					cout << endl;
				}
				else {
					cout << a.substr(0, 1) + a.substr(2, t) + "." + a.substr(2 + t, b - 3-t) << endl;
				}
			}
			else {
				cout << a.substr(0, b - 1) << endl;
			}
		}
	}
}*/
