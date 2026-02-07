#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Function to check if a given height 'mid' can be achieved
// with the available water 'x'
bool check(ll mid, vector<ll> &heights, ll x) {
	ll units = 0; // Initialize water units needed
	int n = heights.size(); // Get the number of columns
	for (int i = 0; i < n; i++) { // Iterate over each column
		if (heights[i] < mid) { // If the column is shorter than 'mid'
			units += (mid - heights[i]); // Calculate the water needed to fill it to 'mid'
		}
	}
	return units <= x; // Return true if the required water is within the limit
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	int t; // Number of test cases
	cin >> t;
	while (t--) {
		ll n, x; // Number of columns and maximum water units available
		cin >> n >> x;
		vector<ll> heights(n); // Vector to store the heights of the coral columns
		for (int i = 0; i < n; i++) { // Input the heights of the columns
			cin >> heights[i];
		}
		ll si = 1, ei = 1e12, ans = -1; // Initialize binary search bounds and answer
		while (si <= ei) { // Perform binary search
			ll mid = si + (ei - si) / 2; // Calculate mid-point
			if (check(mid, heights, x)) { // Check if 'mid' height is feasible
				ans = mid; // Update answer
				si = mid + 1; // Try for a higher height
			} else {
				ei = mid - 1; // Try for a lower height
			}
		}
		cout << ans << endl; // Output the maximum possible height
	}
	// Time Complexity (TC): O(N log(1e12))
	// Space Complexity (SC): O(N)
}
