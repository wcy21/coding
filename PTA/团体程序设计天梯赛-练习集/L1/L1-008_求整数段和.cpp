#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int A, B, sum = 0, cnt = 0;
    cin >> A >> B;

    while (A <= B) {
        for (int j = 0; j < 5 && A <= B; ++j) {
            cout << setw(5) << A;
            sum += A;
            ++A;
        }
        cout << endl;
    }
    cout << "Sum = " << sum << endl;

    return 0;
}