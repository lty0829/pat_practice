/*#define _CRT_SECURE_NO_WARNINGS
#include<algorithm>
#include<string>
using namespace std;
struct node {
	string name;
	int height;
};
int n, k;
string a[11][10001];
node b[10001];
bool cmp(node a,node b) {
	if (a.height != b.height) {
		return a.height < b.height;
	}
	return a.name > b.name;
}
bool cmp1(node a, node b) {
	if (a.height != b.height) {
		return a.height > b.height;
	}
	return a.name < b.name;
}
int main() {
	scanf("%d%d", &n, &k);
	char name[9];
	int h;
	for (int i = 0; i < n; i++)
	{
		scanf("%s%d", name, &h);
		b[i].name = name;
		b[i].height = h;
	}
	sort(b, b + n, cmp);
	if (n%k == 0) {
		int m = n / k;
		int med = m / 2;
		int t = med;
		for (int i = 0; i < k; i++)
		{
			sort(b + i*m, b + i*m + m, cmp1);
			for (int j = i*m; j < (i+1)*m; j++)
			{
				a[i][t] = b[j].name;
				if ((j - i*m) % 2 == 0) {
					t = med- (j - i*m) /2-1;
				}
				else {
					t = med + (j - i*m) / 2 + 1;
				}
			}
			t = med;
		}
		for (int i = k - 1;i >= 0; i--) {
			for (int j = 0; j < m; j++)
			{
				if (j == 0) {
					printf("%s", a[i][j].c_str());
				}
				else {
					printf(" %s", a[i][j].c_str());
				}
			}
			printf("\n");
		}

	}
	else {
		int m = n / k;
		int med = m / 2;
		int t = med;
		for (int i = 0; i < k-1; i++)
		{
			sort(b + i*m, b + i*m + m, cmp1);
			for (int j = i*m; j < (i + 1)*m; j++)
			{
				
				a[i][t] = b[j].name;
				if ((j - i*m) % 2 == 0) {
					t = med - (j-i*m) / 2 - 1;
				}
				else {
					t = med + (j-i*m) / 2 + 1;
				}
			}
			t = med;
		}

		int beg = (k - 1)*m;
		int m1 = n - beg;
		med = m1 / 2;
		t = med;
		sort(b + beg, b + beg + m1, cmp1);
		for (; beg < n; beg++)
		{
			a[k - 1][t] = b[beg].name;
			if ((beg - (k - 1)*m) % 2 == 0) {
				t = med - (beg- (k - 1)*m) / 2 - 1;
			}
			else {
				t = med + (beg- (k - 1)*m) / 2 + 1;
			}
		}
		for (int i = 0; i < m1; i++){
			if (i == 0) {
				printf("%s", a[k-1][i].c_str());
			}
			else {
				printf(" %s", a[k-1][i].c_str());
			}
		}
		printf("\n");
		for (int i = k - 2;i >= 0; i--) {
			for (int j = 0; j < m; j++)
			{
				if (j == 0) {
					printf("%s", a[i][j].c_str());
				}
				else {
					printf(" %s", a[i][j].c_str());
				}
			}
			printf("\n");
		}

	}
}*/