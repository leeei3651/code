//顺序表：
//1．	分别用函数实现相应功能。
//2．	在主函数中调用实现：长度最大为20个整型元素的线性表，插入、删除整数，每插入或删除一次后显示出变化后的线性表。

#include<iostream>;
#define LISTSIZE 20
#define OK 1
#define ERROR 0
using namespace std;

typedef struct
{
	int *elem;
	int last;
}SeqList;

bool CreateList(SeqList &L,int n){
	if(n<0||n>LISTSIZE) false;
	for(int i=0;i<n;i++){
		scanf("%d",&L.elem[i]);
		L.last++;
	}
	return true;
}
int InitList(SeqList &L){
    L.elem = new int[LISTSIZE];
    L.last=0;

    return OK;
}

int InsList(SeqList*L,int i,int e){
	int k;
	if((i<0)||(i>L->last+2)){
		printf("插入位置不合法");
		return ERROR;
	}

	if(L->last>=LISTSIZE){
		printf("表已满，无法插入");
		return ERROR;
	}

	for(k=L->last;k>=i-1;k--)
		L->elem[k+1]=L->elem[k];
	L->elem[i-1]=e;
	L->last++;
	return OK;
}
int DelList(SeqList*L,int i,int *e){
    int k;
    if((i<1)||(i>L->last+1)){
       printf("删除位置不合法");
       return ERROR;
       }
       *e =L->elem[i-1];
       for(k=i;i<=L->last;k++)
        L->elem[k-1]=L->elem[k];
       L->last--;
       return OK;
}
void printList(SeqList L){
for(int i=0;i<L.last;i++){
    cout<<L.elem[i]<<" ";
}
}

int main()
{
    int List=0,e=0;
	SeqList a;
	List = InitList(a);
	if(List==OK)printf("顺序表创建成功");
	CreateList(a,15);
	printList(a);
	InsList(&a,16,20);
	printList(a);
	printList(a);
	printf("%d",e);
	return 0;
}

