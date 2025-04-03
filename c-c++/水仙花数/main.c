#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[899];
    int x,y,z,sum,i;
    for(i=100;i<1000;i++)
    {
        a[i-100]=i;
        x=a[i-100]%10;
        y=a[i-100]/10%10;
        z=a[i-100]/100;
        if(i==x*x*x+y*y*y+z*z*z)
        {
            sum=x*x*x+y*y*y+z*z*z;
            printf("%d ",sum);
        }
        else
            continue;
    }
    return 0;
}
