#include <iostream>

using namespace std;

int main() {
    int N, temp = 1, sum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        temp *= i;
        sum += temp;
    }
    cout  << sum << endl;

    return 0;
}