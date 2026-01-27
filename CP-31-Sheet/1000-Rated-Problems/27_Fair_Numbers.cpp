#include <bits/stdc++.h>
using namespace std;

/*
 * Function: isFair
 * ----------------
 * Checks whether a given number `n` is a "fair" number.
 * A number is fair if all of its non-zero digits divide the number itself.
 * Returns:
 *     true if n is fair, false otherwise.
 */
bool isFair(long long n) {
	long long num = n;
	while (num != 0) {
		int x = num % 10; // Extract last digit
		if (x != 0 && n % x != 0) {
			// If the digit is not zero and doesn't divide n evenly, it's not fair
			return false;
		}
		num /= 10; // Remove last digit
	}
	return true; // All digits passed the test
}

int main() {
	int t;
	cin >> t; // Read number of test cases

	while (t--) {
		long long n;
		cin >> n; // Read input number

		// Keep incrementing n until a fair number is found
		while (!isFair(n)) {
			n += 1;
		}

		cout << n << endl; // Output the fair number
	}
}

// Time Complexity (TC): O(2520 * 18) = O(45360) ~ O(10^5)
// Space Complexity (SC): O(1)
