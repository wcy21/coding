#include <iostream>
#include <map>

using namespace std;

string ID;
bool allPass = true, err;
int N, Z, sum, w[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        sum = 0, err = false;
        cin >> ID;
        for (int j = 0; j < 17; j++) {
            if (!isdigit(ID[j]))
                err = true;
            sum += w[j] * (ID[j] - '0');
        }

        Z = sum % 11;
        if (M[Z] != ID[17])
            err = true;
        if (err) {
            allPass = false;
            cout << ID << endl;
        }
    }

    if (allPass)
        cout << "All passed";

    return 0;
}