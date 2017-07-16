/*#include<iostream>
using namespace std;
int n;
long long a, b,c;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b>>c;
		cout << "Case #" << i<< ": ";
		bool flag;
		long long ans = a + b;
		if (a>0 && b>0 && ans <= 0)
			flag = true;
		else if (a<0 && b <0 && ans >= 0)
			flag = false;
		else
			flag = (ans > c);
		if (flag)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}*/