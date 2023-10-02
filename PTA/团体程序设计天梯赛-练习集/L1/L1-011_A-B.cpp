#include <iostream>
#include <string>

using namespace std;

bool vis[256];

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    for (int i = 0; i < s2.length(); i++)
        vis[s2[i]] = true;

    for (int i = 0; i < s1.length(); i++)
        if (!vis[s1[i]])
            cout << s1[i];

    return 0;
}