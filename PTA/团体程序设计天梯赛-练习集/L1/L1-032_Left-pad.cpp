#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	char ch;
	cin >> N >> ch;

	string s;
	cin.get();
	getline(cin, s);

	if (N > s.length())
		s.insert(0, N - s.length(), ch);
	else
		s.erase(0, s.length() - N);

	cout << s << endl;

	return 0;
}