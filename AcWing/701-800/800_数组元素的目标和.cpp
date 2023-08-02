#include <iostream>

using namespace std;

const int N = 100007;

int n, m, x, a[N], b[N];

int main() {
    cin >> n >> m >> x;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < m; ++i) 
        cin >> b[i];

    for (int i = 0, j = m - 1; i < m; ++i) {
        while (a[i] + b[j] > x) --j;
        if (a[i] + b[j] == x) {
            cout << i << ' ' << j << endl;
            break;
        } 
    }

    return 0;
}