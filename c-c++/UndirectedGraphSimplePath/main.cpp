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
    cout<<"请输入顶点数和边数（用空格隔开）"<<endl;
    cin>>Gp->numNodes>>Gp->numEdges;
    for(i=0;i<Gp->numNodes;i++)
    {
        cout<<"请输入顶点信息"<<endl;
        cin>>Gp->adjlist[i].data;
        Gp->adjlist[i].firstedge=NULL;
    }
    for(k=0;k<Gp->numEdges;k++)
    {
        cout<<"请输入边（Vi，Vj）的顶点序号i，j"<<endl;
        cin>>i>>j;
        pe = (EdgeNode *)malloc( sizeof(EdgeNode));
        pe->adjvex = j; /* 邻接序号为j */
         /* 将pe的指针指向当前顶点上指向的结点 */
        pe->next = Gp->adjlist[i].firstedge;
        Gp->adjlist[i].firstedge = pe; /* 将当前顶点的指针指向pe */

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
    cout<<"请输入出发点和终点以及路径长度"<<endl;
    cin>>i>>j>>k;
    if(PathLenK(&Gp,i,j,k));
    cout<<"存在"<<i<<"到"<<j<<"路径长度为"<<k<<"的简单路径"<<endl;
    return 0;
}

