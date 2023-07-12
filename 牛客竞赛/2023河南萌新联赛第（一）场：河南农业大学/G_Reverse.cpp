#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n, k = 0, a[1000007];
    string s;
    cin >> n >> s;

    int l = 0, r = 0;
    while (l < n) {
        while (l < n && s[l] == '0')
            l++;
        r = l;
        while (r < n && s[r] == '1')
            r++;
        a[k++] = r - l;
        l = r + 1;
    }

    sort(a, a + k, greater<>());
    cout << a[0] + a[1] << endl;

    return 0;
}