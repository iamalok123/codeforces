#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n ;
        cin >> n;
        long long a[n] ;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long odd_count = 0 ;

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 1) {
                odd_count++;
            }
        }
        if (odd_count % 2 == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}


// T.C - O(n)
// S.C - O(n)
