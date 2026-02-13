#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	// Read the number of elements in the array
	cin >> n;
	vector<int> a(n);
	// Read the elements of the array
	for (auto &i : a) cin >> i;
	
	int ans = 0;
	// Iterate over the array to calculate the gcd of differences
	for (int i = 0; i < n; ++i) {
		// Calculate the gcd of the current answer and the absolute difference
		// between the i-th element and its corresponding element from the end
		ans = __gcd(ans, abs(a[i] - a[n - i - 1]));
	}
	// Output the result for the current test case
	cout << ans << endl;
	// Time Complexity (TC): O(n * log(1e9))
	// Space Complexity (SC): O(n)
}

int main() {
	int t;
	// Read the number of test cases
	cin >> t;
	while (t--) {
		// Solve each test case
		solve();
	}
}
