#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	int n, num, idx = 0, dif = 107, sum = 0;
	string name, s[107];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> name >> num;
        s[num] = name;
        sum += num;
    }

    double avg = 0.5 * sum / n;
    for (int i = 1; i <= 100; ++i) {
        if (s[i] != "" && abs(avg - i) < dif) {
            idx = i;
            dif = abs(avg - i);
        }
    }
    cout << round(avg) << ' ' << s[idx] << endl;

	return 0;
}