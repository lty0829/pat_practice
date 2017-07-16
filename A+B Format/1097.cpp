/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<math.h>
#include<vector>
using namespace std;
struct node {
	int address;
	int v;
	int net;
};
int first,n;
map<int, node> a;
map<int, int> b;
vector<node> w;
int main(){
	scanf("%d%d", &first, &n);
	int f ,l;
	int v;
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &f, &v, &l);
		node x;
		x.address = f;
		x.v = v;
		x.net = l;
		a[f] = x;
	}
	int next = first;
	node x;
	while (1) {
		int v = a[next].v;
		if (b[abs(v)] == 0) {
			if (next == first) {
				printf("%05d %d ", next, v);
			}
			else {
				printf("%05d\n%05d %d ", next,next, v);
			}
			b[abs(v)]++;
		}
		else {
			if (w.size() == 0) {
				
				x.address = next;
				x.v = v;
				x.net = -1;
				w.push_back(x);
			}
			else {
				w[w.size() - 1].net = next;
				x.address = next;
				x.v = v;
				x.net = -1;
				w.push_back(x);
			}
		}
		next = a[next].net;
		if (next == -1) {
			break;
		}
	}
	cout << -1 << endl;
	for (int i = 0; i < w.size(); i++)
	{
		if (i == w.size() - 1) {
			printf("%05d %d %d\n", w[i].address, w[i].v, -1);
		}
		else {
			printf("%05d %d %05d\n", w[i].address, w[i].v, w[i].net);
		}
	}
	return 0;
}*/