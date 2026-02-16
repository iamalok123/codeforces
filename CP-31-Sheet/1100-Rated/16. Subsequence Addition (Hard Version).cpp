#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Function to solve each test case
void solve() {
	ll n;
	cin >> n; // Read the number of elements in the final array
	vector<ll> v(n);
	
	// Read the elements of the final array
	for (int i = 0; i < n; i++) { // O(n)
		cin >> v[i];
	}
	
	// Sort the array to process elements in increasing order
	sort(v.begin(), v.end()); // O(n log n)
	
	// If the smallest element is not 1, it's impossible to form the array
	if (v[0] != 1) {
		cout << "No" << endl;
		return;
	}
	
	ll sum = 1; // Initialize sum with the first element (which is 1)
	
	// Check if each element can be formed by the sum of previous elements
	for (int i = 1; i < n; i++) { // O(n)
		if (v[i] > sum) {
			cout << "No" << endl;
			return;
		}
		sum += v[i]; // Update the sum with the current element
	}
	
	// If all elements can be formed, output "Yes"
	cout << "Yes" << endl;
	
	// Time Complexity (TC): O(n log n)
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
