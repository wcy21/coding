#include <iostream>

using namespace std;

int main() {
	int pa, pb, vote, va = 0, vb = 0;

	cin >> pa >> pb;
	for (int i = 0; i < 3; i++) {
		cin >> vote;
        if (vote == 0)
            ++va;
        else 
            ++vb;
	}

	if (pa > pb && va != 0 || va == 3)
		cout << "The winner is a: " << pa << " + " << va << endl;
	else
		cout << "The winner is b: " << pb << " + " << vb << endl;

	return 0;
}