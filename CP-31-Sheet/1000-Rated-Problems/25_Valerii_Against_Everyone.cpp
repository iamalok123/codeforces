#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the length of the array for the current test case
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) // Loop to read the array elements
			cin >> a[i];

		unordered_set<long long> s; // Create a set to store unique elements
		for (long long i = 0; i < n; i++) // Loop through the array
			s.insert(a[i]); // Insert each element into the set

		// If the size of the set is less than n, it means there are duplicates
		if (s.size() < n)
			cout << "YES" << endl; // Output YES if duplicates exist
		else
			cout << "NO" << endl; // Output NO if all elements are unique
	}
}

// Time Complexity (TC): O(n) = O(1000)
// Space Complexity (SC): O(n) = O(1000)
