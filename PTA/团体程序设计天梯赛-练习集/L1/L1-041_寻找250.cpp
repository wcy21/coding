#include <iostream>

using namespace std;

int main() {
	int n, cnt = 0;
	while (cin >> n) {
        ++cnt;
		if (n == 250)
            break;
    }
	cout << cnt << endl;
	
	return 0;
}