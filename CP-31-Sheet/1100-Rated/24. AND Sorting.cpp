#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t; // Number of test cases
	cin >> t;
	while (t--) {
		int n; // Length of the permutation
		cin >> n;
		// Initialize ans with all bits set (maximum possible value for X)
		int ans = (1 << 30) - 1;
		for (int i = 0; i < n; ++i) { // Iterate over each element in the permutation
			int x; // Current element of the permutation
			cin >> x;
			// If the element is not in its sorted position
			if (x != i) {
				// Perform bitwise AND with ans to find the maximum X
				ans &= x; // O(1) operation
			}
		}
		// Output the maximum value of X for the current test case
		cout << ans << endl;
	}
	// Time Complexity (TC): O(n)
	// Space Complexity (SC): O(1)
}
