#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string>m;
    m.insert({"Bu", "JianDao"});
    m.insert({"JianDao", "ChuiZi"});
    m.insert({"ChuiZi", "Bu"});

    int K, round = 0;
    string s;
    cin >> K;
    while (cin >> s) {
        if (s == "End")
            break;

        ++round;
        if (round % (K + 1) == 0)
            cout << s << endl;
        else
            cout << m[s] << endl;
    }

    return 0;
}