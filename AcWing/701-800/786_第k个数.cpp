#include <iostream>

using namespace std;

int n, k, q[100007];

int quick_sort(int l, int r, int k) {
    if (l == r)  return q[l];

    int x = q[l], i = l - 1, j = r + 1;
    while (i < j) {
        while (q[++i] < x);
        while (q[--j] > x);
        if (i < j)  swap(q[i], q[j]);
    }

    int s = j - l + 1;
    if (k <= s)  return quick_sort(l, j, k);
    return quick_sort(j + 1, r, k - s);
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
        cin >> q[i];
    
    cout << quick_sort(0, n - 1, k) << endl;

    return 0;
}