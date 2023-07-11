#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ai, s = 0;
        cin >> n;
        while (n--) {
            cin >> ai;
            if (ai & 1)
                s -= ai;
            else
                s += ai;
        }
        if (s > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}