#include <iostream>

using namespace std;

int main() {
    int n, m, l = 0, happy = 0, ans = 0;
    int a[1000007];

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        happy += a[i];

        while (l <= i && happy > m) {
            happy -= a[l];
            l += 1;
        }
        if (happy == m)
            ans += 1;
    }
    cout << ans << endl;

    return 0;
}