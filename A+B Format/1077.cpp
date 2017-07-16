/*#include <iostream>  
#include <string>  
#include <algorithm>  

using namespace std;

string find_suffix(string& s1, string& s2)
{
	//  reverse(s1.begin(), s1.end());  
	reverse(s2.begin(), s2.end());
	size_t s1_begin = 0;
	size_t s2_begin = 0;
	for (; s1[s1_begin] == ' '; ++s1_begin) {}
	for (; s2[s2_begin] == ' '; ++s2_begin) {}
	size_t s1_end = s1_begin;
	size_t s2_end = s2_begin;
	for (; s1_end < s1.size() && s2_end < s2.size() && s1[s1_end] == s2[s2_end];
	++s1_end, ++s2_end) {
	}
	return s1.substr(s1_begin, s1_end - s1_begin);
}

int main()
{
	int n;
	string s1, s2;
	cin >> n;
	getchar();
	getline(cin, s1);
	reverse(s1.begin(), s1.end());
	for (int i = 2; i <= n; ++i)
	{
		getline(cin, s2);
		s1 = find_suffix(s1, s2);
	}

	if (s1.size() != 0)
	{
		reverse(s1.begin(), s1.end());
		cout << s1 << endl;
	}
	else
	{
		cout << "nai" << endl;
	}
	return 0;
}*/