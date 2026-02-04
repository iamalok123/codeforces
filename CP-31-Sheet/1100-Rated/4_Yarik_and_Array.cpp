#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	int t = 1; // Number of test cases
	cin >> t;

	while (t--) {
		ll n; // Length of the array
		cin >> n;
		vector<ll> v(n); // Array to store elements

		// Reading the array elements
		for (int i = 0; i < n; i++) { // O(n)
			cin >> v[i];
		}

		ll ans = INT_MIN; // Variable to store the maximum sum of subarray
		int i = 0, j = 0; // Pointers for the start and end of the subarray
		ll sum = 0; // Current sum of the subarray

		// Iterate over the array to find the maximum sum subarray with alternating parities
		while (j < n) { // O(n)
			// Reset sum if it becomes negative
			if (sum < 0) {
				sum = 0;
				i = j;
			}

			// Check if the current element can be added to the subarray
			if (i < j) {
				// Check if the current and previous elements have alternating parities
				if ((v[j] ^ v[j - 1]) & 1) {
					sum += v[j];
				} else {
					sum = v[j];
					i = j;
				}
			} else {
				sum = v[j];
			}

			// Update the maximum sum found so far
			ans = max(ans, sum);
			j++;
		}

		// Output the maximum sum for the current test case
		cout << ans << endl;
	}

	// Time Complexity (TC): O(n)
	// Space Complexity (SC): O(n)
}
