/*#include <iostream>  
#include <vector>  
using namespace std;

int main()
{
	long long n;
	cin >> n;

	vector<int> ans(1, n), tpv; //结果（n本身是必然存在的一个最短结果），临时结果  
	int tempi;
	for (long long i = 2;i*i <= n;i++)    //分解的起始位置  
	{
		tpv.clear();
		tempi = n;
		for (long long j = i;j <= tempi;j++)  //连续分解，不成立则退出  
		{
			if (tempi%j == 0)
			{
				tpv.push_back(j);
				tempi /= j;
			}
			else
				break;
		}
		if (tpv.size()>ans.size())    //判断是否比暂存的最优更好  
			ans = tpv;
		else if (tpv.size() == ans.size() && tpv[0]<ans[0])
			ans = tpv;
	}

	cout << ans.size() << endl; //输出结果  
	cout << ans[0];
	for (int i = 1;i<ans.size();i++)
		cout << "*" << ans[i];

	return 0;
}*/