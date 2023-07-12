#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n, score, sum = 0, mins = 100, maxs = 1;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> score;
        if (score < mins)
            mins = score;
        if (score > maxs)
            maxs = score;

        sum += score;
    }
    sum -= mins + maxs;

    double l = double(sum + mins) / (n - 1);
    double r = double(sum + maxs) / (n - 1);
    cout << fixed << setprecision(6) << l << ' ' << r << endl;

    return 0;
}