#include <iostream>

using namespace std;

int main() {
	string s, s1, s2;
	int n, p1, p2;

	cin >> s >> n;
	for (int i = 0; i < n; ++i) {
		cin >> p1 >> p2 >> s1 >> s2;
		string tmp = s.substr(p1 - 1, p2 - p1 + 1), ss = s1 + s2;
		s.erase(p1 - 1, p2 - p1 + 1);
		int idx = s.find(ss);
		if (idx == string::npos)
			s += tmp;
		else 
			s.insert(idx + s1.size(), tmp);
	}
	cout << s << endl;

    return 0;
}