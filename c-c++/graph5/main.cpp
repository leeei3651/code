#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
const int maxn = 100;
const int inf = 100;
typedef struct trip
{
    int lengths;
    int cost;
}trip;
trip t[maxn][maxn];
void initgraph(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
            {
                t[i][j].cost=0;
                t[i][j].lengths=0;
            }
			else
            {
                t[i][j].cost=inf;
                t[i][j].lengths=inf;
            }
		}
	}
}
void setgraph(int m) {
	while (m--) {
		int x, y, z, c;
		cin >> x >> y >> z >> c;
		t[x][y].lengths = t[y][x].lengths = z;
		t[x][y].cost = t[y][x].cost = c;
	}
}
void floyd(int n) {
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (t[i][j].lengths > t[i][k].lengths + t[k][j].lengths) {
					t[i][j].lengths = t[i][k].lengths + t[k][j].lengths;
					t[i][j].cost = t[i][k].cost + t[k][j].cost;
				}
				if (t[i][j].lengths == t[i][k].lengths + t[k][j].lengths)
					t[i][j].cost = min(t[i][j].cost, t[i][k].cost + t[k][j].cost);
			}
		}
	}
}
int main()
{
	int n, m, s, d;
	cin >> n >> m >> s >> d;
	initphoto(n);
	setphoto(m);
	floyd(n);
	cout << t[s][d].lengths << " " << t[s][d].cost;
	return 0;
}
