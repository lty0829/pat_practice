/*#include <iostream>  
#include <vector>  
using namespace std;

int main()
{
	long long n;
	cin >> n;

	vector<int> ans(1, n), tpv; //�����n�����Ǳ�Ȼ���ڵ�һ����̽��������ʱ���  
	int tempi;
	for (long long i = 2;i*i <= n;i++)    //�ֽ����ʼλ��  
	{
		tpv.clear();
		tempi = n;
		for (long long j = i;j <= tempi;j++)  //�����ֽ⣬���������˳�  
		{
			if (tempi%j == 0)
			{
				tpv.push_back(j);
				tempi /= j;
			}
			else
				break;
		}
		if (tpv.size()>ans.size())    //�ж��Ƿ���ݴ�����Ÿ���  
			ans = tpv;
		else if (tpv.size() == ans.size() && tpv[0]<ans[0])
			ans = tpv;
	}

	cout << ans.size() << endl; //������  
	cout << ans[0];
	for (int i = 1;i<ans.size();i++)
		cout << "*" << ans[i];

	return 0;
}*/