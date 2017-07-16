/*#include <iostream>
#include <string.h>
using namespace std;
long long radix,tag;
char N1[15], N2[15];
long long num2Dec(char * p, long long radix)
{
	long long len = strlen(p);
	long long m = 1;
	long long num = 1;
	long long sum = 0;
	for (long long i = len - 1;i >= 0;i--)
	{
		if (p[i] >= 'a'&&p[i] <= 'z')
			num = p[i] - 'a' + 10;
		else if (p[i] >= '0'&& p[i] <= '9')
			num = p[i] - '0';
		sum += num*m;
		m *= radix;
	}
	return sum;
}
long long findLowRadix(char *p)
{
	long long len = strlen(p);
	long long low = 0;
	long long num;
	for (long long i = len - 1;i >= 0;i--)
	{
		if (p[i] >= 'a'&&p[i] <= 'z')
			num = p[i] - 'a' + 10;
		else if (p[i] >= '0'&& p[i] <= '9')
			num = p[i] - '0';
		if (num + 1>low)
			low = num + 1;
	}
	return low;

}

int compare(char* p, long long radix, long long target)
{
	long long len = strlen(p);
	long long m = 1;
	long long num = 1;
	long long sum = 0;
	for (long long i = len - 1;i >= 0;i--)
	{
		if (p[i] >= 'a'&&p[i] <= 'z')
			num = p[i] - 'a' + 10;
		else if (p[i] >= '0'&& p[i] <= '9')
			num = p[i] - '0';
		sum += num*m;
		m *= radix;
		if (sum>target)  //avoid  overflow
			return 1;
	}

	if (sum>target)
		return 1;
	else if (sum<target)
		return -1;
	else
		return 0;

}


long long binarySearch(char *p, long long low, long long high, long long top)
{
	long long mid = low;
	long long tmp;
	while (low <= high)
	{
		tmp = compare(p, mid, top);
		if (tmp>0)
		{
			high = mid - 1;
		}
		else if (tmp<0)
		{
			low = mid + 1;
		}
		else
			return mid;
		mid = (low + high) / 2;
	}

	return -1;
}
int main() {
	long long target;
	long long least; 
	long long most; 
	long long res;

	cin >> N1 >> N2 >> tag >> radix;
	if (1 == tag)
	{
		target = num2Dec(N1, radix);
		least = findLowRadix(N2);
		most = (target + 1 > least + 1) ? target + 1 : least + 1;
		res = binarySearch(N2, least, most, target);
		if (res == -1)
			cout << "Impossible" << endl;
		else
			cout << res << endl;

	}
	else if (2 == tag)
	{
		target = num2Dec(N2, radix);
		least = findLowRadix(N1);
		most = (target + 1 > least + 1) ? target + 1 : least + 1;
		res = binarySearch(N1, least, most, target);
		if (res == -1)
			cout << "Impossible" << endl;
		else
			cout << res << endl;
	}
	return 0;
}*/