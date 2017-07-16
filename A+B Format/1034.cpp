/*#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct peo {
	string name;
	int time;
};
struct road {
	string name1;
	string name2;
	int time;
	int index;
	int I1;
	int I2;
};
struct phone {
	int num;
	int total;
};
vector<int> markind;
peo pr[20000];
road ro[1001];
int n, k, pre[20000], mark[20000];
phone like[20000];
bool cmp(int a, int b) {
	return pr[a].name < pr[b].name;
}
void isin(int t) {
	for (int i : markind) {
		if (i == t)
			return;
	}
	markind.push_back(t);
}
int setindex(string name,int time) {
	int t=0;
	for (int i = 0;i < name.size();i++) {
		t *= (int)name[i];
	}
	t = t % 20000;
	while (pr[t].name != "") {
		if (pr[t].name == name)
			break;
		t++;
		t = t % 20000;
	}
	pr[t].name = name;
	pr[t].time += time;
	return t;
}
int find(int t) {
	int y = t,y1;
	while (y != pre[y]) {
		y = pre[y];
	}
	int i = t, j;
	while (pre[i] != y) {
		j = pre[i];
		pre[i] = y;
		i = j;
	}
	return y;
}
int unix(int a, int b) {
	int x = find(a);
	int y = find(b);
	if (pr[y].time < pr[x].time) {
		pre[y] = x;
		find(b);
		return x;
	}
	else if (pr[y].time>pr[x].time) {
		pre[x] = y;
		find(a);
		return y;
	}
	else if (pr[y].time == pr[x].time&&pr[y].name > pr[x].name) {
		pre[y] = x;
		find(b);
		return x;
	}
	else {
		pre[x] = y;
		find(a);
		return y;
	}
}
int main(){
	cin >> n >> k;
	for (int i = 0; i < 20000; i++)
	{
		pre[i] = i;
	}
	for (int i = 0; i < n; i++)
	{
		int I1, I2;
		cin >> ro[i].name1 >> ro[i].name2 >> ro[i].time;
		I1 = setindex(ro[i].name1, ro[i].time);
		ro[i].I1 = I1;
		I2 = setindex(ro[i].name2, ro[i].time);
		ro[i].I2 = I2;
	}
	for (int i = 0; i < n; i++) {
		int t = unix(ro[i].I1, ro[i].I2);
		ro[i].index = t;
	}
	for (int i = 0; i < n; i++) {
		int index = ro[i].index;
		while (index != pre[index]) {
			index = pre[index];
		}
		if (ro[i].I1 != index&&mark[ro[i].I1] == 0) {
			mark[ro[i].I1] = 1;
			like[index].num++;
		}
		else if(ro[i].I2 != index&&mark[ro[i].I2] == 0){
			mark[ro[i].I2] = 1;
			like[index].num++;
		}
		isin(index);
		like[index].total += ro[i].time;
	}
	int num = 0;
	for (int i : markind) {
		if (like[i].num >= 2 && like[i].total>k) {
			num++;
		}
	}
	sort(markind.begin(), markind.end(), cmp);
	cout << num << endl;
	for (int i : markind) {
		if (like[i].num >= 2 && like[i].total>k) {
			cout << pr[i].name << " " << like[i].num + 1 << endl;
		}
	}
	return 0;
}*/

/*
9 59
AAA BBB 10
BBB AAA 20
AAA CCC 40
DDD EEE 5
EEE DDD 70
FFF GGG 30
GGG HHH 20
HHH FFF 10

*/