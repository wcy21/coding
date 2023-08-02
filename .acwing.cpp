#include <iostream>
#include <vector>

using namespace std;

const int N = 5007;

int g[N][N];

int main()
{
    int n, r;
    cin >> n >> r;
    r = min(r, N - 1);

    for (int i = 0; i < n; ++i) {
        int x, y, w;
        cin >> x >> y >> w;
        ++x, ++y;

        n = max(n, x), m = max(m, y);
        g[x][y] += w;
    }

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            g[i][j] += g[i - 1][j] + g[i][j - 1] - g[i - 1][j - 1];

    int ans = 0;
    for (int i = r; i <= n; ++i)
        for (int j = r; j <= m; ++j)
            ans = max(ans, g[i][j] - g[i - r][j] - g[i][j - r] + g[i - r][j - r]);

    cout << ans << endl;

    system("pause");
    return 0;
}