#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<char, int> m;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i)
        if (m.find(s[i]) == m.end())
            m[s[i]] = 1;
        else
            ++m[s[i]];

    for (char c = '0'; c <= '9'; c++)
        if (m.find(c) != m.end())
            cout << c << ':' << m[c] << endl;

    return 0;
}