#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
typedef struct HFTNode
{
    char Data;
    int Parent;
    int Lchild;
    int Rchild;
    int Weight;
}HFTNode, *HFTree;
typedef struct CNode
{
    char Data;
    char Code[100];
}CNode;
HFTree T;
void AddNode(int N)
{
    int min1 = 0, min2 = 0;
    for(int i=1; i<N; i++){//找到两个没父母的节点
        if(T[i].Parent == 0 && min1 == 0)
            min1 = i;
        else if(T[i].Parent == 0 && min1 != 0)
            min2 = i;
    }
    if(T[min1].Weight > T[min2].Weight){
        int temp = min1;
        min1 = min2;
        min2 = temp;
    }
    for(int i=1; i<N; i++){//寻找最小根节点
        if(T[i].Parent == 0 && T[i].Weight < T[min1].Weight){
            min2 = min1;
            min1 = i;
        }
        else if(T[i].Parent == 0 && T[i].Weight < T[min2].Weight && i!=min1 )
            min2 = i;
    }
    T[N].Weight = T[min1].Weight + T[min2].Weight;
    T[N].Lchild = min1;
    T[N].Rchild = min2;
    T[N].Parent = 0;
    T[min1].Parent = N;
    T[min2].Parent = N;
}
int JuChild(int m1, int m2, CNode *Code)
{
    int len = strlen(Code[m1].Code);
    int flag = 0;
    for(int i=0; i<len; i++){
        if(Code[m1].Code[i] != Code[m2].Code[i])//存在不相等的则赋1
            flag = 1;
    }
    if(flag == 0)//说明是子序列
        return 1;
    else
        return 0;
}
int main()
{
    int N, M, Weight=0;
    scanf("%d", &N);getchar();
    T = (HFTNode*)malloc(sizeof(HFTNode)*(2*N));
    for(int i=1; i<=N; i++){
        scanf("%c %d", &T[i].Data, &T[i].Weight);getchar();
        T[i].Parent = 0;
        T[i].Lchild = 0;
        T[i].Rchild = 0;
    }
    for(int i=N+1; i<2*N; i++){//带权路径为非叶节点权值之和
        AddNode(i);
        Weight += T[i].Weight;

    }
    scanf("%d", &M);
    for(int i=0; i<M; i++){
        CNode Code[100];
        int weight = 0;
        for(int j=1; j<=N; j++){
            scanf("%c%*c%s", &Code[j].Data, &Code[j].Code);
            weight += T[j].Weight * strlen(Code[j].Code);
        }
        if(weight != Weight)//带权路径不一致
            printf("No\n");
        else{
                int flag = 1;
            for(int j=N; j>=1 && flag; j--){//判断某个序列是否是另一个编码的子序列
                for(int i=1; i<j; i++){
                    int is = JuChild(j, i, Code);
                    if(is){
                        printf("No\n");
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag)
                printf("Yes\n");
        }

    }
}
