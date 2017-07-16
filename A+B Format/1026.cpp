/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
struct player {
	int hour;
	int minute;
	int sec;
	int p_time;
	int tag;
	int totaltime;
};
struct table {
	int num;
	int use;
	int time;
	bool vip;
};
bool cmp(player a, player b) {
	return a.totaltime < b.totaltime;
}
bool cmp1(table a, table b) {
	return a.time < b.time;
}
bool cmp2(table a, table b) {
	return a.num < b.num;
}
int main() {
	int N,M,K;
	cin >> N;
	vector<player> a(N);
	vector<player> va;
	vector<player> na;
	for (int i = 0; i < N; i++)
	{
		scanf("%d:%d:%d", &a[i].hour, &a[i].minute, &a[i].sec);
		cin >> a[i].p_time >> a[i].tag;
		if (a[i].p_time >= 120) {
			a[i].p_time = 120;
		}
		a[i].totaltime = a[i].hour * 3600 + a[i].minute * 60 + a[i].sec;
		if (a[i].tag == 1) {
			va.push_back(a[i]);
		}
		else {
			na.push_back(a[i]);
		}
	}
	sort(na.begin(), na.end(), cmp);
	sort(va.begin(), va.end(), cmp);
	cin >> K >> M;
	vector<table> b(K);
	vector<table> vb(M);
	vector<table> nb(K - M);
	for (int i = 0; i < K; i++)
	{
		b[i].num = i + 1;
		b[i].time = 8 * 3600;
		b[i].use = 0;
		b[i].vip = false;
	}
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		b[num - 1].vip = true;
		vb[i] = b[num - 1];
	}
	int r = 0;
	for (int i = 0;i < K;i++) {
		if (!b[i].vip) {
			nb[r] = b[i];
			r++;
		}
	}
	if ((K - M) == 0) {
		table w;
		w.use = 0;
		w.time = 21 * 3600;
		nb.push_back(w);
	}
	if (M == 0) {
		table w;
		w.use = 0;
		w.time = 21 * 3600;
		vb.push_back(w);
	}
	int t = 0;
	r = 0;
	while (t != na.size()||r!=va.size()) {
		sort(nb.begin(), nb.end(), cmp1);
		sort(vb.begin(), vb.end(), cmp1);
		if (nb[0].time >= 21 * 3600 && vb[0].time>=21 * 3600) {
			break;
		}
		if (t!=na.size()&&na[t].totaltime >= 21 * 3600) {
			t = na.size();
			continue;
		}
		if (r!=va.size()&&va[r].totaltime >= 21 * 3600) {
			r = va.size();
			continue;
		}
		if (r == va.size() && t != na.size()) {
			if (na[t].totaltime >= nb[0].time&&na[t].totaltime >= vb[0].time) {
				int s = 0, min = 10000, mls = 0, mlsx = 0;
				bool isb = true;
				while (s <= nb.size() - 1 && na[t].totaltime >= nb[s].time) {
					if (min > nb[s].num) {
						min = nb[s].num;
						mls = s;
					}
					s++;
				}
				s = 0;
				int min1 = 10000;
				while (s <= vb.size() - 1 && na[t].totaltime >= vb[s].time) {
					if (min1 > vb[s].num) {
						min1 = vb[s].num;
						mlsx = s;
					}
					s++;
				}
				if (min < min1) {
					nb[mls].use++;
					nb[mls].time = na[t].totaltime + na[t].p_time * 60;
				}		
				else {
					vb[mlsx].use++;
					vb[mlsx].time = na[t].totaltime + na[t].p_time * 60;
				}
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", na[t].hour, na[t].minute, na[t].sec, na[t].hour, na[t].minute, na[t].sec, 0);				
				t++;
			}
			else if (na[t].totaltime >= nb[0].time&&na[t].totaltime< vb[0].time) {
				int s = 0, min = 10000, mls = 0;
				while (s <= nb.size() - 1 && na[t].totaltime >= nb[s].time) {
					if (min > nb[s].num) {
						min = nb[s].num;
						mls = s;
					}
					s++;
				}
				nb[mls].use++;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", na[t].hour, na[t].minute, na[t].sec, na[t].hour, na[t].minute, na[t].sec, 0);
				nb[mls].time = na[t].totaltime + na[t].p_time * 60;
				t++;
			}
			else if (na[t].totaltime < nb[0].time&&na[t].totaltime >= vb[0].time){
				int s = 0, min = 10000,mls=0;
				while (s <= vb.size() - 1 && na[t].totaltime >= vb[s].time) {
					if (min > vb[s].num) {
						min = vb[s].num;
						mls = s;
					}
					s++;
				}
				vb[mls].use++;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", na[t].hour, na[t].minute, na[t].sec, na[t].hour, na[t].minute, na[t].sec, 0);
				vb[mls].time = na[t].totaltime + na[t].p_time * 60;
				t++;
			}
			else if (na[t].totaltime < nb[0].time&&na[t].totaltime < vb[0].time&&nb[0].time <= vb[0].time) {
				nb[0].use++;
				double change = (double)(nb[0].time - na[t].totaltime);
				int sec = (na[t].sec + (int)change) % 60;
				int min = (na[t].minute + (na[t].sec + (int)change) / 60) % 60;
				int hour = na[t].hour + (na[t].minute + (na[t].sec + (int)change) / 60) / 60;
				int chan = change / (double)60 + 0.5;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", na[t].hour, na[t].minute, na[t].sec, hour, min, sec, chan);
				nb[0].time = nb[0].time + na[t].p_time * 60;
				t++;
			}
			else if (na[t].totaltime < nb[0].time&&na[t].totaltime < vb[0].time&&nb[0].time > vb[0].time) {
				vb[0].use++;
				double change = (double)(vb[0].time - na[t].totaltime);
				int sec = (na[t].sec + (int)change) % 60;
				int min = (na[t].minute + (na[t].sec + (int)change) / 60) % 60;
				int hour = na[t].hour + (na[t].minute + (na[t].sec + (int)change) / 60) / 60;
				int chan = change / (double)60 + 0.5;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", na[t].hour, na[t].minute, na[t].sec, hour, min, sec, chan);
				vb[0].time = vb[0].time + na[t].p_time * 60;
				t++;
			}
		}
		else if (t == na.size() && r != va.size()) {
			if (va[r].totaltime >= vb[0].time) {
				int s = 0, min = 10000,mls=0;
				while (s <= vb.size() - 1 && va[r].totaltime >= vb[s].time) {
					if (min > vb[s].num) {
						min = vb[s].num;
						mls = s;
					}
					s++;
				}
				vb[mls].use++;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", va[r].hour, va[r].minute, va[r].sec, va[r].hour, va[r].minute, va[r].sec, 0);
				vb[mls].time = va[r].totaltime + va[r].p_time * 60;
				r++;
			}
			else if (va[r].totaltime < vb[0].time&&va[r].totaltime >= nb[0].time) {
				int s = 0, min = 10000, mls = 0;
				while (s <= nb.size() - 1 && va[r].totaltime >= nb[s].time) {
					if (min > nb[s].num) {
						min = nb[s].num;
						mls = s;
					}
					s++;
				}
				nb[mls].use++;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", va[r].hour, va[r].minute, va[r].sec, va[r].hour, va[r].minute, va[r].sec, 0);
				nb[mls].time = va[r].totaltime + va[r].p_time * 60;
				r++;
			}
			else if (va[r].totaltime < vb[0].time&&va[r].totaltime < nb[0].time&&vb[0].time <= nb[0].time) {
				vb[0].use++;
				double change = (double)(vb[0].time - va[r].totaltime);
				int sec = (va[r].sec + (int)change) % 60;
				int min = (va[r].minute + (va[r].sec + (int)change) / 60) % 60;
				int hour = va[r].hour + (va[r].minute + (va[r].sec + (int)change) / 60) / 60;
				int chan = change / (double)60 + 0.5;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", va[r].hour, va[r].minute, va[r].sec, hour, min, sec, chan);
				vb[0].time = vb[0].time + va[r].p_time * 60;
				r++;
			}
			else if (va[r].totaltime < vb[0].time&&va[r].totaltime < nb[0].time&&vb[0].time > nb[0].time) {
				nb[0].use++;
				double change = (double)(nb[0].time - va[r].totaltime);
				int sec = (va[r].sec + (int)change) % 60;
				int min = (va[r].minute + (va[r].sec + (int)change) / 60) % 60;
				int hour = va[r].hour + (va[r].minute + (va[r].sec + (int)change) / 60) / 60;
				int chan = change / (double)60 + 0.5;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", va[r].hour, va[r].minute, va[r].sec, hour, min, sec, chan);
				nb[0].time = nb[0].time + va[r].p_time * 60;
				r++;
			}
		}
		else if (na[t].totaltime < va[r].totaltime) {
			if (na[t].totaltime >= nb[0].time&&na[t].totaltime >= vb[0].time) {
				int s = 0, min = 10000, mls = 0, mlsx = 0;
				bool isb = true;
				while (s <= nb.size() - 1 && na[t].totaltime >= nb[s].time) {
					if (min > nb[s].num) {
						min = nb[s].num;
						mls = s;
					}
					s++;
				}
				s = 0;
				int min1 = 10000;
				while (s <= vb.size() - 1 && na[t].totaltime >= vb[s].time) {
					if (min1 > vb[s].num) {
						min1 = vb[s].num;
						mlsx = s;
					}
					s++;
				}
				if (min < min1) {
					nb[mls].use++;
					nb[mls].time = na[t].totaltime + na[t].p_time * 60;
				}
				else {
					vb[mlsx].use++;
					vb[mlsx].time = na[t].totaltime + na[t].p_time * 60;
				}
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", na[t].hour, na[t].minute, na[t].sec, na[t].hour, na[t].minute, na[t].sec, 0);
				t++;
			}
			else if (na[t].totaltime >= nb[0].time&&na[t].totaltime< vb[0].time) {
				int s = 0,min=10000,mls=0;
				while (s <= nb.size() - 1 && na[t].totaltime >= nb[s].time) {
					if (min > nb[s].num) {
						min = nb[s].num;
						mls = s;
					}
					s++;
				}
				nb[mls].use++;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", na[t].hour, na[t].minute, na[t].sec, na[t].hour, na[t].minute, na[t].sec, 0);
				nb[mls].time = na[t].totaltime + na[t].p_time * 60;
				t++;
			}
			else if (na[t].totaltime < nb[0].time&&na[t].totaltime >= vb[0].time){
				int s = 0, min = 10000,mls =0 ;
				while (s <= vb.size() - 1 && na[t].totaltime >= vb[s].time) {
					if (min > vb[s].num) {
						min = vb[s].num;
						mls = s;
					}
					s++;
				}
				vb[mls].use++;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", na[t].hour, na[t].minute, na[t].sec, na[t].hour, na[t].minute, na[t].sec, 0);
				vb[mls].time = na[t].totaltime + na[t].p_time * 60;
				t++;
			}
			else if (na[t].totaltime < nb[0].time&&na[t].totaltime < vb[0].time&&nb[0].time <= vb[0].time) {
				nb[0].use++;
				double change = (double)(nb[0].time - na[t].totaltime);
				int sec = (na[t].sec + (int)change) % 60;
				int min = (na[t].minute + (na[t].sec + (int)change) / 60) % 60;
				int hour = na[t].hour + (na[t].minute + (na[t].sec + (int)change) / 60) /60;
				int chan = change / (double)60 + 0.5;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", na[t].hour, na[t].minute, na[t].sec, hour, min, sec, chan);
				nb[0].time = nb[0].time + na[t].p_time * 60;
				t++;
			}
			else if (na[t].totaltime < nb[0].time&&na[t].totaltime < vb[0].time&&nb[0].time > vb[0].time&&va[r].totaltime>vb[0].time) {
				vb[0].use++;
				double change = (double)(vb[0].time - na[t].totaltime);
				int sec = (na[t].sec + (int)change) % 60;
				int min = (na[t].minute + (na[t].sec + (int)change) / 60) % 60;
				int hour = na[t].hour + (na[t].minute + (na[t].sec + (int)change) / 60) / 60;
				int chan = change / (double)60 + 0.5;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", na[t].hour, na[t].minute, na[t].sec, hour, min, sec, chan);
				vb[0].time = vb[0].time + na[t].p_time * 60;
				t++;
			}
			else if (na[t].totaltime < nb[0].time&&na[t].totaltime < vb[0].time&&nb[0].time > vb[0].time&&va[r].totaltime<=vb[0].time) {
				vb[0].use++;
				double change = (double)(vb[0].time - va[r].totaltime);
				int sec = (va[r].sec + (int)change) % 60;
				int min = (va[r].minute + (va[r].sec + (int)change) / 60) % 60;
				int hour = va[r].hour + (va[r].minute + (va[r].sec + (int)change) / 60) / 60;
				int chan = change / (double)60 + 0.5;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", va[r].hour, va[r].minute, va[r].sec, hour, min, sec, chan);
				vb[0].time = vb[0].time + va[r].p_time * 60;
				r++;
			}
		}
		else if (na[t].totaltime > va[r].totaltime) {
			if (va[r].totaltime >= vb[0].time) {
				int s = 0, min = 10000, mls = 0;
				while (s <= vb.size() - 1 && va[r].totaltime >= vb[s].time) {
					if (min > vb[s].num) {
						min = vb[s].num;
						mls = s;
					}
					s++;
				}
				vb[mls].use++;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", va[r].hour, va[r].minute, va[r].sec, va[r].hour, va[r].minute, va[r].sec, 0);
				vb[mls].time = va[r].totaltime + va[r].p_time * 60;
				r++;
			}
			else if (va[r].totaltime < vb[0].time&&va[r].totaltime >= nb[0].time) {
				int s = 0, min = 10000, mls = 0;
				while (s <= nb.size() - 1 && va[r].totaltime >= nb[s].time) {
					if (min > nb[s].num) {
						min = nb[s].num;
						mls = s;
					}
					s++;
				}
				nb[mls].use++;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", va[r].hour, va[r].minute, va[r].sec, va[r].hour, va[r].minute, va[r].sec, 0);
				nb[mls].time = va[r].totaltime + va[r].p_time * 60;
				r++;
			}
			else if (va[r].totaltime < vb[0].time&&va[r].totaltime < nb[0].time&&vb[0].time <= nb[0].time) {
				vb[0].use++;
				double change = (double)(vb[0].time - va[r].totaltime);
				int sec = (va[r].sec + (int)change) % 60;
				int min = (va[r].minute + (va[r].sec + (int)change) / 60) % 60;
				int hour = va[r].hour + (va[r].minute + (va[r].sec + (int)change) / 60) / 60;
				int chan = change / (double)60 + 0.5;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", va[r].hour, va[r].minute, va[r].sec, hour, min, sec, chan);
				vb[0].time = vb[0].time + va[r].p_time * 60;
				r++;
			}
			else if (va[r].totaltime < vb[0].time&&va[r].totaltime < nb[0].time&&vb[0].time > nb[0].time) {
				nb[0].use++;
				double change = (double)(nb[0].time - va[r].totaltime);
				int sec = (va[r].sec + (int)change) % 60;
				int min = (va[r].minute + (va[r].sec + (int)change) / 60) % 60;
				int hour = va[r].hour + (va[r].minute + (va[r].sec + (int)change) / 60) / 60;
				int chan = change / (double)60 + 0.5;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n", va[r].hour, va[r].minute, va[r].sec, hour, min, sec, chan);
				nb[0].time = nb[0].time + va[r].p_time * 60;
				r++;
			}
		}
	}
	for (int i = 0;i < M;i++) {
		b[i] = vb[i];
	}
	for (int i = 0;i < K - M;i++) {
		b[i + M] = nb[i];
	}
	sort(b.begin(), b.end(), cmp2);
	cout << b[0].use;
	for (int i = 1;i < b.size();i++) {
		cout << " "<<b[i].use;
	}
	cout << endl;
	return 0;
}*/
