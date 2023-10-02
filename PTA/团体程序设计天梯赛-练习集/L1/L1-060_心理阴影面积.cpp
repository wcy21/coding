#include <iostream>

using namespace std;

int main() {
	int x, y, area;
	cin >> x >> y;
	area = 5000 - x * y / 2 - (100 - x) * (100 - y) / 2 - (100 - x) * y;
    
	cout << area << endl;

	return 0;
}