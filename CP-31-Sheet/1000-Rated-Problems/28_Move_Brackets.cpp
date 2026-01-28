#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n;
		cin >> n; // Read the length of the bracket sequence
		string s;
		cin >> s; // Read the bracket sequence

		long long sum = 0; // Initialize sum to track balance of brackets
		long long ops = 0; // Initialize ops to count the number of operations needed

		// Iterate over each character in the string
		for (int i = 0; i < n; i++)
		{
			if (s[i] == ')')
				sum--; // Decrement sum for a closing bracket
			else
				sum++; // Increment sum for an opening bracket

			// If sum is negative, it means there are more closing brackets than opening
			if (sum < 0)
			{
				ops++; // Increment operations needed
				sum = 0; // Reset sum to zero to start fresh
			}
		}

		cout << ops << endl; // Output the number of operations needed for this test case
	}
	return 0;
}

// Time Complexity (TC): O(n)
// Space Complexity (SC): O(n)
