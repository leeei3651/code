#include<iostream>
#include<malloc.h>
using namespace std;

#define MaxSize 100

bool visited[MaxSize]={false};
typedef struct EdgeNode
{
    int adjvex;
    struct EdgeNode *next;
}EdgeNode;

typedef struct VextexNode
{
    int data;
    EdgeNode *firstedge;
}VextexNode,AdjList[MaxSize];

typedef struct GraphAdjList
{
    AdjList adjlist;
    int numNodes,numEdges;
}GraphAdjList;

void CreatGraphAdjList(GraphAdjList *Gp)
{
    int i,j,k;
    EdgeNode *pe;
    cout<<"�����붥�����ͱ������ÿո������"<<endl;
    cin>>Gp->numNodes>>Gp->numEdges;
    for(i=0;i<Gp->numNodes;i++)
    {
        cout<<"�����붥����Ϣ"<<endl;
        cin>>Gp->adjlist[i].data;
        Gp->adjlist[i].firstedge=NULL;
    }
    for(k=0;k<Gp->numEdges;k++)
    {
        cout<<"������ߣ�Vi��Vj���Ķ������i��j"<<endl;
        cin>>i>>j;
        pe = (EdgeNode *)malloc( sizeof(EdgeNode));
        pe->adjvex = j; /* �ڽ����Ϊj */
         /* ��pe��ָ��ָ��ǰ������ָ��Ľ�� */
        pe->next = Gp->adjlist[i].firstedge;
        Gp->adjlist[i].firstedge = pe; /* ����ǰ�����ָ��ָ��pe */

        pe = (EdgeNode *)malloc( sizeof(EdgeNode));
        pe->adjvex = i;
        pe->next = Gp->adjlist[j].firstedge;
        Gp->adjlist[j].firstedge = pe;
    }
}
bool PathLenK(GraphAdjList *Gp,int i,int j,int k)
{
    if(i==j&&k==0)
        return true;
    else
    {
        visited[i]=true;
        for(Gp->adjlist[i].firstedge;Gp->adjlist[i].firstedge;Gp->adjlist[i].firstedge=Gp->adjlist[i].firstedge->next)
        {
            int v=Gp->adjlist[i].firstedge->adjvex;
            if(!visited[v])
            if(PathLenK(Gp,v,j,k-1))
            return 1;
        }
    }visited[i]=false;
    return false;
}
int main()
{
    int i,j,k;
    GraphAdjList Gp;
    CreatGraphAdjList(&Gp);
    cout<<"�������������յ��Լ�·������"<<endl;
    cin>>i>>j>>k;
    if(PathLenK(&Gp,i,j,k));
    cout<<"����"<<i<<"��"<<j<<"·������Ϊ"<<k<<"�ļ�·��"<<endl;
    return 0;
}

