#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, v;
	string s;
	cin >> n;
    cin.get();
	getline(cin, s);
    
	v = (s.size() + n - 1) / n;
	s.resize(v * n, ' ');
	for (int i = 0; i < n; i++) {
		for (int j = v - 1;j >= 0; j--)
			cout << s[j * n + i];
		cout << endl;
	}

	return 0;
}