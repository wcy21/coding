#include <bits/stdc++.h>
//#define map unordered_map
#define set unordered_set
#define all(a) a.begin(), a.end()
#define lowbit(x) ((x) & (-x))
#define ll long long
using namespace std;

const int N = 2e3 + 10;
const int INF = 0x3f3f3f3f;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
typedef pair<double, double> PDD;
typedef tuple<int, int, int> TUP;
const int mod = 1e9 + 7;


void solve(){
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	int m = count(s.begin(), s.end(), '0');
	if(m == 0 || m == n){
		if(n == k) cout<<"Alice"<<endl;
		else cout<<"Bob"<<endl;
		return ;
	}
	if(s == "0101" || s == "1010") {
		cout<<"Bob"<<endl;
		return ;
	}
	if(k == 1){
		if(s == "1001" || s == "0110"){
			cout<<"Bob"<<endl;
			return ;
		} 
	}
	int l1 = 0;
	while(s[l1 + 1] == s[l1]) l1 ++;
	int l2 = l1 + 1;
	while(l2 + 1 < n && s[l2 + 1] == s[l2]) l2 ++;
	if(l2 == n - 1){
		int p = l1 + 1, q = l2 - l1;
		if(p != q){
			if(min(p, q) <= k) cout<<"Alice"<<endl;
			else cout<<":("<<endl;
		}
		else {
			if(k >= p) cout<<"Alice"<<endl;
			else if(k == 1 && p == 2) cout<<"Bob"<<endl;
			else cout<<":("<<endl;
 		}
	} 
	 else {
	 	int l3 = l2 + 1;
	 	while(l3 + 1 < n && s[l3 + 1] == s[l3]) l3 ++;
		if(l3 != n - 1) {
			cout<<":("<<endl;
		}
		else {
			int p = l2 - l1;
			if(p <= k) cout<<"Alice"<<endl;
			else cout<<":("<<endl;
		}
	 }
}

int main() {
	cin.tie(0) -> sync_with_stdio(false);
#ifdef yuechu
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
#endif
	//int t; cin>>t; while(t --)
	solve();
}


