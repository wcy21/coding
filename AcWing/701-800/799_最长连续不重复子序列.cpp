#include <iostream>

using namespace std;

const int N = 100007;

int n, ans = 0, a[N], s[N];

int main() {
    cin >> n;
    for (int i = 0, j = 0; i < n; ++i) {
        cin >> a[i];
        ++s[a[i]];
        while (s[a[i]] > 1) --s[a[j++]];
        ans = max(ans, i - j + 1);
    }
    
    cout << ans << endl;
    return 0;
}