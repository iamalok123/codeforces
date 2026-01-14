#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;

        vector<bool> valid(n, true);

        // From left: elements must be >= a[i]
        int min_left = a[0];
        for (int i = 1; i < n; ++i) {
            if (a[i] < min_left)
                min_left = a[i];
            if (a[i] < a[i - 1])
                break;
        }

        // From right: elements must be <= a[i]
        int max_right = a[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            if (a[i] > max_right)
                max_right = a[i];
            if (a[i] > a[i + 1])
                break;
        }

        // Actual answer computation
        string ans(n, '0');
        int prefix_min = a[0];
        for (int i = 0; i < n; ++i) {
            bool left_ok = true;
            for (int j = 0; j < i; ++j) {
                if (a[j] < a[i]) {
                    left_ok = false;
                    break;
                }
            }

            bool right_ok = true;
            for (int j = i + 1; j < n; ++j) {
                if (a[j] > a[i]) {
                    right_ok = false;
                    break;
                }
            }

            if (left_ok && right_ok)
                ans[i] = '1';
        }

        cout << ans << '\n';
    }

    return 0;
}
