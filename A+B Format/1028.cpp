/*#define _CRT_SECURE_NO_WARNINGS
#include<iostream>  
#include<string>  
#include<string.h>  
#include<algorithm>  
#include<vector>  
#include<cstdio>  
using namespace std;

typedef struct student
{
	int num;
	char name[20];
	int grade;
}Student;

int n;
bool comparison(Student a, Student b)
{
	if (n == 1)
	{
		return a.num<b.num;
	}
	else if (n == 2)
	{
		if (strcmp(a.name, b.name) == 0)
			return a.num<b.num;
		return strcmp(a.name, b.name)<0;
	}
	else if (n == 3)
	{
		if (a.grade == b.grade)
			return a.num<b.num;
		return a.grade < b.grade;
	}
}

int main()
{
	int M;
	cin >> M >> n;
	vector<Student> s(M);
	int i;
	for (i = 0; i<M; i++)
		scanf("%d%s%d", &s[i].num, &s[i].name, &s[i].grade);

	sort(s.begin(), s.end(), comparison);
	for (i = 0; i<M; i++)
		printf("%06d %s %d\n", s[i].num, s[i].name, s[i].grade);

	return 0;
}*/