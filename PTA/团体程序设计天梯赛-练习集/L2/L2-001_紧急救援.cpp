#include <algorithm>
#include <iostream>

using namespace std;

const int maxn = 5007;
const int inf = 0x3f3f3f3f;
int n, m, s, d;
int dis[maxn], w[maxn], e[maxn][maxn], num[maxn], res[maxn], pre[maxn];
bool vis[maxn];

void printPath(int v) {
    if (v == s) {
        cout << v;
        return;
    }
    printPath(pre[v]);
    cout << " " << v;
}

int main() {
    cin >> n >> m >> s >> d;
    for (int i = 0; i < n; i++)
        cin >> w[i];
    fill(e[0], e[0] + 510 * 510, inf);
    fill(dis, dis + 510, inf);
    int a, b, c;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        e[a][b] = e[b][a] = c;
    }
    dis[s] = 0;
    res[s] = w[s];
    num[s] = 1;
    for (int i = 0; i < n; i++) {
        int v1 = -1, minDis = inf;
        for (int j = 0; j < n; j++) {
            if (!vis[j] && dis[j] < minDis) {
                v1 = j;
                minDis = dis[j];
            }
        }
        if (v1 == -1)
            break;

        vis[v1] = true;
        for (int v2 = 0; v2 < n; v2++) {
            if (!vis[v2] && e[v1][v2] != inf) {
                if (dis[v1] + e[v1][v2] < dis[v2]) {
                    dis[v2] = dis[v1] + e[v1][v2];
                    num[v2] = num[v1];
                    res[v2] = res[v1] + w[v2];
                    pre[v2] = v1;
                }
                else if (dis[v1] + e[v1][v2] == dis[v2]) {
                    num[v2] = num[v2] + num[v1];
                    if (res[v1] + w[v2] > res[v2]) {
                        res[v2] = res[v1] + w[v2];
                        pre[v2] = v1;
                    }
                }
            }
        }
    }

    cout << num[d] << ' ' << res[d] << endl;
    printPath(d);

    return 0;
}