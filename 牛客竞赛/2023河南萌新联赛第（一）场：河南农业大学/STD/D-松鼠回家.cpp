#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, int> pii;
const int maxn = 1e5 + 10;
int e[maxn], ne[maxn], h[maxn], idx, w[maxn], va[maxn];
ll dist[maxn];
bool vis[maxn];
int n, m, st, ed, xue;

void add(int a, int b, int c) {
	e[idx] = b, ne[idx] = h[a], w[idx] = c, h[a] = idx ++;
}

void dijkstra(int mid) {
	for (int i = 1; i <= n; i ++ ) {
		dist[i] = 1e18;
		vis[i] = false;
	}
	dist[st] = 0;
	priority_queue<pii, vector<pii>, greater<pii>> q;
	q.push({0, st});
	while (q.size()) {
		pii t = q.top();
		q.pop();
		int ver = t.second;
		if (vis[ver]) continue;
		vis[ver] = true;
		for (int i = h[ver]; i != -1; i = ne[i] ) {
			int j = e[i];
			if (va[j] <= mid && dist[j] > dist[ver] + w[i]) {
				dist[j] = dist[ver] + w[i];
				q.push({dist[j], j});
			}
		}
	}
}

bool check(int mid) {
	dijkstra(mid);
	if (dist[ed] <= xue) return true;
	return false;
}

void solve() {
	scanf("%d %d %d %d %d", &n, &m, &st, &ed, &xue);
	for (int i = 1; i <= n; i ++ ) {
		scanf("%d", &va[i]);
	}
	for (int i = 1; i <= n; i ++ ) {
		h[i] = -1;
	}
	while (m -- ) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		add(x, y, z);
		add(y, x, z);
	}
	int l = max(va[st], va[ed]), r = 1e7 + 1;
	while (l < r) {
		int mid = (l + r) >> 1;
		if (check(mid)) r = mid;
		else l = mid + 1;
	}
	if (l == 1e7 + 1) printf("-1");
    else printf("%d", l);
}

int main() {
	solve();
	return 0;
}
