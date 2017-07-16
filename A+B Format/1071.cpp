/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<map>
#include <vector>  
#include<algorithm>
using namespace std;
char a[1048577];
map<string, int>ax;
int cmp(const pair<string, int>& x, const pair<string, int>& y)
{
	if(x.second!=y.second)
		return x.second > y.second;
	return x.first < y.first;
}

void sortMapByValue(map<string, int>& tMap, vector<pair<string, int> >& tVector)
{
	for (map<string, int>::iterator curr = tMap.begin(); curr != tMap.end(); curr++)
		tVector.push_back(make_pair(curr->first, curr->second));

	sort(tVector.begin(), tVector.end(), cmp);
}
int main() {
	char t;
	int p = 0;
	while (1) {
		scanf("%c", &t);
		if (t == '\n') {
			break;
		}
		else {
			if ((t >= 'A'&&t <= 'Z') || (t >= 'a'&&t <= 'z') || (t >= '0'&&t <= '9')) {
				a[p++] = tolower(t);
			}
			else if (p != 0) {
				a[p] = '\0';
				ax[a]++;
				p = 0;
			}
		}
	}
	if (p != 0) {
		a[p] = '\0';
		ax[a]++;
		p = 0;
	}
	vector<pair<string, int>> tVector;
	sortMapByValue(ax, tVector);
	cout << tVector[0].first << " " << tVector[0].second << endl;
}*/
