#include <iostream>
#include <iomanip>
#include <set>

using namespace std;

int diff(int year) {
	set<int> s;
	int cnt = 4;
	while (cnt--) {
		s.insert(year % 10);
		year /= 10;
	}
	return s.size();
}

int main() {
	int y, x = 0, n;
	cin >> y >> n;

	while (diff(y + x) != n)
		++x;
	cout << x << ' ' << setw(4) << setfill('0') << y + x << endl;

	return 0;
}