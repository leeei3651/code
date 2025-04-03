#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int n,t;
char ch[105][105];
bool flag=false,vis[105][105];
int sx,sy,fx,fy;
int bx[]={0,0,1,-1},by[]={1,-1,0,0};//��������
struct node{
	int x,y;
};
queue<node> q;//����
void bfs(){
	while(!q.empty()){
		node tmp=q.front();//ȡ��ͷԪ��
		q.pop();//����
		if(tmp.x==fx&&tmp.y==fy){//Ŀ��״̬
			flag=true;
			return;
		}
		for(int i=0;i<4;i++){//��Χ�ĸ���������
			int dx=tmp.x+bx[i],dy=tmp.y+by[i];
			if(dx<0||dx>=n||dy<0||dy>=n){//�±�Խ��
				continue;
		    }
			if(vis[dx][dy]){//�Ѿ������ʹ�
				continue;
			}
			if(ch[dx][dy]=='#'){//ǽ��
				continue;
			}
			vis[dx][dy]=1;//�ȱ��
			q.push(node{dx,dy});//�����
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
        while(!q.empty()){//������룬��ֹ�ϴζ��е�Ӱ��
			q.pop();
		}
		vis[sx][sy]=1;
		q.push(node{sx,sy});//������
		bfs();
		cout<<(flag?"YES":"NO")<<endl;
	}
	return 0;
}
