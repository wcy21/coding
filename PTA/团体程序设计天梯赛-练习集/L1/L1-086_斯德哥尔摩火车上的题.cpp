#include <iostream>

using namespace std;

int main() {
    string s1, s2, first, second;
    cin >> s1 >> s2;
    for (int i = 1; i < s1.size(); ++i)
        if (s1[i] % 2 == s1[i - 1] % 2)
            first += max(s1[i], s1[i - 1]);

    for (int i = 1; i < s2.size(); ++i)
        if (s2[i] % 2 == s2[i - 1] % 2)
            second += max(s2[i], s2[i - 1]);

    cout << first << endl;
    if (first != second)
        cout << second << endl;

    return 0;
}