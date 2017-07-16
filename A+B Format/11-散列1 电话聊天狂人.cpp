/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<unordered_map> 
#include<string>
using namespace std;
int n;
unordered_map<string, int> xmap;
int main() {
	char r[12], t[12];
	scanf("%d",&n);
	xmap.reserve(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s%s", r, t);
		xmap[r]++;
		xmap[t]++;
	}
	auto it = xmap.cbegin();
	int num = 1;
	string mintet = it->first;
	int numtet = it->second;
	for (++it;it != xmap.cend();it++) {
		if (it->second == numtet) {
			num++;
			if (it->first < mintet) mintet = it->first;
		}
		else if (it->second>numtet) {
			num = 1;
			mintet = it->first;
			numtet = it->second;
		}
	}
	cout << mintet << " " << numtet;
	if (num > 1) cout << " " << num;

	return 0;
}*/
