#include <iostream>

using namespace std;

int main() {
	int n0, n1, n;
	cin >> n0 >> n1 >> n;

	int ng, nb, dif = 100007;
	for (int i = 1; i < n && i < n0 && (n - i) < n1; ++i) {
		if (n0 % i == 0 && n1 % (n - i) == 0 && abs(n0 / i - n1 / (n - i)) < dif) {
			ng = i;
			nb = n - i;
			dif = abs(n0 / ng - n1 / nb);
		}
	}
	if (dif == 100007)
		cout << "No Solution" << endl;
	else
		cout << ng << " " << nb << endl;

	return 0;
}