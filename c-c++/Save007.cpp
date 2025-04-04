#include <iostream>
#define maxn 100
using namespace std;

int n,jumpDistance;

typedef struct Crocodile
{
    int x;
    int y;
}Crocodile;//定义鳄鱼坐标结构体

struct Crocodile crocodile[maxn];

bool Visited[maxn]={false};

void initCrocodile()
{
    int a,b;
    for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            crocodile[i].x=a;
            crocodile[i].y=b;
        }
}

bool firstJump(int x,int y)
{
    if(x*x+y*y<=(7.5+jumpDistance)*(7.5+jumpDistance))
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool jump(int v,int i)
{
    int x1=crocodile[v].x;
    int y1=crocodile[v].y;
    int x2=crocodile[i].x;
    int y2=crocodile[i].y;
    if((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)<=jumpDistance*jumpDistance)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isSave(int v)
{
    if((crocodile[v].x+jumpDistance>=50)||(crocodile[v].y+jumpDistance>=50)||(crocodile[v].x-jumpDistance<=-50)||(crocodile[v].y-jumpDistance<=-50))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool DFS(int v)
{
    bool answer =false;
    Visited[v]=true;//将初始鳄鱼坐标设置为已访问状态
    if(isSave(v))
    {
        return true;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(!Visited[i]&&jump(v,i))//对v的所有邻接点做深度搜索
            {
                answer=DFS(i);
            }
        }
    }
    return answer;
}
void Save007()
{
    bool answer =false;
    for(int i=0;i<n;i++)
    {
        if(!Visited[i]&&firstJump(crocodile[i].x,crocodile[i].y))//寻找第一次跳跃可以跳到的鳄鱼坐标
        {
            answer =DFS(i);//对第一个能够跳到的鳄鱼坐标进行深度优先搜索
        }
    }
    if(answer==true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
int main()
{
    cin>>n>>jumpDistance;
    initCrocodile();
    Save007();
    return 0;
}
