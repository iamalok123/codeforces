#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n, m;
		cin >> n >> m; // Read the dimensions of the grid

		// Initialize a 2D vector to store the grid values
		vector<vector<long long>> a(n, vector<long long>(m));
		for (long long i = 0; i < n; i++)
			for (long long j = 0; j < m; j++)
				cin >> a[i][j]; // Read each value into the grid

		long long negatives = 0; // Count of negative numbers
		long long minimum = INT_MAX; // Minimum absolute value in the grid
		long long sum = 0; // Sum of absolute values of all numbers

		// Iterate over the grid to calculate negatives, minimum, and sum
		for (long long i = 0; i < n; i++)
		{
			for (long long j = 0; j < m; j++)
			{
				if (a[i][j] < 0)
					negatives++; // Increment count if the number is negative
				minimum = min(minimum, abs(a[i][j])); // Update minimum absolute value
				sum += abs(a[i][j]); // Add absolute value to sum
			}
		}

		// If the count of negative numbers is even, the sum is maximum
		if (negatives % 2 == 0)
			cout << sum << endl;
		else
			// If odd, subtract twice the smallest absolute value to maximize sum
			cout << sum - 2 * abs(minimum) << endl;
	}
}

// Time Complexity (TC): O(n*m) = O(100)
// Space Complexity (SC): O(n*m) = O(100)
