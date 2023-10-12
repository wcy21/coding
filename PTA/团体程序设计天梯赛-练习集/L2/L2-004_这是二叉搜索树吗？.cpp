#include <iostream>
#include <vector>

using namespace std;

vector<int> pre, post;
bool mirror;

void get_post(int l, int r) {
    if (l > r) return;

    int i = l + 1, j = r;
    if (!mirror) {
        while (i <= r && pre[l] > pre[i])  ++i;
        while (j > l && pre[l] <= pre[j])  --j;
    }
    else {
        while (i <= r && pre[l] <= pre[i])  ++i;
        while (j > l && pre[l] > pre[j])  --j;
    }
    if (i - j != 1) 
        return;

    get_post(l + 1, j);
    get_post(i, r);
    post.push_back(pre[l]);
}

int main() {
    int n;
    cin >> n;
    pre.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> pre[i];

    get_post(0, n - 1);
    if (post.size() != n) {
        mirror = true;
        post.clear();
        get_post(0, n - 1);
    }

    if (post.size() == n) {
        cout << "YES" << endl << post[0];
        for (int i = 1; i < n; ++i)
            cout << " " << post[i];
    }
    else
        cout << "NO";

    return 0;
}