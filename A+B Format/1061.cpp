/*#include<iostream>
#include<map>
#include<string>
using namespace std;
string name[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
string str1, str2, str3, str4;
int main() {
	cin >> str1 >> str2 >> str3 >> str4;
	int week = -1,hour,minut;
	for (int i = 0; i < str1.size()&&i<str2.size(); i++)
	{
		if (str1[i] == str2[i]) {
			if (week == -1 && str1[i] >= 'A'&&str1[i] <= 'G') {
				week = str1[i] - 'A';
			}
			else if (week != -1) {
				if (str1[i] >= '0'&&str1[i] <= '9'){
					hour = str1[i] - '0';
					break;
				}
				else if (str1[i] >= 'A'&&str1[i] <= 'N') {
					hour = str1[i] - 'A' + 10;
					break;
				}
				
			}
		}
	}
	for (int i = 0; i < str3.size() && i < str4.size(); i++) {
		if (str3[i] == str4[i] && isalpha(str3[i])) {
			minut = i;
			break;
		}
	}
	cout << name[week];
	printf(" %02d:%02d\n", hour, minut);
	return 0;
}*/