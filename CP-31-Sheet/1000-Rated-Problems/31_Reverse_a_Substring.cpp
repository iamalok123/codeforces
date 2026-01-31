#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Read the length of the string
	long long n;
	cin >> n;

	// Read the string of length n
	string s;
	cin >> s;

	// Flag to check if a suitable substring is found
	int flag = 0;

	// Iterate through the string to find a pair of characters
	// where the current character is greater than the next character
	for (int i = 0; i < n - 1; i++)
	{
		// If the current character is greater than the next one,
		// it means we can reverse this substring to make the string lexicographically smaller
		if (s[i] > s[i + 1])
		{
			cout << "YES" << endl;
			// Output the 1-based indices of the substring to reverse
			cout << i + 1 << " " << i + 2 << endl;
			flag = 1; // Set the flag indicating a solution was found
			break; // Exit the loop as we found a valid substring
		}
	}

	// If no such pair was found, output "NO"
	if (flag == 0)
		cout << "NO" << endl;

	return 0;
}

// Time Complexity (TC): O(n) = O(3*10^5)
// Space Complexity (SC): O(n) = O(3*10^5)
