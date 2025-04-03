#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b)
        d=a;
    else
        d=b;
    if(d>c)
        printf("三个整数的最大值为:%d",d);
    else
        printf("三个整数的最大值为:%d",c);
    return 0;
}
