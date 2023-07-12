#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define IOS ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const int N=1e5+10;
struct node
{
    ll val[2][22];
}tr[N<<2];
int a[N],b[N];
#define ls (now<<1)
#define rs (now<<1|1)
void pushup(int now)
{
    for(int i=0;i<=21;i++)
    for(int j=0;j<=1;j++)
    {
        tr[now].val[j][i]=tr[rs].val[tr[ls].val[j][i]][i];
    }
}
void build(int now,int l,int r)
{
    if(l==r)
    {
        for(int i=0;i<=21;i++)
        for(int j=0;j<=1;j++)
        {
            if(b[l]==1)
            {
                tr[now].val[j][i]=j^(a[l]>>i&1);
            }
            else if(b[l]==2)
            {
                tr[now].val[j][i]=j|(a[l]>>i&1);
            }
            else
            {
                tr[now].val[j][i]=j&(a[l]>>i&1);
            }
        }
        return;
    }
    int mid=l+r>>1;
    build(ls,l,mid);
    build(rs,mid+1,r);
    pushup(now);
}
void update(int now,int l,int r,int pos,int val)
{
    if(pos<=l&&r<=pos)
    {
        a[l]=val;
        for(int i=0;i<=21;i++)
        for(int j=0;j<=1;j++)
        {
            if(b[l]==1)
            {
                tr[now].val[j][i]=j^(a[l]>>i&1);
            }
            else if(b[l]==2)
            {
                tr[now].val[j][i]=j|(a[l]>>i&1);
            }
            else
            {
                tr[now].val[j][i]=j&(a[l]>>i&1);
            }
        }
        return;
    }
    int mid=l+r>>1;
    if(pos<=mid)update(ls,l,mid,pos,val);
    if(mid<pos)update(rs,mid+1,r,pos,val);
    pushup(now);
}
node query(int now,int l,int r,int L,int R)
{
    if(L<=l&&r<=R)return tr[now];
    int mid=l+r>>1;
    if(mid>=R)return query(ls,l,mid,L,R);
    else if(mid<L)return query(rs,mid+1,r,L,R);
    else
    {
        node ans1=query(ls,l,mid,L,R);
        node ans2=query(rs,mid+1,r,L,R);
        node ans;
        for(int i=0;i<=21;i++)
        for(int j=0;j<=1;j++)
        {
            ans.val[j][i]=ans2.val[ans1.val[j][i]][i];
        }
        return ans;
    }
}
ll p[22];
int main()
{
    IOS;
    p[0]=1;
    for(int i=1;i<=21;i++)p[i]=p[i-1]*2;
    int n;
    cin>>n;
    string s;
    cin>>s;
    s=" "+s;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(s[i]=='^')b[i]=1;
        else if(s[i]=='|')b[i]=2;
        else b[i]=3;
    }
    build(1,1,n);
    int q;
    cin>>q;
    while(q--)
    {
        int op;
        cin>>op;
        if(op==1)
        {
            int pos,val;
            cin>>pos>>val;
            update(1,1,n,pos,val);
        }
        else
        {
            int x,l,r;
            cin>>x>>l>>r;
            node tmp=query(1,1,n,l,r);
            ll ans=0;
            for(int i=0;i<=21;i++)
            {
                ans+=tmp.val[x>>i&1][i]*p[i];
            }
            cout<<ans<<endl;
        }
    }
}