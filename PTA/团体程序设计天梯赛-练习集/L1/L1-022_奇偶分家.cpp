#include <iostream>

using namespace std;

int main() {
	int N, num, odd = 0, even = 0;
	cin >> N;
	while (N--) {
		cin >> num;
		if (num & 1)
			odd++;
		else
			even++;
	}
	cout << odd << ' ' << even << endl;

	return 0;
}