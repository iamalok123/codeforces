#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Function to solve each test case
void solve() {
	ll n;
	cin >> n; // Read the length of the array
	vector<ll> v(n); // Declare a vector to store the array elements

	// Read the array elements
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	ll ans = 0; // Variable to store the maximum GCD score
	ll total_sum = accumulate(v.begin(), v.end(), 0LL); // Calculate the total sum of the array
	ll sum = 0; // Variable to store the sum of the current subsegment

	// Iterate through the array to find the optimal partition
	for (int i = 0; i < n - 1; i++) {
		sum += v[i]; // Add the current element to the subsegment sum
		// Calculate the GCD of the current partition and update the maximum score
		ans = max(ans, __gcd(total_sum - sum, sum));
	}

	cout << ans << endl; // Output the maximum GCD score for the current test case

	// Time Complexity (TC): O(n * log(1e14))
	// Space Complexity (SC): O(n)
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	int t = 1;
	cin >> t; // Read the number of test cases
	while (t--) {
		solve(); // Solve each test case
	}
}
