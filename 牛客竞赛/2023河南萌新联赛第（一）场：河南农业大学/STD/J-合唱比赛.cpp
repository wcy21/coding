#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    double ans1=100,ans2=0;
    vector<int>vc(n+1);
    for(int i=1;i<=n;i++)cin>>vc[i];
    for(int i=1;i<=100;i++)
    {
        ll sum=0;
        vc[0]=i;
        for(int j=0;j<=n;j++)sum+=vc[j];
        sum-=(*min_element(vc.begin(),vc.end()));
        sum-=(*max_element(vc.begin(),vc.end()));
        ans1=min(ans1,sum*1.0/(n-1));
        ans2=max(ans2,sum*1.0/(n-1));
    }
    printf("%.6lf %.6lf\n",ans1,ans2);
}