#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double h, m;
	cin >> h;
	m = (h - 100) * 0.9 * 2;
	cout << fixed << setprecision(1) << m << endl;

	return 0;
}