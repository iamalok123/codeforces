#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        int l = x[0];
        int r = x[n - 1];
        int steps = (r - l) + min(abs(s - l), abs(s - r));
        cout << steps << "\n";
    }
    return 0;
}

// T.c = O(N)
// S.C = O(N)

// ________________________________________________________________________________

// Post contest discussion by tle eliminator:


// #include <bits/stdc++.h>

// using namespace std;

// void solve() {
//     int n,s;
//     cin >> n >> s;
//     int a[n];
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     cout << min(abs(s - a[0]) + a[n-1] - a[0], abs(s - a[n-1]) + a[n-1] - a[0]) << '\n';
// }

// int main() {

//     long long t ;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }


// T.c = O(N)
// S.C = O(N)