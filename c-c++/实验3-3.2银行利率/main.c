#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t=0;
    double w=0,sum,i;
    printf("��������Ҫ����Ľ���ʱ��");
    scanf("%lf,%d",&w,&t);
    if(t>0&&t<=6){
        i=0.0610;
    }else if(t>6&&t<=12){
        i=0.0656;
    }else if(t>12&&t<=36){
        i=0.0665;
    }else if(t>36){
        i=0.0690;
    }
    sum=w+w*i;
    printf("������ϢӦ�û��%lf\n",sum);
    return 0;
}
