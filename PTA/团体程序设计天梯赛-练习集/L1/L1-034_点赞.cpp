#include <iostream>

using namespace std;

int main() {
	int n, k, fi, a[1007] = {0};
	cin >> n;
    for (int i = 0; i < n; ++i)  {
        cin >> k;
        for (int j = 0; j < k; ++j) {
            cin >> fi;
            ++a[fi];
        }
    }

	int idx, cnt = 0;
	for (int i = 1; i <= 1000; ++i) {
		if (a[i] >= cnt) {
			idx = i;
			cnt = a[i];
		}
	}
	cout << idx << ' ' << cnt << endl;

	return 0;
}