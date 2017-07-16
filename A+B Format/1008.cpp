/*#include<iostream>
using namespace std;
int n;
int a[101];
int main() {
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	int floor = 0;
	int time = 0;
	for (int i = 0;i < n;i++) {
		if (a[i] > floor) {
			time += 6 * (a[i] - floor) + 5;
			floor = a[i];
		}
		else if(a[i] < floor) {
			time += 4 * (floor - a[i]) + 5;
			floor = a[i];
		}
		else {
			time += 5;
		}
	}
	cout << time << endl;
	return 0;
}*/