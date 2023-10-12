#include <iostream>
#include <iomanip>

using namespace std;

struct node {
    int key;
    int next;
} l[100010];

int val[10010] = { 0 };

int main() {
    int head, N, delhead = -1;
    cin >> head >> N;

    for (int i = 0; i < N; ++i) {
        int a, v, n;
        cin >> a >> v >> n;
        l[a].key = v;
        l[a].next = n;
    }

    int p = head, ph = head, pd = -1;

    ++val[abs(l[p].key)];
    if (l[p].next != -1)
        p = l[p].next;

    while (p != -1) {
        if (val[abs(l[p].key)]) {
            if (delhead == -1)
                delhead = p;
            else
                l[pd].next = p;
            pd = p;
        }
        else {
            ++val[abs(l[p].key)];
            l[ph].next = p;
            ph = p;
        }
        p = l[p].next;
    }

    l[ph].next = -1;
    if (pd != -1)
        l[pd].next = -1;

    int ans = head;
    while (ans != -1) {
        if (l[ans].next == -1)
            cout << setfill('0') << setw(5) << ans << " " << l[ans].key
            << " -1" << endl;
        else
            cout << setfill('0') << setw(5) << ans << " " << l[ans].key
            << " " << setw(5) << l[ans].next << endl;
        ans = l[ans].next;
    }
    ans = delhead;
    while (ans != -1 && N != 1) {
        if (l[ans].next == -1)
            cout << setfill('0') << setw(5) << ans << " " << l[ans].key
            << " -1" << endl;
        else
            cout << setfill('0') << setw(5) << ans << " " << l[ans].key
            << " " << setw(5) << l[ans].next << endl;
        ans = l[ans].next;
    }

    return 0;
}
