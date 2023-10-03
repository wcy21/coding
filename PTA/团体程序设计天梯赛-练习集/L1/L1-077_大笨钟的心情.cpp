#include <iostream>

using namespace std;

int main() {
    int n, a[24];
    for (int i = 0; i < 24; ++i)
        cin >> a[i];
    while (cin >> n) {
        if (n < 0 || n > 23)
            break;
        if (a[n] > 50)
            cout << a[n] << " Yes" << endl;
        else
            cout << a[n] << " No" << endl;
    }
      
    return 0;
}