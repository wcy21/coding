#include <iostream>

using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    
    int l[100007] = {0}, r[100007] = {0};
    for (int i = 0; i < q; i++) {
        int t, c;
		cin >> t >> c;
        if (t == 0 && !l[c]) {
            l[c] = 1;
			--n;
        }
        if (t == 1 && !r[c]) {
            r[c] = 1;
			--m;
        }
    }

    cout << n * m << endl;

    return 0;
}