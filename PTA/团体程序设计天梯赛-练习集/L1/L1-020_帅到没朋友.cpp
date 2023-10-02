#include <iostream>
#include <iomanip>
#include <set>

using namespace std;

int main() {
	int N, K, M, ID;
	bool find = false;
	set<int> s;

	cin >> N;
	while (N--) {
		cin >> K;
		if (K == 1)  { 
			cin >> ID; 
			continue; 
		}
		while (K--) {
			cin >> ID;
			s.insert(ID);
		}
	}

	cin >> M;
	while (M--) {
		cin >> ID;
		if (s.find(ID) == s.end()) {
			if (!find)
				find = true;
			else 
                cout << ' ';
			cout << setw(5) << setfill('0') << ID;
			s.insert(ID);
		}
	}
	if (!find)
        cout << "No one is handsome";

	return 0;
}