#include<iostream>

using namespace std;

const int max1 = 100;
const int f = 100;
int a[max1][max1];

void initgraph(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == j)
				a[i][j] = 0;
			else
				a[i][j] = f;
		}
	}
}
void setgraph(int m)
{
	while (m--)
	{
		int x, y, z;
		cin >> x >> y >> z;
		a[x][y] = a[y][x] = z;
	}
}

void get(int n)
{
	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
}
void solve(int n)
{
	int ans = 0;
	int Min = f;
	for (int i = 1; i <= n; i++)
	{
		int Max = 0;
		for (int j = 1; j <= n; j++)
		{
			Max = max(Max, a[i][j]);
		}
		if (Max < Min)
		{
			Min = Max;
			ans = i;
		}
	}
	if (Min == f)
		cout << "0";
	else
		cout << ans << " " << Min;
}
int main()
{
	int n, m;
	cin >> n >> m;
	initgraph(n);
	setgraph(m);
	get(n);
	solve(n);

	return 0;
}
