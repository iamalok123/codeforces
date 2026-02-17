#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
	ll t;
	cin >> t; // Read the number of test cases
	while (t--) {
		ll n, k;
		cin >> n >> k; // Read the size of the pattern (n) and the number of operations (k)
		ll arr[n][n];

		// Read the n x n pattern matrix
		for (int i = 0; i < n; i++) { // Loop over rows
			for (int j = 0; j < n; j++) { // Loop over columns
				cin >> arr[i][j]; // Read each cell's color
			}
		}

		ll cnt = 0; // Initialize a counter for mismatched cells

		// Count the number of mismatched cells compared to the 180-degree rotated pattern
		for (int i = 0; i < n; i++) { // Loop over rows
			for (int j = 0; j < n; j++) { // Loop over columns
				// Compare the cell with its 180-degree rotated counterpart
				if (arr[i][j] != arr[n - i - 1][n - j - 1]) {
					cnt++; // Increment the counter if they are different
				}
			}
		}

		cnt /= 2; // Each mismatch is counted twice, so divide by 2

		// Check if the number of mismatches can be corrected with k operations
		if (cnt > k) {
			cout << "NO" << endl; // Not enough operations to correct mismatches
		} else {
			ll temp = k - cnt; // Calculate remaining operations after correcting mismatches
			// Check if the remaining operations can be used to make the pattern symmetric
			if (temp % 2 == 0) {
				cout << "YES" << endl; // Even number of operations left, pattern can be symmetric
			} else {
				if (n % 2 == 0) {
					cout << "NO" << endl; // Odd operations left and even n, cannot be symmetric
				} else {
					cout << "YES" << endl; // Odd operations left and odd n, can be symmetric
				}
			}
		}
	}
	// Time Complexity (TC): O(n^2)
	// Space Complexity (SC): O(n^2)
}
