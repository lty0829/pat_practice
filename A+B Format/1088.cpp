/*#include <iostream>  
#include <string>  
#include <sstream>  
using namespace std;

long long gcd(long long a, long long b) {
	long long r;
	while (b != 0) {
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}

string f(long long a, long long b) {//保证b!=0  
	if (a == 0)
		return "0";
	stringstream ss;
	string s;
	int flag = 1;
	if (a<0) {
		flag = -1;
		a = -a;
		ss << "(-";
	}
	long long tmp = gcd(a, b);
	a = a / tmp;
	b = b / tmp;
	if (a%b == 0) {//只有整数部分  
		ss << a / b;
	}
	else if (a / b>0) {//整数部分加分数  
		ss << a / b << " ";
		ss << a%b << "/" << b;
	}
	else {//只有分数部分  
		ss << a << "/" << b;
	}
	if (flag == -1)
		ss << ")";
	getline(ss, s);//由于ss可能有空格，用getline  
	return s;
}
int main() {
	long a1, b1, a2, b2;
	scanf("%ld/%ld %ld/%ld", &a1, &b1, &a2, &b2);
	long long sum1, sum2, sub1, sub2, mul1, mul2, div1, div2;
	sum1 = a1*b2 + a2*b1;
	sum2 = b1*b2;
	sub1 = a1*b2 - a2*b1;
	sub2 = b1*b2;
	mul1 = a1*a2;
	mul2 = b1*b2;
	string s1 = f(a1, b1);
	string s2 = f(a2, b2);
	cout << s1 << " + " << s2 << " = " << f(sum1, sum2) << endl;
	cout << s1 << " - " << s2 << " = " << f(sub1, sub2) << endl;
	cout << s1 << " * " << s2 << " = " << f(mul1, mul2) << endl;
	cout << s1 << " / " << s2 << " = ";
	if (a2 == 0) {
		cout << "Inf";
	}
	else {
		div1 = a1*b2;
		div2 = b1*a2;
		if ((div1<0 && div2<0) || (div1>0 && div2<0)) {
			div1 = -div1;
			div2 = -div2;
		}
		cout << f(div1, div2);
	}
	return 0;
}*/