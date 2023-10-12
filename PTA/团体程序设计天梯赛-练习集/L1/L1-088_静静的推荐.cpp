#include <iostream>
#include <map>

using namespace std;

map<int, int> m;

int main() {
	int n, k, s, cnt = 0;
	cin >> n >> k >> s;
	for (int i = 0; i < n; ++i) {
		int s1, s2;
		cin >> s1 >> s2;
		if (s1 >= 175) {
			if (s2 < s && m[s1] < k) {
				++m[s1];
				++cnt;
			}
			else if (s2 >= s)
				++cnt;
		}
	}
	cout << cnt << endl;
		
	return 0;
}
