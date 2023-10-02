#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
	if (n <= 1)
		return false;
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	for (int i = 3; i <= sqrt(n); i += 2)
		if (n % i == 0)
			return false;
	return true;
}

int main() {
	int N, num;
	cin >> N;
	while (N--) {
		cin >> num;
		if (is_prime(num))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	return 0;
}