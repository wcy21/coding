#include <iostream>

using namespace std;

int main() {
	int n, a[6];
	for (int i = 0; i < 6; ++i)
		cin >> a[i];
	cin >> n;
	
	for (int i = 0; i < 6; ++i) {
		if (i != 0)
			cout << ' ';

		if (a[i] + n > 6)
			cout << 6 - n;
		else 
			cout << 7 - n;
	}
	
    return 0;
}