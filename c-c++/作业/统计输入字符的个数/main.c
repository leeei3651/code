#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    printf("input a string:");
    while(getchar()!='\n')n++;
    printf("Number of characters:%d\n",n);
    return 0;
}
