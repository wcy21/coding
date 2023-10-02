#include <iostream>

using namespace std;

int n, a[157], ans = 0;
char ch;

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> ch;
            if (ch == 'W')
                ++a[j];
            else
                a[j] = 0;
        }

        for (int j = 0; j < n; ++j) {
            int tmp = a[j];
            for (int k = j; k < n; ++k) {
                if (!a[k])
                    break;
                tmp = min(tmp, a[k]);
                ans += tmp;
            }
        }
    }

    cout << ans << endl;

    return 0;
}