#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

struct node {
    int x, y, z;
    int step;

    node(int _x, int _y, int _z, int _step)
        : x(_x), y(_y), z(_z), step(_step) {}
};

char g[107][107][107];
bool vis[107][107][107];

int dx[6] = {0, 1, 0, -1, 0, 0};
int dy[6] = {1, 0, -1, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};

int n, ans = -1;

void bfs() {
    memset(vis, false, sizeof(vis));

    queue<node> q;
    q.push({1, 1, 1, 1});
    while (!q.empty()) {
        node cur = q.front();
        q.pop();

        if (cur.x == n && cur.y == n && cur.z == n) {
            ans = cur.step;
            return;
        }

        for (int i = 0; i < 6; ++i) {
            node nxt(cur.x + dx[i], cur.y + dy[i], cur.z + dz[i], cur.step + 1);
            if (nxt.x >= 1 && nxt.x <= n && nxt.y >= 1 && nxt.y <= n &&
                nxt.z >= 1 && nxt.z <= n && !vis[nxt.x][nxt.y][nxt.z]) {
                if (g[nxt.x][nxt.y][nxt.z] == '*')
                    continue;

                vis[nxt.x][nxt.y][nxt.z] = true;
                q.push(nxt);
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> g[i][j] + 1;

    bfs();
    cout << ans << endl;

    return 0;
}