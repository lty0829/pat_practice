/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long> coupon;
vector<long long> ucoupon;
vector<long long> pro;
vector<long long> upro;
int n;
bool cmp(long long a ,long long b) {
	return a > b;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long t;
		cin >> t;
		if (t > 0) {
			coupon.push_back(t);
		}
		else if (t < 0) {
			ucoupon.push_back(t);
		}
	}
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long t;
		cin >> t;
		if (t > 0) {
			pro.push_back(t);
		}
		else if (t < 0) {
			upro.push_back(t);
		}
	}
	sort(coupon.begin(), coupon.end(),cmp);
	sort(ucoupon.begin(), ucoupon.end());
	sort(pro.begin(), pro.end(),cmp);
	sort(upro.begin(), upro.end());
	long long num = 0;
	int nnm = (coupon.size() < pro.size()) ? coupon.size() : pro.size();
	for (int i = 0; i < nnm; i++)
	{
		num += coupon[i] * pro[i];
	}
	nnm = (ucoupon.size() < upro.size()) ? ucoupon.size() : upro.size();
	for (int i = 0; i < nnm; i++)
	{
		num += ucoupon[i] * upro[i];
	}
	cout << num << endl;
}*/
