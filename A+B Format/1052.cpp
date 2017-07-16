/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
struct point {
	int start;
	int key;
	int next;
};
bool cmp(point a, point b) {
	return a.key < b.key;
}
point a[100001], b[100001];
int n, str;
int main() {
	cin >> n >> str;
	for (int i = 0; i < n; i++)
	{
		int p, q, r;
		scanf("%d%d%d", &p, &q, &r);
		a[p].start = p;
		a[p].key = q;
		a[p].next = r;
	}
	if (n == 0||str==-1) {
		printf("0 -1\n");
		return 0;
	}
	int index = 0;
	while (str != -1)
	{
		b[index].start = a[str].start;
		b[index].key = a[str].key;
		b[index].next = a[str].next;
		str = a[str].next;
		++index;
	}
	sort(b, b + index, cmp);
	printf("%d %05d\n", index, b[0].start);
	for (int i = 0; i < index; i++)
	{
		printf("%05d %d ", b[i].start, b[i].key);
		if (i != index - 1) {
			printf("%05d\n", b[i + 1].start);
		}
		else {
			cout << -1 << endl;
		}
	}
	return 0;
}*/