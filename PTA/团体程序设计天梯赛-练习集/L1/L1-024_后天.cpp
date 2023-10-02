#include <iostream>

using namespace std;

int main() {
	int D, ans;
	cin >> D;
	ans = (D + 1) % 7 + 1;
	cout << ans << endl;

	return 0;
}