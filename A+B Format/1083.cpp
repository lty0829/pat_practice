/*#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct point {
	string name;
	string ID;
	int grade;
};
bool cmp(point a, point b) {
	return a.grade > b.grade;
}
point a[100001];
int n;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].name >> a[i].ID >> a[i].grade;
	}
	int j, ming, maxg;
	cin >> ming >> maxg;
	sort(a, a + n, cmp);
	for (j = 0; j < n; j++)
	{
		if (a[j].grade < ming) {
			break;
		}
		if (a[j].grade > maxg) {
			continue;
		}
		cout << a[j].name << " " << a[j].ID  << endl;
	}
	if (j == 0) {
		cout << "NONE" << endl;
	}
	return 0;
}*/