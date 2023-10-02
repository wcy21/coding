#include <iostream>

using namespace std;

int cmp(int h, int w) {
	double std = (h - 100) * 0.9 * 2;
	
	if (abs(w - std) < std * 0.1)
		return 0;
	else
		return w > std ? 1 : -1;
}

int main() {
	int N, H, W;
	cin >> N;
	while (N--) {
		cin >> H >> W;
		if (cmp(H, W) == -1)
			cout << "You are tai shou le!" << endl;
		else if (cmp(H, W) == 0)
			cout << "You are wan mei!" << endl;
		else if (cmp(H, W) == 1)
			cout << "You are tai pang le!" << endl;
	}

	return 0;
}