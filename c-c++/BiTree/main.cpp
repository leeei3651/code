#include <iostream>
#include<stdio.h>

using namespace std;

typedef struct TreeNode
{
    int data;
    struct TreeNode *Lchild;
    struct TreeNode *Rchild;
}TreeNode,*BiTree;

void postOrder(TreeNode *T){
    TreeNode *stack[15];
    int top = -1;
    int flagStack[15];   //记录每个节点访问次数栈
    TreeNode *p = T;
    while(p!=NULL||top!=-1){
        if(p!=NULL){     //第一次访问，flag置1，入栈
            stack[++ top] = p;
            flagStack[top] = 1;
            p = p->Lchild;
        }else{//（p == NULL）
            if(flagStack[top] == 1){  //第二次访问，flag置2，取栈顶元素但不出栈
                p = stack[top];
                flagStack[top] = 2;
                p = p->Rchild;
            }else{         //第三次访问，出栈
                p = stack[top --];
                printf("%d\t",p->data);    //出栈时，访问输出
                p = NULL;      //p置空，以便继续退栈
            }
        }
    }
}
BiTree createBiTree(int n)
{
    cout<<"请输入结点个数:"<<;
    cin>>n;
    string s[20];
    BiTree T=new BiTree;
    cout<<endl<<"请按照遍历顺序输入入栈数据和出栈数据";
    for(int i=0;i<2n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<20;i+=2)
    {
        if(s[i]="push")
        {
            T-
        }
    }
}
int main()
{
    TreeNode *T1=new TreeNode;T1->data=1;
    TreeNode *T0=new TreeNode;T0->data=0;
    TreeNode *T2=new TreeNode;T2->data=2;
    TreeNode *T4=new TreeNode;T4->data=4;
    T1->Lchild=T0;T1->Rchild=T2;
    T0->Lchild=NULL;T0->Rchild=T4;
    T2->Lchild=NULL;T2->Rchild=NULL;
    T4->Lchild=NULL;T4->Rchild=NULL;
    postOrder(T1);
    return 0;
}
