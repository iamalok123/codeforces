#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the length of the array for the current test case
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) // Loop to read the elements of the array
			cin >> a[i];

		// Sort the array in descending order
		// This ensures that the condition j - a[j] ≠ i - a[i] holds for all i < j
		sort(a.rbegin(), a.rend()); // Sort in reverse order (nlogn)

		// Output the sorted array
		for (auto ele : a) // Loop through each element in the sorted array
			cout << ele << " ";
		cout << endl; // Print a newline after each test case
	}
	return 0;
}

// Time Complexity (TC): O(nlogn) = O(100*log2(100)) = O(700)
// Space Complexity (SC): O(n) = O(100)
