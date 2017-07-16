/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
struct aget {
	char name[9];
	int worth;
	int age;
};
bool cmp(aget a, aget b) {
	if (a.worth != b.worth) {
		return a.worth > b.worth;
	}
	if (a.age != b.age) {
		return a.age < b.age;
	}
	return strcmp(a.name, b.name)<0;
}
int n, k;
aget a[100001];
int main() {
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		scanf("%s%d%d",&a[i].name,&a[i].age,&a[i].worth);
	}
	sort(a, a + n, cmp);
	int m,mage,xage,j,t;
	for (int i = 0; i < k; i++)
	{
		scanf("%d%d%d", &m, &mage, &xage);
		t = 0;
		printf("Case #%d:\n", i+1);
		for (j = 0;j<n&&t<m;j++)
			if (a[j].age >= mage&&a[j].age <= xage)
			{
				printf("%s %d %d\n", a[j].name, a[j].age, a[j].worth);
				t++;
			}
		if (!t)printf("None\n");
	}
	return 0;
}*/


