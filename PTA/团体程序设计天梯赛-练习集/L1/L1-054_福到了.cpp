#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, flag = 0;
    char ch, a[107][107];

    cin >> ch >> N;
    for (int i = 0; i < N; ++i) {
        cin.get();
        for (int j = 0; j < N; ++j)
            a[i][j] = cin.get();
    }

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N / 2; ++j)
            if (a[i][j] != a[N - 1 - i][N - 1 - j])
                flag = 1;
    
    if (!flag)
        cout << "bu yong dao le" << endl;
    for (int i = N - 1; i >= 0; --i) {
        for (int j = N - 1; j >= 0; --j) {
            if (a[i][j] == '@')
                cout << ch;
            else
                cout << ' ';
        }
        cout << endl;
    }

	return 0;
}