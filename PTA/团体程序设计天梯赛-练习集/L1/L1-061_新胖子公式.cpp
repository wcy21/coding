#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double w, h;
	cin >> w >> h;

	double BMI = w / (h * h);

	cout << fixed << setprecision(1) << BMI << endl;
    if (BMI > 25)
        cout << "PANG" << endl;
    else
        cout << "Hai Xing" << endl;

	return 0;
}