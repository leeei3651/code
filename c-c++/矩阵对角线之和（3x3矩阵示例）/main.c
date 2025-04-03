#include<stdio.h>
int main()
{
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int i, j, sum = 0,k;
	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 2; j++)
		{
			k = i + j;
			if (k % 2 ==0)
			{
				sum = sum + a[i][j];
			}
			else
			{
				continue;
			}
		}
	printf("sum=%d\n", sum);
	return 0;
}
