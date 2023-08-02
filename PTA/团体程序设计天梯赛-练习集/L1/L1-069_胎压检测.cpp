#include <iostream>

using namespace std;

int main() {
    int maxp = 0, minp, limit, wheel[5];
    for (int i = 1; i <= 4; ++i) {
        cin >> wheel[i];
        maxp = max(maxp, wheel[i]);
    }
    cin >> minp >> limit;

    int err = 0, idx;
    for (int i = 1; i <= 4; ++i) {
        if (wheel[i] < minp || maxp - wheel[i] > limit) {
            ++err;
            idx = i;
        }
    }

    if (err == 0) 
        cout << "Normal" << endl;
    else if (err == 1)
        cout << "Warning: please check #" << idx << "!" << endl;
    else
        cout << "Warning: please check all the tires!" << endl;
        
    return 0;
}