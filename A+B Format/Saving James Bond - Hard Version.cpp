/*#include<iostream>
#include<math.h>
#include<limits.h>
#include<stack>
#include<vector>
using namespace std;
struct point {
	int x;
	int y;
};
double ISLAND_RADIUS = 15.0 / 2;
vector<point>a;
vector<point>b;
int visit[101];
point map[101];
int N;
double D;
int distnace = INT_MAX;
double min_jump = INT_MAX;
bool isSave = false;
bool firstJump(int v) {
	return sqrt(map[v].x*map[v].x + map[v].y*map[v].y) <= D + ISLAND_RADIUS;
}
bool jump(int v1, int v2) {
	return sqrt((map[v1].x - map[v2].x)*(map[v1].x - map[v2].x) + (map[v1].y - map[v2].y)*(map[v1].y - map[v2].y)) <= D;
}
void dfs(int v,int num,double minJ) {
	if ((50 - abs(map[v].x) <= D) || (50 - abs(map[v].y) <= D)) {
		if (num < distnace) {
			distnace = num;
			b = a;
			min_jump = minJ;
		}
		else if (num == distnace&&minJ < min_jump) {
			distnace = num;
			b = a;
			min_jump = minJ;
		}
		isSave = true;
		return;
	}
	for (int i = 0;i < N;i++) {
		if (visit[i] == 0 && jump(v, i)) {
			a.push_back(map[i]);
			visit[i] = 1;
			dfs(i,num+1,minJ);
			visit[i] = 0;
			a.pop_back();
		}
	}
}
int main() {
	cin >> N >> D;
	for (int i = 0;i < N;i++) {
		cin >> map[i].x >> map[i].y;
	}
	if (ISLAND_RADIUS + D >= 50) {
		cout << 1 << endl;
		return 0;
	}
	int num = 0;
	for (int i = 0;i < N;i++) {
		if (visit[i] == 0 && firstJump(i)) {
			a.push_back(map[i]);
			num = 1;
			visit[i] = 1;
			dfs(i,num, sqrt(map[i].x*map[i].x + map[i].y*map[i].y));
			visit[i] = 0;
			a.pop_back();
		}
	}
	if (isSave) {
		cout << distnace+1 << endl;
		for (point c : b) {
			cout << c.x << " " << c.y << endl;
		}
	}
	else
		cout << 0 << endl;
	return 0;
}*/
