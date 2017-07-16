/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
const int maxx = 26 * 26 * 26 * 10 + 1;

int hashName(const char *name) {
	return (name[0] - 'A') * 26 * 26 * 10\
		+ (name[1] - 'A') * 26 * 10\
		+ (name[2] - 'A') * 10\
		+ (name[3] - '0');
}

vector<int> course[maxx];
int N, K;
int main() {
	cin >> N >> K;
	int index, num;
	for (int i = 0; i < K; i++)
	{
		scanf("%d%d", &index, &num);
		char name[5];
		for (int i = 0; i < num; i++)
		{
			scanf("%s", name);
			int has = hashName(name);
			course[has].push_back(index);
		}
	}
	char qurname[5];
	for (int i = 0; i < N; i++)
	{
		scanf("%s", qurname);
		int has = hashName(qurname);
		sort(course[has].begin(), course[has].end());
		cout << qurname << " " << course[has].size();
		for (int i = 0; i < course[has].size(); i++)
		{
			cout << " " << course[has][i];
		}
		cout << endl;
	}
	return 0;
}*/