/*#include<iostream>
#include<string>
#include <stack>  
using namespace std;
struct address {
	int previous;
	int next;
};
stack<int> s, s1;
address * sd;
int N, beg, K;
int count1 = 0;
bool fix = false;
void reverse() {
	while (beg != -1) {
		s.push(sd[beg].previous);
		s.push(beg);
		beg = sd[beg].next;
		count1++;
		if (count1 == K) {
			for (;count1 > 0;count1--) {
				int addr = s.top();
				s.pop();
				int value = s.top();
				s.pop();
				if (fix) {
					printf("%05d\n", addr);
				}
				printf("%05d %d ", addr, value);
				fix = true;
			}
		}
	}
	while (!s.empty()) {
		int addr = s.top();
		s.pop();
		s1.push(s.top());
		s.pop();
		s1.push(addr);
	}
	while (!s1.empty()) {
		if (fix)
			printf("%05d\n", s1.top());
		int addr = s1.top();
		s1.pop();
		int value = s1.top();
		s1.pop();
		printf("%05d %d ", addr, value);
	}
	cout << -1 << endl;
}
int main() {
	cin >> beg>>N>>K;
	sd = (address*)malloc(sizeof(address) * 100005);
	for (int i = 0; i < N; i++)
	{
		int thisD;
		cin >> thisD;
		cin >> sd[thisD].previous>>sd[thisD].next;
	}
	reverse();
	return 0;
}*/

/*
00100 6 3
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218
*/