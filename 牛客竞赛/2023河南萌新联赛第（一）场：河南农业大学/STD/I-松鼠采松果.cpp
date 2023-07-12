#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int maxn = 2e5 + 10;
vector<pii> e[maxn];
int n, m, q;
int w[maxn];
int dep[maxn], fa[maxn][20];
ll add[maxn], sum[maxn];

void dfs(int u, int la) {
    if (la == -1) {
        dep[u] = 1;
        fa[u][0] = 0;
    } else {
        dep[u] = dep[la] + 1;
        fa[u][0] = la;
    }
    for (int i = 1; i <= 19; i ++ ) {
        fa[u][i] = fa[fa[u][i - 1]][i - 1];
    }
    for (auto x : e[u]) {
        if (x.first != la) dfs(x.first, u);
    }
}

int query(int x, int y) {
    if (dep[x] < dep[y]) swap(x, y);
    for (int i = 19; i >= 0; i -- ) {
        if (dep[fa[x][i]] >= dep[y]) {
            x = fa[x][i];
        }
    }
    if (x == y) return y;
    for (int i = 19; i >= 0; i -- ) {
        if (fa[x][i] != fa[y][i]) {
            x = fa[x][i];
            y = fa[y][i];
        }
    }
    return fa[x][0];
}

void dfs1(int u, int la) {
    for (auto x : e[u]) {
        int j = x.first, w = x.second;
        if (j != la) {
            sum[j] += sum[u] + w;
            dfs1(j, u);
        } 
    }
}

ll dfs2(int u, int la) {
    ll s = add[u];
    for (auto &x : e[u]) {
        int j = x.first, w = x.second;
        if (j != la) {
            ll tp = dfs2(j, u);
            x.second += tp;
            s += tp;
        }
    }
    return s;
}

void solve() {
    scanf("%d %d %d", &n, &m, &q);
    for (int i = 1; i < n; i ++ ) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        e[x].push_back({y, z});
        e[y].push_back({x, z});
    }
    dfs(1, -1);
    for (int i = 1; i <= m; i ++ ) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        int fa = query(x, y);
        add[fa] -= z * 2;
        add[x] += z;
        add[y] += z;
    } 
    dfs2(1, -1);
    dfs1(1, -1);
    for (int i = 1; i <= q; i ++ ) {
        int x, y;
        scanf("%d %d", &x, &y);
        ll ans = sum[x] + sum[y] - 2 * sum[query(x, y)];
        printf("%lld\n", ans);
    } 
}

int main()
{
    solve();
    return 0;
}
