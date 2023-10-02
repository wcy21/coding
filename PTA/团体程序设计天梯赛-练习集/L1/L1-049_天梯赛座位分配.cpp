#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, cnt = 1, M[107] = { 0 }, id_school[100007] = { 0 };
    cin >> N;
    vector<vector<int>> v(N + 1);
    for (int i = 1; i <= N; ++i)
        cin >> M[i];

    while (true) {
        bool flag = true;
        for (int i = 1; i < v.size(); ++i) {
            if (v[i].size() < M[i] * 10) {
                if (id_school[cnt - 1] != i)
                    id_school[cnt] = i;
                else
                    id_school[++cnt] = i;
                v[i].push_back(cnt++);
                flag = false;
            }
        }
        if (flag)
            break;
    }

    for (int i = 1; i < v.size(); ++i) {
        cout << '#' << i << endl;
        for (int j = 0; j < v[i].size(); ++j) {
            if (j && j % 10 != 0)
                cout << ' ';
            if (j && j % 10 == 0)
                cout << '\n';
            cout << v[i][j];
        }
        cout << '\n';
    }

    return 0;
}