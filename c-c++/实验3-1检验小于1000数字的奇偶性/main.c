#include <stdio.h>
#include <stdlib.h>

int main()
{
   double x;
   int y;
   printf("������һ��������\n");
   scanf("%lf",&x);
   if(x>=1000||x<=0)
    printf("Invalidnumber");
   else
   {
     y=(int)x;
   if(y%2==0)
        printf("%d��ż��",y);
   else
        printf("%d������",y);
   }

   return 0;
}
