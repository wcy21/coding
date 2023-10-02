#include <iostream>

using namespace std;

int main() {
    int N, a, b;
    string name;
    
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> name >> a >> b;
        if (a < 15 || a > 20 || b < 50 || b>70) {
            cout << name << endl;
        }
    }

    return 0;
}