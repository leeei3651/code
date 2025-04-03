#include <stdio.h>
#include <stdlib.h>

int main()
{
   double x;
   int y;
   printf("请输入一个正数：\n");
   scanf("%lf",&x);
   if(x>=1000||x<=0)
    printf("Invalidnumber");
   else
   {
     y=(int)x;
   if(y%2==0)
        printf("%d是偶数",y);
   else
        printf("%d是奇数",y);
   }

   return 0;
}
