#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

struct item {
	double inventory, total, price;

	bool operator>(const item& x) const {
		return this->price > x.price;
	}
};

int main() {
	int n, d;
	cin >> n >> d;

	vector<item> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i].inventory;
	for (int i = 0; i < n; i++) {
		cin >> vec[i].total;
		vec[i].price = vec[i].total / vec[i].inventory;
	}
	sort(vec.begin(), vec.end(),greater<>());

	double sum = 0;
	for (int i = 0; i < n; i++) {
		if (d < vec[i].inventory) {
			sum += vec[i].price * d;
			break;
		}
		else {
			sum += vec[i].total;
			d -= vec[i].inventory;
			vec[i].inventory = 0;
		}
	}
	cout << fixed << setprecision(2) << sum << endl;

	return 0;
}