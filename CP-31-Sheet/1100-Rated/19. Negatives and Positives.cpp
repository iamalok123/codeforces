#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	cin >> t; // Read the number of test cases
	while (t--) {
		int n;
		cin >> n; // Read the length of the array for the current test case
		vector<int> a(n); // Initialize a vector to store the array elements
		ll sum = 0; // Initialize sum to store the total sum of the array
		int negs = 0; // Counter for negative numbers

		// Loop through each element of the array
		for (int i = 0; i < n; ++i) {
			cin >> a[i]; // Read each element of the array
			if (a[i] < 0) { // Check if the element is negative
				++negs; // Increment the negative counter
				a[i] = -a[i]; // Flip the sign of the negative element
			}
			sum += a[i]; // Add the absolute value to the sum
		}

		// Sort the array to find the smallest element
		sort(a.begin(), a.end());

		// If the number of negative elements is odd
		if (negs & 1) {
			sum -= 2 * a[0]; // Subtract twice the smallest element to maximize the sum
		}

		cout << sum << "\n"; // Output the maximum possible sum
	}

	// Time Complexity (TC): O(nlogn)
	// Space Complexity (SC): O(n)
}
