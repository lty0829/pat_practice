/*#include<iostream>  
#include<map>  
#include<cstdio>  
#include<algorithm>  
#include<queue>  
#include<cstring>  
#include<set>  
#include<stack>  
#include<cmath>  
#include<vector>  
#include<hash_map>  
#define ll long long  
#define inf 24*60*60  
using namespace std;
int father[10000];
int mark[10000];
struct node
{
	int id;
	int shu = 1;
	double sets = 0;
	double area = 0;
};
node bb[10000];
vector<node> v;
int findroot(int x)
{
	if (father[x] == -1) return x;
	else
	{
		int tmp = findroot(father[x]);
		father[x] = tmp;
		return tmp;
	}
}
bool cmp(node x, node y)
{
	if (fabs(x.area / x.shu - y.area / y.shu)<1e-5)
	{
		return x.id<y.id;
	}
	else
	{
		return x.area / x.shu>y.area / y.shu;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	memset(father, -1, sizeof(father));
	for (int i = 0;i<n;i++)
	{
		int d;
		scanf("%d", &d);
		int lp, rp;
		scanf("%d %d", &lp, &rp);
		int root1 = findroot(d);
		bb[d].id = d;
		mark[d] = 1;
		if (lp != -1)
		{
			int root2 = findroot(lp);
			mark[lp] = 1;
			if (root1 != root2)
			{
				int minn = min(root1, root2);
				int maxx = max(root1, root2);
				father[maxx] = minn;
				bb[minn].sets += bb[maxx].sets;
				bb[maxx].sets = 0;
				bb[minn].area += bb[maxx].area;
				bb[maxx].area = 0;
				bb[minn].shu += bb[maxx].shu;
				bb[maxx].shu = 0;
				bb[minn].id = minn;
				root1 = minn;
			}
		}
		if (rp != -1)
		{
			int root2 = findroot(rp);
			mark[rp] = 1;
			if (root1 != root2)
			{
				int minn = min(root1, root2);
				int maxx = max(root1, root2);
				father[maxx] = minn;
				bb[minn].sets += bb[maxx].sets;
				bb[maxx].sets = 0;
				bb[minn].area += bb[maxx].area;
				bb[maxx].area = 0;
				bb[minn].shu += bb[maxx].shu;
				bb[maxx].shu = 0;
				bb[minn].id = minn;
				root1 = minn;
			}
		}
		int k;
		scanf("%d", &k);
		for (int j = 0;j<k;j++)
		{
			int c;
			scanf("%d", &c);
			mark[c] = 1;
			int root2 = findroot(c);
			if (root1 != root2)
			{
				int minn = min(root1, root2);
				int maxx = max(root1, root2);
				father[maxx] = minn;
				bb[minn].sets += bb[maxx].sets;
				bb[maxx].sets = 0;
				bb[minn].area += bb[maxx].area;
				bb[maxx].area = 0;
				bb[minn].shu += bb[maxx].shu;
				bb[maxx].shu = 0;
				bb[minn].id = minn;
				root1 = minn;
			}
		}
		double sets;
		double area;
		scanf("%lf %lf", &sets, &area);
		bb[root1].sets += sets;
		bb[root1].area += area;
		//cout<<root1<<endl;  
	}
	//cout<<1<<endl;  
	int ans = 0;
	for (int i = 0;i<10000;i++)
	{
		if (mark[i] == 1 && bb[i].shu != 0)
		{
			ans++;
			v.push_back(bb[i]);
		}
	}
	sort(v.begin(), v.end(), cmp);
	printf("%d\n", ans);
	for (int i = 0;i<v.size();i++)
	{
		printf("%04d %d %.3lf %.3lf\n", v[i].id, v[i].shu, v[i].sets / v[i].shu, v[i].area / v[i].shu);
	}
}*/