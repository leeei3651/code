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
        printf("�������������ֵΪ:%d",d);
    else
        printf("�������������ֵΪ:%d",c);
    return 0;
}
