#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
ll qpow(ll a,ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}
const int N=1e6+10;
int main()
{
    ll k;
    cin>>k;
    k%=mod;
    ll ans=k%mod*(k+1)%mod*(2*k+1)%mod*qpow(6,mod-2)%mod;
    ans=(ans+k%mod*(k+1)%mod*qpow(2,mod-2)%mod)%mod;
    ans*=qpow(2,mod-2);
    cout<<ans%mod<<endl;
}