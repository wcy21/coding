#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

struct node {
    int x, y;
    int step;
    bool key;

    node(int _x, int _y, int _step, bool _key)
        : x(_x), y(_y), step(_step), key(_key) {}
};

char g[507][507];
bool vis[507][507][2];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int H, W, sx, sy, ans = -1;

void bfs() {
    memset(vis, false, sizeof(vis));

    queue<node> q;
    q.push({sx, sy, 0, false});
    while (!q.empty()) {
        node cur = q.front();
        q.pop();

        if (g[cur.x][cur.y] == 'E') {
            ans = cur.step;
            return;
        }

        for (int i = 0; i < 4; ++i) {
            node nxt(cur.x + dx[i], cur.y + dy[i], cur.step + 1, cur.key);
            if (!vis[nxt.x][nxt.y][nxt.key] && g[nxt.x][nxt.y] != 'W') {
                if (g[nxt.x][nxt.y] == 'K')
                    nxt.key = true;

                if (nxt.key == false && g[nxt.x][nxt.y] != 'D' ||
                    nxt.key == true) {
                    vis[nxt.x][nxt.y][nxt.key] = true;
                    q.push(nxt);
                }
            }
        }
    }
}

int main() {
    cin >> H >> W;
    for (int i = 1; i <= H; ++i) {
        cin.get();
        for (int j = 1; j <= W; ++j) {
            g[i][j] = cin.get();
            if (g[i][j] == 'S')
                sx = i, sy = j;
        }
    }
    bfs();
    cout << ans << endl;

    return 0;
}