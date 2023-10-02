#include <iostream>

using namespace std;

int main() {
    int N;
    char ch;
    cin >> N >> ch;

    for (int i = 0; i < (N + 1) / 2; i++) {
        for (int j = 0; j < N; j++)
            cout << ch;
        cout << endl;
    }

    return 0;
}