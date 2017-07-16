/*#include<iostream>
#include<string>
#include<map>
#include <sstream> 
#include<vector>
using namespace std;
string marso[13] = { "tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
string marst[13] = { "tret","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
map<string, int> eartho;
map<string, int> eartht;
void init() {
	for (int i = 0;i <= 12;i++) {
		eartho[marso[i]] = i;
		eartht[marso[i]] = -1;
	}
	for (int i = 0; i <=12; i++)
	{
		eartht[marst[i]] = i;
		eartho[marst[i]] = -1;
	}
}
int n;
string a[101];
int main() {
	init();
	cin >> n;getchar();
	for (int i = 0; i < n; i++)
	{
		getline(cin,a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i][0] >= '0'&&a[i][0] <= '9') {
			int e = atoi(a[i].c_str());
			if(e%13==0){
				cout << marst[e / 13] << endl;
			}
			else if (e / 13 != 0) {
				cout << marst[e / 13] << " " << marso[e % 13] << endl;
			}
			else {
				cout << marso[e % 13] << endl;
			}
		}
		else {
			istringstream is(a[i]);
			vector<string> splitString;
			splitString.clear();
			while (is >> a[i])
				splitString.push_back(a[i]);
			if (splitString.size() < 2) {
				if (eartho[splitString[0]]!=-1) {
					cout << eartho[splitString[0]] << endl;
				}
				else {
					cout << 13 * eartht[splitString[0]] << endl;
				}
			}
			else {
				cout << 13 * eartht[splitString[0]] + eartho[splitString[1]] << endl;
			}
		}
	}
	
	return 0;
}*/