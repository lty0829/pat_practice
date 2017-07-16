/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<unordered_map>
#include<string>
#include<string.h>
using namespace std;
unordered_map<string, string> a;
int n;
int main() {
	scanf("%d", &n);
	a.reserve(n);
	char order[2];
	char use[11], pass[17];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &order);
		scanf("%s%s", use, pass);
		if (strcmp(order,"L")==0) {
			if (a[use] == pass) {
				printf("Login: OK\n");
			}
			else if (a[use] == "") {
				printf("ERROR: Not Exist\n");
			}
			else {
				printf("ERROR: Wrong PW\n");
			}
		}
		else {
			if (a[use] == "") {
				a[use] = pass;
				printf("New: OK\n");
			}
			else {
				printf("ERROR: Exist\n");
			}
		}
	}
	return 0;
}*/