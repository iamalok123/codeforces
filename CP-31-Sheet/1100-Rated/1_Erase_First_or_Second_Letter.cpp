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
		int n; // Length of the string
		cin >> n;
		string s; // Input string
		cin >> s;

		// Map to store frequency of each character in the string
		map<char, int> freq;
		int count = 0; // To count distinct characters

		// Vector to store the number of distinct characters up to each index
		vector<int> distinct(n, 0);

		// Iterate over the string to calculate distinct characters
		for (int i = 0; i < n; i++) { // Complexity: O(n log n)
			freq[s[i]]++;
			if (freq[s[i]] == 1) {
				count++; // Increment count if character appears for the first time
			}
			distinct[i] = count; // Store the count of distinct characters up to index i
		}

		ll ans = 0; // To store the final answer

		// Sum up the distinct counts for each position
		for (int i = 0; i < n; i++) { // Complexity: O(n)
			ans += distinct[i];
		}

		cout << ans << endl; // Output the result for the current test case
	}

	// Time Complexity (TC): O(n log n)
	// Space Complexity (SC): O(n)
}
