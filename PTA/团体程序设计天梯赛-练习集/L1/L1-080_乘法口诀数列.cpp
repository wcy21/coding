#include <iostream>

using namespace std;

int main() {
    int n, p, nxt = 2, a[1007];
	
	cin >> a[1] >> a[2] >> n;
	for (int i = 1; nxt <= n; ++i) {
		p = a[i] * a[i + 1];
		if (p >= 10) {
			a[++nxt] = p / 10;
		}
		a[++nxt] = p % 10;
	}

	for (int i = 1; i <= n; ++i) {
		if (i != 1)
			cout << ' ';
		cout << a[i];
	}
	
    return 0;
}