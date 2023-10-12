#include <iostream>

using namespace std;

int main() {
	int n, k, a[107];
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	cin >> k;
	while (k--) {
		int x, cnt = 0;
		for (int i = 0; i < n; ++i) {
			cin >> x;
			if (a[i] == x)
				++cnt;
			else if (x != 0)
				cnt = -100;
		}
		if (cnt > 0)
			cout << "Da Jiang!!!" << endl;
		else
			cout << "Ai Ya" << endl;
	}

    return 0;
}