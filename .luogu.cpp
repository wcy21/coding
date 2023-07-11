/*
洛谷-P1220_关路灯
https://www.luogu.com.cn/problem/P1220
*/
#include <cstring>
#include <iostream>

using namespace std;

const int N = 53;

int n, c;
int a[N], p[N];
bool vis[N];

int minCost = 100007;

void dfs(int x, int t, int w) {
    if (w >= minCost)
        return;

    bool flag = true;
    for (int i = 0; i < n; ++i) {
        if (!vis[a[i]]) {
            vis[a[i]] = true;
            dfs(a[i], t + abs(a[i] - t), w + p[i]);
            flag = false;
        }
    }
    if (flag)
        minCost = w;
}

int main() {
    cin >> n >> c;
    for (int i = 0; i < n; ++i)
        cin >> a[i] >> p[i];
    memset(vis, false, sizeof(vis));
    cout << minCost << endl;

    return 0;
}