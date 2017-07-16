/*#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct student{
	string name;
	string id;
	int grade;
};
vector<student> female;
vector<student> male;
int N;
bool cmp(student a, student b) {
	return a.grade < b.grade;
}
bool cmp1(student a, student b) {
	return a.grade > b.grade;
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		char a;
		student thisone;
		cin >> thisone.name >> a >> thisone.id >> thisone.grade;
		if (a == 'M') {
			male.push_back(thisone);
		}
		else {
			female.push_back(thisone);
		}
	}
	if (male.size() == 0 && female.size() == 0) {
		printf("Absent\nAbsent\nNA\n");
	}
	else if (male.size() == 0) {
		sort(female.begin(), female.end(), cmp1);
		cout << female[0].name << " " << female[0].id << endl;
		printf("Absent\nNA\n");
	}
	else if (female.size() == 0) {
		sort(male.begin(), male.end(), cmp);
		printf("Absent\n");
		cout << male[0].name << " " << male[0].id << endl;
		printf("NA\n");
	}
	else {
		sort(male.begin(), male.end(), cmp);
		sort(female.begin(), female.end(), cmp1);
		cout << female[0].name << " " << female[0].id << endl;
		cout << male[0].name << " " << male[0].id << endl;
		cout << female[0].grade - male[0].grade << endl;
	}
	return 0;
}*/