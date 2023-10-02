#include <iostream>

using namespace std;

int a[107][107], b[107][107];
int ra, ca, rb, cb;

int f(int r, int c) {
    int sum = 0;
    for (int i = 1; i <= ca; ++i)
        sum += a[r][i] * b[i][c];
    return sum;
}

int main() {
    cin >> ra >> ca;
    for (int i = 1; i <= ra; ++i)
        for (int j = 1; j <= ca; ++j)
            cin >> a[i][j];

    cin >> rb >> cb;
    for (int i = 1; i <= rb; ++i)
        for (int j = 1; j <= cb; ++j)
            cin >> b[i][j];

    if (ca != rb)
        cout << "Error: " << ca << " != " << rb << '\n';
    else {
        cout << ra << ' ' << cb << '\n';
        for (int i = 1; i <= ra; ++i) {
            for (int j = 1; j <= cb; ++j) {
                if (j != 1)
                    cout << ' ';
                cout << f(i, j);
            }
            cout << '\n';
        }
    }

    return 0;
}