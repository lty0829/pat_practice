/*#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct player {
	string id;
	string password;
};
int N;
vector<player> a;
int findw(string b) {
	if (b.find("0") != -1) {
		return 1;
	}
	else if (b.find("1") != -1) {
		return 2;
	}
	else if (b.find("l") != -1) {
		return 3;
	}
	else if (b.find("O") != -1) {
		return 4;
	}
	return -1;
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		player t;
		cin >> t.id >> t.password;
		bool isre = false;
		while (1) {
			int r = findw(t.password);
			if (r == -1)
				break;
			else {
				isre = true;
				if (r == 1) {
					t.password.replace(t.password.find("0"),1 ,"%");
				}
				else if (r == 2) {
					t.password.replace(t.password.find("1"), 1, "@");
				}
				else if (r == 3) {
					t.password.replace(t.password.find("l"), 1, "L");
				}
				else if (r == 4) {
					t.password.replace(t.password.find("O"), 1, "o");
				}
			}
		}
		if (isre) {
			a.push_back(t);
		}
	}
	if (a.size() == 0&&N>1) {
		printf("There are %d accounts and no account is modified", N);
		return 0;
	}
	else if (a.size() == 0) {
		printf("There is 1 account and no account is modified");
		return 0;
	}
	cout << a.size() << endl;
	for  (player i:a)
	{
		cout << i.id << " " << i.password << endl;
	}
	return 0;
}*/