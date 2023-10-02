#include <iostream>

using namespace std;

int main() {
	int n, sex, h, w, stdh, stdw;

	cin >> n;
	while (n--) {
		cin >> sex >> h >> w;
		if (sex == 1) {
			stdh = 130;
			stdw = 27;
		}
		else {
			stdh = 129;
			stdw = 25;
		}

		if (h < stdh)
			cout << "duo chi yu! ";
		else if (h == stdh)
			cout << "wan mei! ";
		else
			cout << "ni li hai! ";

		if (w < stdw)
			cout << "duo chi rou!\n";
		else if (w == stdw)
			cout << "wan mei!\n";
		else
			cout << "shao chi rou!\n";
	}

	return 0;
}