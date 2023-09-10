#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int N, n = 0;
    char ch;
    cin >> N >> ch;

    while (2 * (n + 1) * (n + 1) - 1 <= N)
        ++n;

    for (int i = -n + 1; i < n; ++i) {
        for (int j = 0; j < n - abs(i) - 1; ++j)
            cout << ' ';
        for (int j = 0; j < 2 * abs(i) + 1; ++j)
            cout << ch;
        cout << endl;
    }
    cout << N - 2 * n * n + 1 << endl;

    return 0;
}