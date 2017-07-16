/*#include<iostream>
#include<string>
using namespace std;
string n;
string a[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
string b[4] = { "","Shi","Bai","Qian" };
string YI="";
string WAN="";
string sim="";
int main() {
	cin >> n;
	int longg = n.size();
	if (n[0] == '-') {
		cout << "Fu ";
		n = n.substr(1, longg - 1);	
	}
	int t = atoi(n.c_str());
	n = to_string(t);
	longg = n.size();
	bool isk = true;
	if (n == "0") {
		cout << "ling" << endl;
		return 0;
	}
	if (longg <= 4) {
		for (int i = longg -1; i >=0; i--)
		{
			if (n[i] == '0'&&isk) {
				continue;
			}
			if (n[i] == '0'&&!isk) {
				sim = "ling " + sim;
				isk = true;
			}
			else if (i == longg-1) {
				sim = a[n[i] - '0'];
				isk = false;
			}
			else {
				if (sim.size() != 0)
					sim = a[n[i] - '0'] + " " + b[longg-i-1] + " " + sim;
				else
					sim = a[n[i] - '0'] + " " + b[longg-i-1];
				isk = false;
			}
		}
		cout << sim << endl;
	}
	else if (longg > 4 && longg <= 8) {
		for (int i = longg - 1; i >= longg-4; i--)
		{
			if (n[i] == '0'&&isk) {
				continue;
			}
			if (n[i] == '0'&&!isk) {
				sim = "ling " + sim;
				isk = true;
			}
			else if (i == longg - 1) {
				sim = a[n[i] - '0'];
				isk = false;
			}
			else {
				if (sim.size() != 0)
					sim = a[n[i] - '0'] + " " + b[longg - i-1] + " " + sim;
				else
					sim = a[n[i] - '0'] + " " + b[longg - i - 1];
				isk = false;
			}
		}
		isk = true;
		for (int i = longg - 5; i >= 0; i--)
		{
			if (n[i] == '0'&&isk) {
				continue;
			}
			if (n[i] == '0'&&!isk) {
				WAN = "ling " + WAN;
				isk = true;
			}
			else if (i == longg - 5) {
				WAN = a[n[i] - '0'];
				isk = false;
			}
			else {
				if (WAN.size() != 0)
					WAN = a[n[i] - '0'] + " " + b[longg - i - 5] + " " + WAN;
				else
					WAN = a[n[i] - '0'] + " " + b[longg - i - 5];
				isk = false;
			}
		}
		if (sim == "") {
			cout << WAN + " Wan" << endl;
		}
		else cout << WAN + " Wan " + sim << endl;

	}
	else if (longg == 9) {
		for (int i = longg - 1; i >= longg - 4; i--)
		{
			if (n[i] == '0'&&isk) {
				continue;
			}
			if (n[i] == '0'&&!isk) {
				sim = "ling " + sim;
				isk = true;
			}
			else if (i == longg - 1) {
				sim = a[n[i] - '0'];
				isk = false;
			}
			else {
				if (sim.size() != 0)
					sim = a[n[i] - '0'] + " " + b[longg - i - 1] + " " + sim;
				else
					sim = a[n[i] - '0'] + " " + b[longg - i - 1];
				isk = false;
			}
		}
		isk = true;
		for (int i = longg - 5; i >= longg - 8; i--)
		{
			if (n[i] == '0'&&isk) {
				continue;
			}
			if (n[i] == '0'&&!isk) {
				WAN = "ling " + WAN;
				isk = true;
			}
			else if (i == longg - 5) {
				WAN = a[n[i] - '0'];
				isk = false;
			}
			else {
				if (WAN.size() != 0)
					WAN = a[n[i] - '0'] + " " + b[longg - i - 5] + " " + WAN;
				else
					WAN = a[n[i] - '0'] + " " + b[longg - i - 5];
				isk = false;
			}
		}
		YI = a[n[0] - '0'];
		if (WAN == ""&&sim == "") {
			cout << YI + " Yi" << endl;
		}
		else if (WAN == "") {
			cout << YI + " Yi " + sim << endl;
		}
		else if (sim == "") {
			cout << YI + " Yi " + WAN + " Wan" << endl;
		}
		else cout <<YI+" Yi "+ WAN + " Wan " + sim << endl;
	}
	return 0;
}*/