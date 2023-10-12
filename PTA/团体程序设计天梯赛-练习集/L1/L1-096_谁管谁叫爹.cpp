#include <iostream>

using namespace std;

int get_sum(int n) {
	if (n < 10)
		return n;
	return n % 10 + get_sum(n / 10);
}

int main() {
	int n, na, nb, sa, sb;

	cin >> n;
	while (n--) {
		cin >> na >> nb;
		sa = get_sum(na);
		sb = get_sum(nb);

		if (na % sb == 0 && nb % sa != 0)
			cout << "A" << endl;
		else if (na % sb != 0 && nb % sa == 0)
			cout << "B" << endl;
		else
			cout << (na > nb ? "A" : "B") << endl;
	}

	return 0;
}