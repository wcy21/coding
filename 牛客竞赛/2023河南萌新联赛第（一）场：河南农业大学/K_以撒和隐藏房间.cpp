#include <iostream>

using namespace std;

char g[1007][1007];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> g[i];

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (g[i][j] != '0')
                continue;

            int c[3] = {0};
            for (int k = 0; k < 4; ++k) {
                int x = i + dx[k], y = j + dy[k];
                c[g[x][y] - '0']++;
            }
            if (c[1] == 3 && c[2] == 0)
                ans += 1;
        }
    }

    if (ans != 0)
        cout << "YES" << endl << ans << endl;
    else
        cout << "NO" << endl;

    return 0;
}