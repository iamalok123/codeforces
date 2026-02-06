#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	#ifndef ONLINE_JUDGE
		freopen("Error.txt", "w", stderr);
	#endif

	int t;
	cin >> t; // Read the number of test cases

	while (t--) {
		ll n, q;
		cin >> n >> q; // Read the length of array 'a' and the number of queries

		vector<ll> a(n); // Initialize vector 'a' of size 'n'
		for (int i = 0; i < n; i++) { // Loop to read elements of array 'a'
			cin >> a[i];
		}

		vector<ll> x(q); // Initialize vector 'x' of size 'q'
		for (int i = 0; i < q; i++) { // Loop to read elements of array 'x'
			cin >> x[i];
		}

		ll prev = 31; // Initialize 'prev' to 31, which is greater than any possible x[i]

		for (int i = 0; i < q; i++) { // Loop through each query
			if (x[i] >= prev) continue; // Skip if current x[i] is not less than 'prev'

			ll val = pow(2, x[i]); // Calculate 2^x[i]

			for (int j = 0; j < n; j++) { // Loop through each element of array 'a'
				if (a[j] % val == 0) { // Check if a[j] is divisible by 2^x[i]
					a[j] += (val / 2); // Add (2^x[i] / 2) to a[j]
				}
			}

			prev = x[i]; // Update 'prev' to current x[i]
		}

		for (int i = 0; i < n; i++) { // Output the modified array 'a'
			cout << a[i] << " ";
		}
		cout << endl;
	}

	// Time Complexity (TC): O(q + n * 30)
	// Space Complexity (SC): O(q + n)
}
