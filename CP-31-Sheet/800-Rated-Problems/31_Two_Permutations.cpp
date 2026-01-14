#include <bits/stdc++.h>
using namespace std ;
int main(){

    long long t;
    cin >> t ;
    
    while(t--){
        long long n, a, b;
        cin >> n >> a >> b ;
        if((a == n && b == n) || (a + b + 1 < n)){
            cout << "Yes" << endl ;
        }
        else{
            cout << "No" << endl ;
        }
    }
    return 0 ;

}

// tc = O(n) = O(100)
// sc = O(n) = O(100)


// ------------------------------------------------------------------------------------



// #include <bits/stdc++.h>
// using namespace std ;
// int main(){

//     long long t;
//     cin >> t ;

//     while(t--){
//         long long n, a, b;
//         cin >> n >> a >> b ;
//         bool res = (a == n && b == n) || (a + b + 1 < n);
//         cout <<( res  ? "Yes" : "No" )<< endl ;
//     }

// }
