#include <bits/stdc++.h>
using namespace std;

// Precompute coprime pairs for numbers from 1 to 1000
vector<int> pairs[1001];

void solve() {
	int n;
	cin >> n;

	// Vector to store the index of each number in the array
	vector<int> idx(1001, 0);

	// Read the array and store the index of each element
	for (int i = 1; i <= n; ++i) { // O(n)
		int x;
		cin >> x;
		idx[x] = i;
	}

	int ans = -1; // Initialize the answer to -1

	// Iterate over all numbers from 1 to 1000
	for (int i = 1; i <= 1000; ++i) { // O(1000*1000)
		if (idx[i] == 0) {
			continue; // Skip if the number is not present in the array
		}
		// Check all coprime pairs for the current number
		for (int j : pairs[i]) {
			if (idx[j] != 0) {
				// Update the maximum sum of indices if both numbers are present
				ans = max(ans, idx[i] + idx[j]);
			}
		}
	}

	cout << ans << endl; // Output the result
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	// Precompute coprime pairs for numbers from 1 to 1000
	for (int i = 1; i <= 1000; ++i) {
		for (int j = 1; j <= 1000; ++j) {
			if (__gcd(i, j) == 1) {
				pairs[i].push_back(j); // Store j as a coprime of i
			}
		}
	} // O(1000*1000*log(1000))

	int t;
	cin >> t; // Read the number of test cases

	while (t--) {
		solve(); // Solve each test case
	}
}

// Time Complexity (TC): O(n) + O(1000*1000) + O(1000*1000*log(1000))
// Space Complexity (SC): O(1000*1000)
