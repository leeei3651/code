#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int number=0,words=0,blank=0,other=0,i;
    for(i=0;i<10;i++)
    {
        scanf("%c",&ch);
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
            words++;
        else  if(ch>='0'&&ch<='9')
            number++;
        else if(ch==' '||ch=='\n')
            blank++;
        else
            other++;
    }
    printf("number=: %d,words=: %d,blank=: %d,other=: %d",number,words,blank,other);
    return 0;
}
