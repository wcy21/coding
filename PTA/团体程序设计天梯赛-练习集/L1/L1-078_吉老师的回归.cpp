#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m, id;
    cin >> n >> m;
	cin.get();

    string s[37];
    for (id = 0; id < n; ++id) {
        getline(cin, s[id]);
        if (s[id].find("qiandao") == string::npos && s[id].find("easy") == string::npos)
			if (m-- == 0)
				break;
    }
    if (id == n)
        cout << "Wo AK le" << endl;
    else 
        cout << s[id] << endl;
    
    return 0;
}