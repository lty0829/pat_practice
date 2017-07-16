/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int a[1003];
map<string,int> b;
vector<string> win;
int m, n, s;
int main() {
	int k = 0;
	bool isd = true;
	scanf("%d%d%d", &m, &n, &s);
	if (s > m) isd = false;
	k = s;
	char str[23];
	for (int i = 1; i <= m; i++)
	{
		scanf("%s", str);
		if (i == k&&b[str]==0) {
			b[str] = 1;
			k += n;
			win.push_back(str);
		}
		else if(i==k&&b[str]==1){
			k += 1;
		}
	}
	if (!isd) {
		printf("Keep going...\n");
	}
	else {
		for (int i = 0; i < win.size(); i++)
		{
			printf("%s\n", win[i].c_str());
		}
		
	}
	return 0;
}*/