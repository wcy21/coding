#include <algorithm>
#include <iostream>

using namespace std;

struct node {
    int val, no;
    bool vis;

    bool operator<(const node &x) { return this->val < x.val; }
} a[100007];

int main() {
    int n, dif = 0, loop = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].val;
        a[i].no = i;
        a[i].vis = false;
    }

    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        int cur = i;
        if (a[cur].no != i && !a[cur].vis) {
            while (!a[cur].vis) {
                a[cur].vis = true;
                cur = a[cur].no;
                dif++;
            }
            loop++;
        }
    }
    ans = dif - loop;
    cout << ans << endl;

    return 0;
}