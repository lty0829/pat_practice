/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
bool illegal(string a, vector<int>& b, vector<int>& s)//���ĺϷ���У��
{
	b.clear();
	s.clear();
	bool flag = true;
	for (int i = 0;i<a.length();++i)
	{
		if (a[i] <= '9'&&a[i] >= '0')//�����ַ�������
		{
			if (flag)
				b.push_back(a[i] - '0');
			else
			{
				if (s.size() == 2)//��֤С��λλ������Ϊ2
					return false;
				s.push_back(a[i] - '0');
			}
		}
		else if (a[i] == '.')//dotֻ�ܳ���һ��
		{
			if (flag)
				flag = false;
			else
				return false;
		}
		else if (a[i] == '-');//�Լ��Ų�������
		else
			return false;
	}
	return true;
}
int vector2Value(vector<int>& v)
{
	if (v.size() == 0)
		return 0;
	int all = 0;
	for (int i = 0;i<v.size();++i)
		all = all * 10 + v[i];
	return all;
}
int main()
{
	int n;
	int realCount = 0;
	double sum = 0.0;
	double cur = 0.0;
	vector<int> bigger;
	vector<int> smaller;
	cin >> n;
	string value;
	for (int i = 0;i<n;++i)
	{
		cin >> value;
		if (illegal(value, bigger, smaller))
		{
			cur = 0.0;
			cur += vector2Value(bigger);
			cur += (double)vector2Value(smaller) / pow(10, smaller.size());
			if (cur <= 1000.0&&cur >= 0.0)
			{
				realCount++;
				if (value[0] == '-')
					cur = -cur;
				sum += cur;
			}
			else
				cout << "ERROR: " << value << " is not a legal number" << endl;
		}
		else
		{
			cout << "ERROR: " << value << " is not a legal number" << endl;
		}
	}
	if (realCount>1)
		printf("The average of %d numbers is %.2lf\n", realCount, sum / realCount);
	else if (realCount == 1)//���������ֻ��һ���Ϸ�ʵ��ֵ��
		printf("The average of 1 number is %.2lf\n", sum);
	else
		cout << "The average of 0 numbers is Undefined" << endl;
	return 0;
}*/