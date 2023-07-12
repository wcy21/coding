#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6 + 10;

int a[maxn], b[maxn], p[maxn];

int find(int x) {
    if (x != p[x]) p[x] = find(p[x]);
    return p[x];
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i ++ ) {
        p[i] = i;
        b[i] = i;
    }
    for (int i = 1; i <= n; i ++ ) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i ++ ) {
        if (a[i] != b[i]) {
            int aa = find(a[i]);
            int bb = find(b[i]);
            if (aa != bb) {
                p[aa] = bb;
            }
        }
    }
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; i ++ ) {
        mp[find(i)] ++;
    }
    int ans = n - mp.size();
    cout << ans << '\n';
}