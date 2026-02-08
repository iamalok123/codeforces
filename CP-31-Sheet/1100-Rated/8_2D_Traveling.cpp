#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Function to solve each test case
void solve() {
	int n, k, s, t;
	// Read the number of cities (n), number of major cities (k), starting city (s), and ending city (t)
	cin >> n >> k >> s >> t;

	// Vectors to store the x and y coordinates of each city
	vector<ll> x(n + 1), y(n + 1);

	// Read the coordinates of each city
	for (int i = 1; i <= n; i++) {
		cin >> x[i] >> y[i];
	}

	// Calculate the direct cost from city s to city t
	ll ans = abs(x[s] - x[t]) + abs(y[s] - y[t]);

	// Initialize minimum costs from s to any major city and from t to any major city
	ll mins = 1e17, mint = 1e17;

	// Calculate the minimum cost from city s to any major city and from city t to any major city
	for (int i = 1; i <= k; i++) {
		mins = min(mins, abs(x[s] - x[i]) + abs(y[s] - y[i]));
		mint = min(mint, abs(x[t] - x[i]) + abs(y[t] - y[i]));
	}

	// Update the answer with the minimum cost considering major cities
	ans = min(ans, mins + mint);

	// Output the minimum cost
	cout << ans << endl;

	// Time Complexity (TC): O(n)
	// Space Complexity (SC): O(n)
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	int t;
	// Read the number of test cases
	cin >> t;
	// Solve each test case
	while (t--) {
		solve();
	}
}
