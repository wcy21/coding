#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;
	cin.get();
    
	while (N--) {
	    string s;
		getline(cin, s);
		if (s.find("ong,") != string::npos && s.find("ong.") != string::npos) {
			int blank = 3, pos = s.size() - 1;
			while (blank--)
				pos = s.rfind(" ", pos - 1);
			s.replace(pos, s.size() - pos, " qiao ben zhong.");
		}
        else
			s = "Skipped";

		cout << s << endl;
	}

	return 0;
};