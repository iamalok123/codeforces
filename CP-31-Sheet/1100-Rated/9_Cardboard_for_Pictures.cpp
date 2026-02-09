#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Function to solve each test case
void solve() {
	ll n, c; // n: number of pictures, c: total square centimeters of cardboard used
	cin >> n >> c;
	vector<ll> a(n); // Vector to store the side lengths of each picture

	// Input the side lengths of the pictures
	for (int i = 0; i < n; ++i) { // O(n)
		cin >> a[i];
	}

	ll l = 1, r = 1e9, ans = -1; // Initialize binary search bounds and answer

	// Binary search to find the value of w
	while (l <= r) { // O(log(1e9) * n)
		ll mid = l + (r - l) / 2; // Calculate mid-point
		ll sum_all = 0; // Variable to store the total cardboard area used

		// Calculate the total cardboard area used with current mid as w
		for (int i = 0; i < n; ++i) {
			sum_all += (a[i] + 2 * mid) * (a[i] + 2 * mid);
			if (sum_all > c) break; // If the area exceeds c, break early
		}

		// Check if the calculated area is within the allowed cardboard area
		if (sum_all <= c) {
			ans = mid; // Update answer
			l = mid + 1; // Try to find a larger w
		} else {
			r = mid - 1; // Try to find a smaller w
		}
	}

	cout << ans << endl; // Output the found value of w

	// Time Complexity (TC): O(n * log(1e9))
	// Space Complexity (SC): O(n)
}

int main() {
	int t; // Number of test cases
	cin >> t;
	while (t--) {
		solve(); // Solve each test case
	}
}
