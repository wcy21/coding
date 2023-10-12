#include <iostream>
#include <iomanip>
#include <set>

using namespace std;

set<int> s[57];

void solve(set<int>& s1, set<int>& s2) {
	int nc = 0, nt = 0;
	for (auto x : s1)
		if (s2.count(x))
			nc++;
	nt = s1.size() + s2.size() - nc;

	double similarity = 100.0 * nc / nt;
	cout << fixed << setprecision(2) << similarity << '%' << endl;
}

int main() {
	int n, m, val;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> m;
		while (m--) {
			cin >> val;
			s[i].insert(val);
		}
	}
	int k, s1, s2;
	cin >> k;
	while (k--) {
		cin >> s1 >> s2;
		solve(s[s1], s[s2]);
	}

	return 0;
}
