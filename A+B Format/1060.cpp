/*#include<iostream>
#include<string>
using namespace std;
int n,c1,c2;
string a, b,str1,str2;
int main() {
	cin >> n >> a >> b;
	int t1, t2;
	t1 = a.find(".");
	t2 = b.find(".");
	if (a == "0") {
		c1 = 0;
		for (int i = 0; i < n ; i++)
		{
			str1 += "0";
		}
	}
	else if (t1 != -1 && a.substr(0, t1) == "0") {
		if (a.size() - 2>=n) {
			str1 = a.substr(t1 + 1, n);
		}
		else {
			str1 = a.substr(t1 + 1, a.size()-2);
			for (int i = 0; i < n - a.size() +2; i++)
			{
				str1 += "0";
			}
		}
		c1 = 0;
	}
	else if (t1!=-1&&t1 + 1 >= n) {
		str1 = a.substr(0, n);
		c1 = t1;
	}
	else if (t1 != -1 && t1 + 1 < n) {
		if (a.size() - 1 >= n) {
			str1 = a.substr(0, t1) + a.substr(t1 + 1, n - t1);
			c1 = t1;
		}
		else {
			str1 = a.substr(0, t1) + a.substr(t1 + 1, a.size()-t1);
			for (int i = 0; i < n-a.size()+1; i++)
			{
				str1 += "0";
			}
			c1 = t1;
		}
	}
	else if (t1 == -1 && a.size() >= n) {
		str1 = a.substr(0, n);
		c1 = a.size();
	}
	else if (t1 == -1 && a.size() < n) {
		str1 = a.substr(0,a.size());
		for (int i = 0; i < n - a.size(); i++)
		{
			str1 += "0";
		}
		c1 = a.size();
	}

	if (b == "0") {
		c2 = 0;
		for (int i = 0; i < n; i++)
		{
			str2 += "0";
		}
	}
	else if (t2 != -1 && b.substr(0, t2) == "0") {
		if (b.size() - 2 >= n) {
			str2 = b.substr(t2 + 1, n);
		}
		else {
			str2 = b.substr(t2 + 1, b.size() - 2);
			for (int i = 0; i < n - b.size() + 2; i++)
			{
				str2 += "0";
			}
		}
		c2 = 0;
	}
	else if (t2 != -1 && t2 + 1 >= n) {
		str2 = b.substr(0, n);
		c2 = t2;
	}
	else if (t2 != -1 && t2 + 1 < n) {
		if (b.size() - 1 >= n) {
			str2 = b.substr(0, t2) + b.substr(t2 + 1, n - t2);
			c2 = t2;
		}
		else {
			str2 = b.substr(0, t2) + b.substr(t2 + 1, b.size() - t2);
			for (int i = 0; i < n - b.size() + 1; i++)
			{
				str2 += "0";
			}
			c2 = t2;
		}
	}
	else if (t2 == -1 && b.size() >= n) {
		str2 = b.substr(0, n);
		c2 = b.size();
	}
	else if (t2 == -1 && b.size() < n) {
		str2 = b.substr(0, b.size());
		for (int i = 0; i < n - b.size(); i++)
		{
			str2 += "0";
		}
		c2 = b.size();
	}
	if (str1 == str2&&c1 == c2) {
		cout << "YES 0." << str1 << "*10^" << c1 << endl;
		
	}
	else {
		cout << "NO 0." << str1 << "*10^" << c1 << " 0." << str2 << "*10^" << c2 <<endl;
	}
	return 0;
}*/