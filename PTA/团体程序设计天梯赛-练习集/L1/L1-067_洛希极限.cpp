#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double k1, k2, k3, ret;
    int t;

    cin >> k1 >> t >> k3;
    if (t == 0)
        ret = 2.455 * k1;
    if (t == 1)
        ret = 1.26 * k1;

    if (ret < k3)
        cout << fixed << setprecision(2) << ret << " ^_^" << endl;
    else
        cout << fixed << setprecision(2) << ret << " T_T" << endl;

    return 0;
}