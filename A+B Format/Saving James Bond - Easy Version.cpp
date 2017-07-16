/*#include<iostream>
#include<math.h>
using namespace std;
struct point {
	int x;
	int y;
};
double ISLAND_RADIUS = 15.0 / 2;

int visit[101];
point map[101];
int N, D;
bool firstJump(int v) {
	return sqrt(map[v].x*map[v].x + map[v].y*map[v].y) <= D + ISLAND_RADIUS;
}
bool jump(int v1, int v2) {
	return sqrt((map[v1].x - map[v2].x)*(map[v1].x - map[v2].x) + (map[v1].y - map[v2].y)*(map[v1].y - map[v2].y)) <= D;
}
bool dfs(int v) {
	visit[v] = 1;
	bool de = false;
	if ((50 - abs(map[v].x) <= D) || (50 - abs(map[v].y) <= D)) {
		return true;
	}
	for (int i = 0;i < N;i++) {
		if (visit[i] == 0 && jump(v,i)) {
			de = dfs(i);
			if (de) {
				break;
			}
		}
	}
	return de;
}
int main() {
	cin >> N >> D;
	for (int i = 0;i < N;i++) {
		cin >> map[i].x >> map[i].y;
	}
	if (ISLAND_RADIUS + D >= 50) {
		cout << "Yes" << endl;
		return 0;
	}
	bool isSave = false;
	for (int i = 0;i < N;i++) {
		if (visit[i] == 0 && firstJump(i)) {
			isSave = dfs(i);
			if (isSave) {
				break;
			}
		}
	}
	if (isSave) {
		cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;
	return 0;
}*/
