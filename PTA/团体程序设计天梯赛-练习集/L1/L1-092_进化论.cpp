#include <iostream>

using namespace std;

int main() {
	int n, a, b, c;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b >> c;
		if (c == a * b)
			cout << "Lv Yan" << endl;
		else if (c == a + b)
			cout << "Tu Dou" << endl;
		else
			cout << "zhe du shi sha ya!" << endl;
	}

    return 0;
}