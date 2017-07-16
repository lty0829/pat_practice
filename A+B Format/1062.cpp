/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
struct people {
	int id;
	int virtue;
	int talent;
};
vector<people> sage, nobleman, foolman, smallman;
bool cmp(people a, people b) {
	if ((a.virtue + a.talent) != (b.virtue + b.talent)) {
		return (a.virtue + a.talent > b.virtue + b.talent);
	}
	if (a.virtue != b.virtue) {
		return a.virtue > b.virtue;
	}
	return a.id<b.id;
}
int n,L,H;
int main() {
	scanf("%d%d%d", &n, &L, &H);
	for (int i = 0; i < n; i++)
	{
		people t;
		scanf("%d%d%d", &t.id, &t.virtue, &t.talent);
		if (t.virtue >= H&&t.talent >= H) {
			sage.push_back(t);
		}
		else if (t.virtue >= H&&t.talent < H&&t.talent >= L) {
			nobleman.push_back(t);
		}
		else if (t.talent < H&&t.virtue < H&&t.virtue >= t.talent&&t.talent>=L&&t.virtue>=L) {
			foolman.push_back(t);
		}
		else if (t.talent>=L&&t.virtue>=L) {
			smallman.push_back(t);
		}
	}
	
	sort(sage.begin(), sage.end(), cmp);
	sort(nobleman.begin(), nobleman.end(), cmp);
	sort(foolman.begin(), foolman.end(), cmp);
	sort(smallman.begin(), smallman.end(), cmp);
	printf("%d\n", sage.size() + nobleman.size() + foolman.size() + smallman.size());
	for (int i = 0; i < sage.size(); i++)
	{
		printf("%08d %d %d\n", sage[i].id, sage[i].virtue, sage[i].talent);
	}
	for (int i = 0; i < nobleman.size(); i++)
	{
		printf("%08d %d %d\n", nobleman[i].id, nobleman[i].virtue, nobleman[i].talent);
	}
	for (int i = 0; i < foolman.size(); i++)
	{
		printf("%08d %d %d\n", foolman[i].id, foolman[i].virtue, foolman[i].talent);
	}
	for (int i = 0; i < smallman.size(); i++)
	{
		printf("%08d %d %d\n", smallman[i].id, smallman[i].virtue, smallman[i].talent);
	}
	return 0;
}*/