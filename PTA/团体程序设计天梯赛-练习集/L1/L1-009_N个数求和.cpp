#include <iostream>

using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
    int N, ai, bi, a = 0, b = 1;
    char c;
    cin >> N;
    while (N--) {
        cin >> ai >> c >> bi;
        a = a * bi + b * ai;
        b *= bi;
        int k = gcd(a, b);
        a /= k, b /= k;
    }

    if (b < 0)
        a = -a, b = -b;

    if (!a)
        cout << 0;
    else {
        int n = a / b;
        a %= b;
        if (!n)
            cout << a << '/' << b;
        else {
            if (!a)
                cout << n;
            else
                cout << n << ' ' << a << '/' << b;
        }
    }

    return 0;
}