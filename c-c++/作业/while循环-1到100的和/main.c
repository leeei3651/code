#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,sum=0;
    while(i<=100)
    {
        sum=sum+i;
        i++;
    }
    printf("1到100的和为%d",sum);
    return 0;
}
