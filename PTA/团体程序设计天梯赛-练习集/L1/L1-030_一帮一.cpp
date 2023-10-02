#include <iostream>

const int N = 50;

using namespace std;

int main() {
	int n, sex[N];
	string name[N];
    
    cin >> n;
	for (int i = 0; i < n; i++)
		cin >> sex[i] >> name[i];

	int pb = n - 1, pg = n - 1;
	for (int i = 0; i < n / 2; i++) {
		if (sex[i] == 0) {
			while (sex[pb] == 0) 
                --pb;
			cout << name[i] << ' ' << name[pb--] << endl;
		} else {
			while (sex[pg] == 1) 
                --pg;
			cout << name[i] << ' ' << name[pg--] << endl;
		}
	}

	return 0;
}