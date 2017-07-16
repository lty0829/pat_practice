/*#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;
bool cmp(char a, char b) {
	return a > b;
}
bool issmall(string str) {
	for (int i = 1; i < str.size(); i++)
	{
		if (str[i] != str[i - 1])
			return true;
	}
	return false;
}
int main() {
	string str;
	cin >> str;
	int m = str.size();
	for (int i = 0; i < 4 - m; i++)
	{
		str = "0" + str;
	}
	if (!issmall(str)) {
		cout << str << " - " << str << " = 0000" << endl;
		return 0;
	}
	int t1, t2,t3;
	string str1,str2,str3;
	str1 = str;
	str = "";
	while (1) {
		sort(str1.begin(), str1.end());
		str2 = str1;
		t1 = atoi(str1.c_str());
		sort(str1.begin(), str1.end(), cmp);
		str3 = str1;
		t2 = atoi(str1.c_str());
		str1 = to_string(t2 - t1);
		m = str1.size();
		for (int i = 0; i < 4-m; i++)
		{
			str1 = "0" + str1;
		}
		if (str == str1) {
			break;
		}
		printf("%04d - %04d = %04d\n", t2, t1, t2-t1);
		str = str1;
	}
	return 0;

}*/