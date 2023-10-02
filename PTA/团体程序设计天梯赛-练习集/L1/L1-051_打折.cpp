#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double price, k, ans;
	cin >> price >> k;
	ans = price / 10 * k;
	cout << fixed << setprecision(2) << ans << endl;

	return 0;
}