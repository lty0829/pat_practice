/*#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;

struct p
{
	int left;
	int right;
	int value;
	bool flag;//是否已经有数字插入
}Node[100001];

int point[101];
int len = 0;

void insert(int i)
{
	if (Node[i].left != -1)
		insert(Node[i].left);
	Node[i].value = point[len++];
	if (Node[i].right != -1)
		insert(Node[i].right);
}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d%d", &Node[i].left, &Node[i].right);
			Node[i].flag = false;//没有用到
		}
		for (int i = 0; i < n; i++)
			scanf("%d", &point[i]);
		sort(point, point + n);//排序
		insert(0);//遍历
		queue<int> q;
		q.push(0);
		while (!q.empty())
		{
			int x = q.front();
			q.pop();
			if (x != 0)
				printf(" ");
			printf("%d", Node[x].value);
			if (Node[x].left != -1)
				q.push(Node[x].left);
			if (Node[x].right != -1)
				q.push(Node[x].right);
		}
		printf("\n");
	}
	return 0;
}*/