/*#include<iostream>
#include<stack>
using namespace std;
int M, N, K;
int a[1001][1001];
int main() {
	cin >> M >> N >> K;
	for (int i = 0; i < K; i++)
	{
		for (int j = 0;j < N;j++) {
			cin >> a[i][j];
		}
	}
	stack<int> p;
	for (int i = 0; i < K; i++)
	{
		int thi = 1,e=0;
		bool istr = true;
		p.push(thi);
		int f = p.top();
		while (!p.empty()||thi!=N) {
			if (p.size() > M) {
				istr = false;
				break;
			}
			if (f == a[i][e]) {
				p.pop();
				e++;
				if(p.empty()) {
					f = 0;
				}
				else if (!p.empty()) {
					f = p.top();
				}
			}
			else if (f < a[i][e]) {
				while(thi<a[i][e])
					p.push(++thi);
				f = p.top();
			}
			else {
				istr = false;
				break;
			}
		}
		if (istr) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		while (!p.empty()) {
			p.pop();
		}
	}
}*/