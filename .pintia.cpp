#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; ++i) {
        int ret = 1;
        cin.get();
        for (int j = N - 1; j >= 0; --j) {
            if (cin.get() == 'n')
                ret += 1 << j;
        }
        cout << ret << endl;
    }

    system("pause");
    return 0;
}