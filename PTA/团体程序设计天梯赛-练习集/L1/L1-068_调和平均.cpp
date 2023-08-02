#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    double val, sum = 0, avg;
    for (int i = 0; i < N; ++i) {
        cin >> val;
        sum += 1 / val;
    }
    avg = 1 / (sum / N);
    cout << fixed << setprecision(2) << avg << endl;
    
    return 0;
}