/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
vector<int> a;
multiset<int> maxset;
multiset<int> minset;
int n;
int mid,top;
void adjust() {
	multiset<int>::iterator it;
	if (maxset.size() > minset.size()) {
		it = maxset.begin();
		minset.insert(*it);
		maxset.erase(it);
	}
	else if (maxset.size()+1 < minset.size()) {
		it = minset.end();
		it--;
		maxset.insert(*it);
		minset.erase(it);
	}
	if (!a.empty()) {
		it = minset.end();
		--it;
		mid = *it;
	}
}
int main() {
	scanf("%d", &n);
	char str[12];
	multiset<int>::iterator it;
	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);
		int t;
		if (strcmp(str, "Pop")==0) {
			if (a.empty()) {
				printf("Invalid\n");
			}
			else {
				top = *(a.end() - 1);
				printf("%d\n", top);
				a.pop_back();
				if (top <= mid) {
					it = minset.find(top);
					minset.erase(it);
				}
				else
				{
					it = maxset.find(top);
					maxset.erase(it);
				}
				adjust();//调整  
			}

		}
		else if (strcmp(str, "PeekMedian") == 0) {
			if (a.empty()) {
				printf("Invalid\n");
			}
			else {
				printf("%d\n", mid);
			}
		}
		else if (strcmp(str, "Push") == 0) {
			scanf("%d", &t);		
			if (a.size() == 0)
			{
				minset.insert(t);
				mid = t;
			}
			else if (t <= mid)
				minset.insert(t);
			else
				maxset.insert(t);
			a.push_back(t);
			adjust();//调整  
		}
		else {
			printf("Invalid\n");
		}
	}
	return 0;
}*/