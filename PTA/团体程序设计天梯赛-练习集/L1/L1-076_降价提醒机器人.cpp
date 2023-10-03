#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    double p;
    cin >> n >> m;
    while (n--) {
        cin >> p;
        if (p < m)
            cout << fixed << "On Sale! " << setprecision(1) << p << endl;
    }
    
    return 0;
}