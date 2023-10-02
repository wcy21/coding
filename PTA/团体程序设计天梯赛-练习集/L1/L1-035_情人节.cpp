#include <iostream>
#include <string>

using namespace std;

int main() {
	string name, friends[107];
    int idx = 0;
    while (cin >> friends[idx]) {
        if (friends[idx] == ".")
            break;
        ++idx;
    }

	string A, B;
	if (idx >= 2)
		A = friends[1];
	if (idx >= 14)
		B = friends[13];

	if (!A.empty() && !B.empty())
		cout << A << " and " << B << " are inviting you to dinner..." << endl;
	else if (!A.empty())
		cout << A << " is the only one for you..." << endl;
	else
		cout << "Momo... No one is for you ..." << endl;

	return 0;
}