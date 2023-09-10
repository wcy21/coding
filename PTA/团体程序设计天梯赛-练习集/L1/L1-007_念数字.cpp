#include <iostream>

using namespace std;

string d[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main() {
    string s;
    cin >> s;

    cout << (s[0] == '-' ? "fu" : d[s[0] - '0']);
    for (int i = 1; i < s.size(); ++i)
        cout << ' ' << d[s[i] - '0'];

    return 0;
}