#include <iostream>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    // Print k times '1'
    for (int i = 0; i < k; i++) {
        cout << '1';
    }

    // Print (n-k) times '0'
    for (int i = 0; i < n - k; i++) {
        cout << '0';
    }

    cout << '\n'; // Print newline after each test case
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
