#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, y, m;
    cin >> n;
    y = n / 100;
    m = n % 100;

    if (y < 100) {
        if (y < 22)
            y += 2000;
        else
            y += 1900;
    }
    cout << setfill('0') << y << "-" << setw(2) << m << endl;
    
    return 0;
}