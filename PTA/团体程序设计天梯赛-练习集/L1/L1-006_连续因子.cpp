#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n, m, st, len = 0;
    cin >> n;
    m = sqrt(n) + 1;
    for (int i = 2; i <= m; ++i) {
        int j = i, tmp = 1;
        for (; j <= m; ++j) {
            tmp *= j;
            if (n % tmp != 0)
                break;
        }

        if (j - i > len) {
            len = j - i;
            st = i;
        }
    }

    if (len == 0)
        cout << 1 << endl << n;
    else {
        cout << len << endl;
        for (int i = 0; i < len; ++i) {
            if (i != 0)
                cout << '*';
            cout << st + i;
        }
    }

    return 0;
}