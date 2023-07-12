#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const int N=2e6+10;
struct edge
{
	int w,to,next;
}e[N<<2];
int head[N<<2];
int cnt;
void add(int u,int v,int w)
{
	e[++cnt].to=v;
	e[cnt].w=w;
	e[cnt].next=head[u];
	head[u]=cnt;
}
int dis[N];
struct node
{
	int w,now;
	bool operator<(const node &a)const
	{
		return w>a.w;
	}
};
priority_queue<node>q;
int n,m,s;
bool vis[N];
void dijkstra()
{
	for(int i=1;i<=n*m;i++)dis[i]=inf;
	dis[s]=0;
	q.push({0,s});
	while(!q.empty())
	{
		node x=q.top();
		q.pop();
		int u=x.now;
		if(vis[u])continue;
		vis[u]=1;
		for(int i=head[u];i;i=e[i].next)
		{
			int v=e[i].to;
			if(dis[v]>dis[u]+e[i].w)
			{
				dis[v]=dis[u]+e[i].w;
				q.push({dis[v],v});
			}
		}
	}
}
int calc(int x,int y)
{
    return (x-1)*(m)+y;
}
string G[N];
int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
int main()
{
    #ifdef cbyyx
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin>>n>>m;
    s=1;
    for(int i=1;i<=n;i++)cin>>G[i],G[i]=" "+G[i];
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
        if(G[i][j]=='.')
        {
            for(int k=0;k<4;k++)
            {
                int x=i+dx[k],y=j+dy[k];
                if(x>=1&&x<=n&&y>=1&&y<=m&&G[x][y]!='#')
                {
                    add(calc(i,j),calc(x,y),1);
                }
            }
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int i,j,z;
        cin>>i>>j>>z;
        for(int k=0;k<4;k++)
        {
            int x=i+dx[k]*z,y=j+dy[k]*z;
            if(x>=1&&x<=n&&y>=1&&y<=m&&G[x][y]!='#')
            {
                add(calc(i,j),calc(x,y),0);
            }
        }
    }
    s=1;
    dijkstra();
    if(dis[calc(n,m)]!=inf)cout<<dis[calc(n,m)];
    else cout<<-1;
}
