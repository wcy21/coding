#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--) {
		double h, ans = 0;
		char sex;

		cin >> sex >> h;
		if (sex == 'F')
			ans = h * 1.09;
		else if (sex == 'M')
			ans = h / 1.09;

		cout << fixed << setprecision(2) << ans << endl;
	}
	
	return 0;
}
