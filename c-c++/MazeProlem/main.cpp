#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int n,t;
char ch[105][105];
bool flag=false,vis[105][105];
int sx,sy,fx,fy;
int bx[]={0,0,1,-1},by[]={1,-1,0,0};//方向数组
struct node{
	int x,y;
};
queue<node> q;//队列
void bfs(){
	while(!q.empty()){
		node tmp=q.front();//取队头元素
		q.pop();//出队
		if(tmp.x==fx&&tmp.y==fy){//目标状态
			flag=true;
			return;
		}
		for(int i=0;i<4;i++){//周围四个方向搜索
			int dx=tmp.x+bx[i],dy=tmp.y+by[i];
			if(dx<0||dx>=n||dy<0||dy>=n){//下标越界
				continue;
		    }
			if(vis[dx][dy]){//已经被访问过
				continue;
			}
			if(ch[dx][dy]=='#'){//墙壁
				continue;
			}
			vis[dx][dy]=1;//先标记
			q.push(node{dx,dy});//再入队
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>ch[i][j];
			}
		}
		cin>>sx>>sy>>fx>>fy;
		flag=false;
		memset(vis,0,sizeof(vis));
        while(!q.empty()){//多次输入，防止上次队列的影响
			q.pop();
		}
		vis[sx][sy]=1;
		q.push(node{sx,sy});//起点入队
		bfs();
		cout<<(flag?"YES":"NO")<<endl;
	}
	return 0;
}
