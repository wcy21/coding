#include <iostream>

using namespace std;

int price[19] = {10000, 36, 720, 360, 80, 252, 108, 72, 54, 180, 72, 180, 119, 36, 306, 1080, 144, 1800, 3600};

int main() {
	int k = 45, x, y, a[4][4];
	for (int i = 1; i <= 3; ++i) {
		for (int j = 1; j <= 3; ++j)
		{
			cin >> a[i][j];
			if (a[i][j] == 0)
				x = i, y = j;
			k -= a[i][j];
		}
	}
	a[x][y] = k;
				
	for (int i = 0; i < 3; ++i) {
		cin >> x >> y;
		cout << a[x][y] << endl;
	}

	int t, sum = 0;
	cin >> t;
	if (t >= 1 && t <= 3)
		sum = a[t][1] + a[t][2] + a[t][3];
	else if (t >= 4 && t <= 6)
		sum = a[1][t - 3] + a[2][t - 3] + a[3][t - 3];
	else if (t == 7)
		sum = a[1][1] + a[2][2] + a[3][3];
	else if (t == 8)
		sum = a[1][3] + a[2][2] + a[3][1];

	cout << price[sum - 6] << endl;

	return 0;
}