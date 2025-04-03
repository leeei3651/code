#include <iostream>
#include<malloc.h>
#include<string>
#define ERROR 0
#define OK 1
using namespace std;

typedef struct Student
{
    char name;
    float score;
}Student;
typedef struct Node
{
    Student student;
    struct Node*next;
}Node,*LinkList;

void InitList(LinkList *L)
{
    *L=(LinkList)malloc(sizeof(Node));
    (*L)->next=NULL;
}

void CreateFromHead(LinkList L)
{

    Node*s;
    Student stu;
    int flag=1;
    while(flag)
    {
        cin>>stu.name>>stu.score;
        if(stu.name!='$')
        {
            s=(Node *)malloc(sizeof(Node));
            s->student.name=stu.name;
            s->student.score=stu.score;
            s->next=L->next;
            L->next=s;
        }
        else flag=0;
    }
    cout<<"Done"<<endl;
}
int InsList(LinkList L,int i,Student stu)
{
    Node *pre,*s;
    int k;
    if(i<=0)
        {
            cout<<"插入位置不合理"<<endl;
            return ERROR;
         }
    pre=L;k=0;
    while(pre!=NULL&&k<i-1)
    {
        pre =pre->next;
        k=k+1;
    }
    if(pre==NULL)
    {
        cout<<"插入位置不合理";
        return ERROR;
    }
    s=(Node *)malloc(sizeof(Node));
    s->student.name=stu.name;
    s->student.score=stu.score;
    s->next=pre->next;
    pre->next=s;
    cout<<"插入成功"<<endl;
    return OK;
}
int DelList(LinkList L,int i,Student *e)
{

    Node *pre,*r;
    int k;
    pre =L;k=0;
    while(pre->next!=NULL&&k<i-1)
    {

        pre=pre->next;
        k=k+1;
    }
    if(pre->next==NULL)
    {
        cout<<"删除节点位置不合理！"<<endl;
        return ERROR;
    }
    r=pre->next;
    pre->next=r->next;
    e->name=r->student.name;
    e->score=r->student.score;
    cout<<"删除的学生为："<<e->name<<endl;
    free(r);
    return OK;

}
void PrintLinkNode(LinkList L)
{
  Node*s;
  s=(Node *)malloc(sizeof(Node));
  s=L->next;
  while (s != NULL) {
    cout<<s->student.name<<" "<<s->student.score<<endl;
    s =s->next;
  }
  cout<<"\n";
}
LinkList MergeLinkList(LinkList LA,LinkList LB)
{
    Node *pa,*pb,*r;
    LinkList LC;
    InitList(&LC);
    pa=LA->next;
    pb=LB->next;
    LC=LA;
    r=LC;
    while(pa!=NULL&&pb!=NULL)
    {
        if(pa->student.score<pb->student.score)
        {
            r->next=pa;r=pa;pa=pa->next;
        }
        else{
            r->next=pb;r=pb;pb=pb->next;
        }
    }
     if(pa)
            r->next=pa;
        else
            r->next=pb;
        free(LB);
        return LC;
}
int main()//主函数测试
{
    LinkList LA,LB;
    Student* e;
    e=(Student*)malloc(sizeof(Student));
    InitList(&LA);
    InitList(&LB);
    cout<<"请输入单链表A中的学生姓名以及成绩：(学生姓名用字母表示，用空格隔开,头插法，结尾输入： $ 0)"<<endl;
    CreateFromHead(LA);
    cout<<"请输入单链表B中的学生姓名以及成绩：(学生姓名用字母表示，用空格隔开,头插法，结尾输入： $ 0)"<<"\n";
    CreateFromHead(LB);
    cout<<"单链表A元素如下"<<endl;
    PrintLinkNode(LA);
    cout<<"单链表B元素如下"<<endl;
    PrintLinkNode(LB);
    Student stu1;
    stu1.name='B';stu1.score=20.0f;
    InsList(LA,2,stu1);
    cout<<"插入新学生B后A链表的元素如下："<<endl;
    PrintLinkNode(LA);
    DelList(LA,4,e);
    cout<<"删除第四个学生后A链表的元素如下："<<endl;
    PrintLinkNode(LA);
    cout<<"合并A链表和B链表后如下:"<<endl;
    PrintLinkNode(MergeLinkList(LA,LB));
    return 0;
}
