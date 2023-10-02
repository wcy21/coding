#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	getline(cin, s);

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != '6')
            cout << s[i];
        else {
            int cnt = 1;
            while (s[i + cnt] == '6')
                ++cnt;
            if (cnt > 9)
                cout << "27";
            else if (cnt > 3)
                cout << "9";
            else
                for (int i = 0; i < cnt; ++i)
                    cout << "6";
            i += cnt - 1;
        }
    }

	return 0;
}