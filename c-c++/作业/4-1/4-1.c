#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age=0;
    printf("请输入你的年龄");
    scanf("%d",&age);
    if(age>=18)
        printf("您属于成年人，可以使用该软件！");
    else
        printf("您不是成年人，无法使用该软件!");
    return 0;
}
