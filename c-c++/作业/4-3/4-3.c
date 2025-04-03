#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i;
    a=c=0;
    for(i=0;i<=10;i+=2)
    {
        a+=i;
        b=i+1;
        c+=b;
    }
    printf("1到10的整数中所有偶数和为%d",a);
    printf("1到10的整数中所有奇数和为%d",c-11);
    return 0;
}
