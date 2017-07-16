/*#include<iostream>
using namespace std;

float f[3];
float max(float a, float b, float c) {
	if (a >= b&&a >= c) {
		printf("W ");
		return a;
	}
	else if (b >= a&&b >= c) {
		printf("T ");
		return b;
	}
	else {
		printf("L ");
		return c;
	}
}
int main() {
	float a, b, c;
	for (int i = 0;i < 3;i++) {
		cin >> a >> b >> c;
		f[i] = max(a, b, c);
	}
	printf("%.2f", (f[0] * f[1] * f[2] * 0.65 - 1) * 2);
	return 0;
}*/