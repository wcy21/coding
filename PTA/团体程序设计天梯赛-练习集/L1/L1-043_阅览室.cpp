#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int N, bookId, hh, mm, day = 1, cnt = 0, total = 0;
    int time[1007] = { 0 };
    bool isBorrow[1007] = { false };
    char state, ch;

    cin >> N;
    while (day <= N) {
        cin >> bookId >> state >> hh >> ch >> mm;
        if (bookId == 0) {
            if (!cnt)
                cout << "0 0\n";
            else
                cout << cnt << ' ' << int(double(total) / cnt + 0.5) << '\n';
            ++day;
            cnt = total = 0;
            memset(isBorrow, false, sizeof(isBorrow));
        }
        else if (state == 'S') {
            isBorrow[bookId] = true;
            time[bookId] = 60 * hh + mm;
        }
        else if (state == 'E' && isBorrow[bookId] == true) {
            isBorrow[bookId] = false;
            total += 60 * hh + mm - time[bookId];
            ++cnt;
        }
    }

    return 0;
}