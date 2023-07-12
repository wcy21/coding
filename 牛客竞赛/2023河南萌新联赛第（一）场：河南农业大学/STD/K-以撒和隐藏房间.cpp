#include <iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
typedef long long ll;
const int N = 1005;
int n,m; 
char mp[N][N];
bool check(int x,int y){
	return (x<=n&&x>=1&&y<=m&&y>=1)?1:0;
}
int mv[2][4]={{1,-1,0,0},{0,0,1,-1}};
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cin>>mp[i][j];
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(mp[i][j]!='0')continue;
			int num=0,f=0;
			for(int k=0;k<4;k++){
				int x=mv[0][k]+i,y=mv[1][k]+j;
				if(!check(x,y))continue;
				if(mp[x][y]=='1'){
					num++;
				}
				if(mp[x][y]=='2'){
					f=1;
				}
				
			}
//			cout<<num<<endl;
			if(num==3&&!f)ans++;
		}
	}
	if(ans==0)cout<<"NO";
	else cout<<"YES\n"<<ans;
    return 0;
}
