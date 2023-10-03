#include <iostream>

using namespace std;

int main() {
    int n, val, l = 1000007, r = -1, nl = 0, nr = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        if (val == l)
            ++nl;
        if (val == r)
            ++nr;
        if (val < l) {
            l = val;
            nl = 1;
        }
        if (val > r) {
            r = val;
            nr = 1;
        }
    }
    cout << l << ' ' << nl << endl;
    cout << r << ' ' << nr << endl;
    
    return 0;
}