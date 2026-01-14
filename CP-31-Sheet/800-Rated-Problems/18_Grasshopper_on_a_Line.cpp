#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x , k ;
        cin >> x >> k ;

        if(x % k == 0){ // Case-2
            cout << 2 << endl ;
            cout << 1 << " " << x - 1 << endl ;
        }
        else{ // case-1
            cout << 1 << endl ;
            cout << x << endl ;
        }
    }

    return 0;
}


// T.C - O(1)
// S.C - O(1)