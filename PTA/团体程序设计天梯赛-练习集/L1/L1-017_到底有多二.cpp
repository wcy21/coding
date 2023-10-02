#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	string s;
	cin >> s;

	int cnt = 0, len = s.size();
    double ans, k1 = 1, k2 = 1;
	if (s.front() == '-') {
		k1 = 1.5;
        --len;
    }
	if (s.back() % 2 == 0)
		k2 = 2.0;

	for (auto x: s)
		if (x == '2')
			++cnt;

	ans = k1 * k2 * cnt * 100.0 / len;
	cout << fixed << setprecision(2) << ans << '%' << endl;

	return 0;
}