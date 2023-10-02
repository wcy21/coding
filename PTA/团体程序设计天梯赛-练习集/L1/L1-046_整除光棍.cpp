#include <iostream>

using namespace std;

int main() {
    int n, ret = 1, cnt = 1;
    cin >> n;
    while (ret < n) {
        ret = 10 * ret + 1;
        ++cnt;
    }
    while (true) {
        cout << ret / n;
        if (ret % n == 0)
            break;
            
        ret = 10 * (ret % n) + 1;
        ++cnt;
    }
    cout << ' ' << cnt;

    return 0;
}