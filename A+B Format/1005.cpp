/*#include <iostream>
#include <string>
using namespace std;
string Eng[101];
char num[1005];
int sum[1001];
void init() {
	Eng[0] = "zero";Eng[1] = "one";Eng[2] = "two";Eng[3] = "three";Eng[4] = "four";
	Eng[5] = "five";Eng[6] = "six";Eng[7] = "seven";Eng[8] = "eight";Eng[9] = "nine";

}
int main() {
	init();
	cin >> num;
	int d = 0;
	int name=0;
	while (num[d]!='\0')
	{
		name += num[d] - '0';
		d++;
	}
	d = 0;
	while (name > 0) {
		sum[d] = name % 10;
		name /= 10;
		d++;
	}
	for (int i = d - 1;i > 0;i--)
		cout << Eng[sum[i]] << " ";
	cout << Eng[sum[0]] << endl;
	return 0;
}*/