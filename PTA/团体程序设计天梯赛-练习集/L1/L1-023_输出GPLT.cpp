#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int g = 0, p = 0, l = 0, t = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'g' || s[i] == 'G')
            ++g;
        else if (s[i] == 'p' || s[i] == 'P')
            ++p;
        else if (s[i] == 'l' || s[i] == 'L')
            ++l;
        else if (s[i] == 't' || s[i] == 'T')
            ++t;
    }
	while (g > 0 || p > 0 || l > 0 || t > 0) {
        if (g-- > 0)
            cout << "G";
        if (p-- > 0)
            cout << "P";
        if (l-- > 0)
            cout << "L";
        if (t-- > 0)
            cout << "T";
	}
    
	return 0;
}