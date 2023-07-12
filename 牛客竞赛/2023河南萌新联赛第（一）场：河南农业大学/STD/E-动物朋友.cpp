#include <iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
typedef long long ll;
 
const int N = 1000005;

int n,m; int v[N];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	int now=0,cnt=0;
	for(int i=1,j=0;i<=n&&j<=n;){ 
		 if(now<m&&j<n){
		 	now+=v[++j];
		 	continue;
		 }
		 if(now>m&&i<n){
		 	now-=v[i++];
		 	continue;
		 }
		 if(now==m)cnt++;
		 now+=v[++j];
	}
	cout<<cnt<<endl;
    return 0;
}
 
