/*#include<iostream>  
#include<vector>  
#include<map>  
#include<algorithm>  
#include<string>  
using namespace std;

map<string, int> weight;     //每个点的权重  
map<string, vector<string> > adj;  //邻接表  
map<string, int> visited;  //是否访问过  
map<string, int> res;   //存放结果  
int num, total_w;
int N, K;
string head;

void dfs(string s)
{
	visited[s] = 1;
	num += 1;
	total_w += weight[s];
	if (weight[s] > weight[head])head = s;
	for (vector<string>::iterator it = adj[s].begin();it != adj[s].end();it++)
	{
		if (visited[*it] == 0)dfs(*it);
	}
}
int main()
{
	int i, t;
	string name1, name2;
	cin >> N >> K;
	for (i = 0;i < N;i++)
	{
		cin >> name1 >> name2 >> t;
		adj[name1].push_back(name2);
		adj[name2].push_back(name1);
		weight[name1] += t;
		weight[name2] += t;
		visited[name1] = 0;
		visited[name2] = 0;
	}
	for (map<string, int>::iterator it = visited.begin();it != visited.end();it++)
	{
		if (visited[it->first] == 0)
		{
			num = 0;
			total_w = 0;
			head = it->first;
			dfs(it->first);
			if (num > 2 && total_w / 2 > K)res[head] = num;
		}
	}
	//cout<<"flag"<<endl;  
	cout << res.size() << endl;
	for (map<string, int>::iterator it1 = res.begin();it1 != res.end();it1++)
	{
		cout << it1->first << " " << it1->second << endl;
	}
	return 0;
}*/