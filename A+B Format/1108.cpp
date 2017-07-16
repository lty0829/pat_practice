/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int n;
vector<string> illge;
vector<string> lge;
bool isdi(string str) {
	for (int i = 0; i < str.size(); i++)
	{
		if (i == 0 && str[i] == '-') {
			continue;
		}
		if (str[i]<'0' || str[i]>'9')
			return false;
	}
	return true;
}
bool isilge(string str) {
	int t = str.find(".");
	if (t != -1) {
		if (str.find(".", t + 1) == -1) {
			if (isdi(str.substr(0, t))&&str.size()-t-1<=2&&str.size()-t-1>=0&&isdi(str.substr(t+1, str.size() - t - 1))) {
				double y = atof(str.c_str());
				if (y >= -1000.0 && y <= 1000.0) {
					return true;
				}
			}
		}
	}
	else {
		if (isdi(str)) {
			int y = atoi(str.c_str());
			if (y >= -1000 && y <= 1000) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	cin >> n;
	string r;
	for (int i = 0; i < n; i++)
	{
		cin >> r;
		if (isilge(r)) {
			lge.push_back(r);
		}
		else {
			illge.push_back(r);
		}
	}
	for (int i = 0; i < illge.size(); i++)
	{
		printf("ERROR: %s is not a legal number\n", illge[i].c_str());
	}
	double num=0;
	if (lge.size() == 0) {
		printf("The average of 0 numbers is Undefined\n");
	}
	else if (lge.size() == 1) {
		num += atof(lge[0].c_str());
		printf("The average of 1 number is %.2lf\n",num);

	}
	else {
		for (int i = 0; i < lge.size(); i++)
		{
			num += atof(lge[i].c_str());
		}
		num /= lge.size();
		printf("The average of %d numbers is %.2lf\n", lge.size(),num);
	}
	return 0;
}*/