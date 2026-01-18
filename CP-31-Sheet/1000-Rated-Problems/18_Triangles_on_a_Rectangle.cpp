#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long w, h;
		cin >> w >> h; // Read the width and height of the rectangle
		long long area = INT_MIN; // Initialize the maximum area to the smallest possible integer
		for (int i = 0; i < 4; i++) // Loop over the four sides of the rectangle
		{
			long long k;
			cin >> k; // Read the number of points on the current side
			long long first, last;

			for (int j = 0; j < k; j++) // Loop over the points on the current side
			{
				long long x;
				cin >> x; // Read the x or y coordinate of the point
				if (j == 0)
					first = x; // Store the first point
				if (j == k - 1)
					last = x; // Store the last point
			}

			long long base = last - first; // Calculate the base of the triangle
			long long height;
			if (i <= 1)
				height = h; // For horizontal sides, the height is the rectangle's height
			else
				height = w; // For vertical sides, the height is the rectangle's width
			
			area = max(area, base * height); // Update the maximum area
		}
		cout << area << endl; // Output the doubled maximum area
	}
	return 0;
}

// Time Complexity (TC): O(k) = O(2*10^5)
// Space Complexity (SC): O(1)
