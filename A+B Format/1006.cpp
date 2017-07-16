/*#include<iostream>
#include<string>
using namespace std;
struct Time {
	int hour;
	int min;
	int sec;
};
struct peo {
	string id;
	Time in;
	Time out;
};

peo list[20];
void inittime(string time, int st,int n) {
	int beg = 0;
	int  end = time.find(':', beg + 1);
	if (n == 0) {
		list[st].in.hour = atoi(time.substr(beg, end).c_str());
		beg = end;
		end = time.find(':', beg + 1);
		list[st].in.min = atoi(time.substr(beg, end).c_str());
		list[st].in.sec = atoi(time.substr(end+1, time.length()).c_str());
	}
	else {
		list[st].out.hour = atoi(time.substr(beg, end).c_str());
		beg = end;
		end = time.find(':', beg + 1);
		list[st].out.min = atoi(time.substr(beg, end).c_str());
		list[st].out.sec = atoi(time.substr(end + 1, time.length()).c_str());
	}
}
int min(int n) {
	int t = 0;
	for (int i = 1;i < n;i++) {
		if (list[t].in.hour>list[i].in.hour) {
			t = i;
			continue;
		}
		else if (list[t].in.hour == list[i].in.hour) {
			if (list[t].in.min > list[t].in.min) {
				t = i;
				continue;
			}
			else if (list[t].in.min == list[i].in.min) {
				if (list[t].in.sec > list[t].in.sec) {
					t = i;
				}
			}
		}
	}
	return t;
}
int max(int n) {
	int t = 0;
	for (int i = 1;i < n;i++) {
		if (list[t].out.hour<list[i].out.hour) {
			t = i;
			continue;
		}
		else if (list[t].out.hour == list[i].out.hour) {
			if (list[t].out.min < list[t].out.min) {
				t = i;
				continue;
			}
			else if (list[t].out.min == list[i].out.min) {
				if (list[t].out.sec < list[t].out.sec) {
					t = i;
				}
			}
		}
	}
	return t;
}
int main(){
	int M;
	cin >> M;
	for (int i=0;i < M;i++) {
		string id;
		cin >> id;
		list[i].id = id;
		string time,time1;
		cin >> time;
		inittime(time, i,0);
		cin >> time1;
		inittime(time1, i, 1);
	}
	cout << list[min(M)].id << " " << list[max(M)].id << endl;
	return 0;
}*/