#include <iostream>
#include <string>

using namespace std;

int main() {
    int L, N;
    cin >> L >> N;

    --N;
    string s(L, 'z');
    for (int i = L - 1; i >= 0; --i) {
        if (N == 0)
            break;
        s[i] -= N % 26;
        N /= 26;
    }

    cout << s << endl;

    return 0;
}