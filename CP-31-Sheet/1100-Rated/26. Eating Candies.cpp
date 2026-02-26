#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	// Vector to store the weights of candies
	vector<int> weight(n);

	// Read the weights of the candies
	for (int i = 0; i < n; i++) {
		cin >> weight[i];
	}

	// Vector to store suffix sums of weights
	vector<int> suffix_sum(n);

	// Map to store the index of each suffix sum
	map<int, int> index;

	int sum = 0;

	// Calculate suffix sums and store their indices
	for (int i = n - 1; i >= 0; i--) {
		sum += weight[i];
		index[sum] = i;
		suffix_sum[i] = sum;
	}

	int ans = 0;
	int prefix_sum = 0;

	// Calculate prefix sums and find the maximum number of candies
	for (int i = 0; i < n; i++) {
		// Remove the current suffix sum from the map
		index.erase(suffix_sum[i]);

		// Update the prefix sum
		prefix_sum += weight[i];

		// Check if the current prefix sum exists in the suffix sums
		if (index.find(prefix_sum) != index.end()) {
			// Calculate the total number of candies eaten by Alice and Bob
			ans = max(ans, (i + 1) + (n - index[prefix_sum]));
		}
	}

	// Output the maximum number of candies Alice and Bob can eat
	cout << ans << endl;

	// Time Complexity (TC): O(NlogN)
	// Space Complexity (SC): O(N)
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	int t;
	cin >> t;

	// Process each test case
	while (t--) {
		solve();
	}
}
