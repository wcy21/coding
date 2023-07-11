#include <iostream>
#include <map>

using namespace std;

map<string, int> mp;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int op, score;
        string name;
        cin >> op;
        if (op == 1) {
            cin >> name >> score;
            mp[name] = score;
            cout << "OK" << endl;
        }
        if (op == 2) {
            cin >> name;
            if (mp.count(name))
                cout << mp[name] << endl;
            else
                cout << "Not found" << endl;
        }
        if (op == 3) {
            cin >> name;
            if (mp.count(name)) {
                mp.erase(name);
                cout << "Deleted successfully" << endl;
            } else
                cout << "Not found" << endl;
        }
        if (op == 4)
            cout << mp.size() << endl;
    }

    return 0;
}