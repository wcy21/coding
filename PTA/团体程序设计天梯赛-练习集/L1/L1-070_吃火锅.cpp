#include <iostream>
#include <string>

using namespace std;

int main() {
    int total = 0, idx = -1, fav = 0;
    string line;
    while (getline(cin, line)) {
        if (line == ".")
            break;
            
        ++total;
        if (line.find("chi1 huo3 guo1") != string::npos) {
            ++fav;
            if (idx == -1)
                idx = total;
        }
    }

    cout << total << endl;
    if (fav > 0)
        cout << idx << ' ' << fav << endl;
    else
        cout << "-_-#" << endl;

    return 0;
}