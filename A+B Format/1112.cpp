/*#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
using namespace std;
int n;
map<char,int> repeat;
vector<char> a;
vector<char>::iterator pox;
string g;
int main() {
	cin >> n>>g;
	int y=1;
	char t = '/';
	for (int i = 0; i < g.size(); i++)
	{
		if (g[i] != t) {
			if (y == n) {
				if (repeat[t] == 0) {
					a.push_back(t);
					repeat[t] = 1;
				}
			}
			else{
				if (repeat[t] == 1) {
					pox = find(a.begin(), a.end(), t);
					a.erase(pox);
				}
				repeat[t] = 2;
			}
			t = g[i];
			y = 1;
		}
		else {
			if (y == n) {
				if (repeat[t] == 0) {
					a.push_back(t);
					repeat[t] = 1;
				}
				y = 0;
			}
			y++;
		}
	}
	if (y == n) {
		if (repeat[t] == 0) {
			a.push_back(t);
			repeat[t] = 1;
		}
	}
	vector<char>::iterator it = a.begin();
	for (;it !=a.end(); it++)
	{
		string h = "";
		string r = "";
		for (int i = 0; i < n; i++)
		{
			h += *it;
		}
		r += *it;
		int pos = g.find(h,0);
		while (pos != -1) {
			g.replace(pos, n, r);
			pos = g.find(h, pos + 1);
		}
		cout << *it;
	}
	cout << endl;
	cout << g << endl;

}*/
