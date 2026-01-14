// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         vector<long long> a(n);
//         for (int i = 0; i < n; i++) // n
//             cin >> a[i];

//         long long ans = 0;
//         for (int i = n - 2; i >= 0; i--) // n
//         {
//             while (a[i] >= a[i + 1]) // 31
//             {
//                 ans++;
//                 a[i] /= 2;
//                 if (a[i] == 0)
//                     break;
//             }
//             if (a[i] == 0 && a[i + 1] == 0)
//             {
//                 ans = -1;
//                 break;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// // tc - O(nlog2(2*10^9)) = O(30*31) = O(930) ~ 10^3 
// // sc - O(n) = O(30)


// ---------------------------------------------------------------------------------------------------------


#include <iostream>
#include <vector>
using namespace std;

int makeIncreasing(vector<int>& a) {
    int n = a.size();
    int ops = 0;

    for (int i = n - 2; i >= 0; --i) {
        // If current is already less than next, good
        if (a[i] < a[i + 1]) continue;

        // Try dividing until it's less or becomes 0
        while (a[i] >= a[i + 1] && a[i] > 0) {
            a[i] /= 2;
            ops++;
        }

        // If still not strictly less, it's impossible
        if (a[i] >= a[i + 1]) return -1;
    }

    return ops;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;

        cout << makeIncreasing(a) << endl;
    }

    return 0;
}
