#include<stdio.h>
int main()
{
	void hannoi(int n, char one, char two, char three);
	int m;
	printf("请输入盘子的个数：");
	scanf("%d",&m);
	printf("%d\n",m);
	hannoi(m,'A','B','C');
}void hannoi(int n, char one, char two, char three)
{
	void move(char x, char y);
	if (n == 1)move(one, three);
	else
	{
		hannoi(n - 1, one, three, two);
		move(one, three);
		hannoi(n - 1, two, one, three);
	}
}
void move(char x, char y)
{
	printf("% c-> % c\n", x, y);
}
