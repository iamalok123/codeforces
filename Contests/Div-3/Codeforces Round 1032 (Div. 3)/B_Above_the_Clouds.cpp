// #include <bits/stdc++.h>
// using namespace std;

// bool isValidSplit(string& s) {
//     int n = s.size();
//     for (int i = 1; i < n - 1; ++i) {
//         string a = s.substr(0, i); // a = s[0...i-1]
//         string c = s.substr(i + 1); // c = s[i+1...n-1]
//         char b = s[i]; // b = s[i]

//         string ac = a + c;
//         if (ac.find(b) != string::npos) { // Check if b is a substring of ac
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         string s;
//         cin >> n >> s;

//         if (isValidSplit(s)) {
//             cout << "Yes" << endl;
//         } else {
//             cout << "No" << endl ;
//         }
//     }
//     return 0;
// }


// T.c = O(N)
// S.C = O(N)


// ✅ Time Complexity:
// Let n = length of string s, t = number of test cases
// Loop runs O(n) times
// Each iteration: substr (O(n)) + concat (O(n)) + find (O(n)) → O(n)
// Total per test case: O(n^2)
// Total for t test cases: O(t * n^2)

// ✅ Space Complexity:
// At most O(n) extra space per test case for substrings
// No extra data structures used
// Overall Space: O(n)



// ----------------------------------------------------------------------------------------------------



// Post contest discussion by tle eliminator:




#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    int n;
    cin >> n >> s;
    int fr[26]{};
    for(int i = 0; i < n; i++) {
        fr[s[i] - 'a']++;
    }

    for(int i = 1; i < n-1; i++) {
        if(fr[s[i] - 'a'] > 1) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {

    long long t ;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}