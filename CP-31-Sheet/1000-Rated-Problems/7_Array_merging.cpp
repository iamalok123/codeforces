#include <bits/stdc++.h>
using namespace std;

// Function to compute longest streaks of identical numbers
void computeLongestStreaks(const vector<long long>& arr, vector<long long>& longest_subarray) {
    long long n = arr.size();
    long long counter = 1;

    for (long long i = 1; i < n; ++i) {
        if (arr[i] == arr[i - 1]) {
            counter++;
        } else {
            longest_subarray[arr[i - 1]] = max(longest_subarray[arr[i - 1]], counter);
            counter = 1;
        }
    }
    longest_subarray[arr[n - 1]] = max(longest_subarray[arr[n - 1]], counter);
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n) , b(n);
        for (long long i = 0; i < n; i++) // n
            cin >> a[i];
        for (long long i = 0; i < n; i++) // n
            cin >> b[i];

        vector<long long> longest_subarray_a(2 * n + 1, 0);
        vector<long long> longest_subarray_b(2 * n + 1, 0);

        computeLongestStreaks(a, longest_subarray_a);
        computeLongestStreaks(b, longest_subarray_b);

        long long max_freq = -1;
        for (long long i = 1; i <= 2 * n; ++i) {
            max_freq = max(max_freq, longest_subarray_a[i] + longest_subarray_b[i]);
        }

        cout << max_freq << endl;
    }
    return 0;
}



// tc = O(n) ~ O(2*10^5)
// sc = O(n) ~ O(2*10^5)
