#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
using ll = long long;
typedef pair<pair<int,int>,int> PIII;
#define lu (u<<1)
#define ru (u<<1|1)
const int N = 1e6+10;

int n,m;
int a[N];
int tr[N];
void add(int k,int x){
	for(int i=k;i<N;i+=i&-i){
		tr[i]+=x;
	}
}
int sum(int k){
	int res=0;
	for(int i=k;i;i-=i&-i){
		res+=tr[i];
	}
	return res;
}
int main(){
	ios :: sync_with_stdio (false);cin .tie (0);cout .tie (0);
	// #ifdef newbie
	// 	freopen("input.in","r",stdin);
	// 	freopen("output.out","w",stdout);
	// #endif
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		add(a[i],1);
	}
	for(int i=1;i<=m;i++){
		int p,x;cin>>p>>x;
		add(a[p],-1);
		a[p]=x;
		add(a[p],1);
		int l=1,r=1000000+10;
		while(l<r){
			int mid=l+r+1>>1;
			if(sum(mid-1)<=n/2)l=mid;
			else r=mid-1;
		}
		cout<<l<<endl;
	}
	return 0;
}
