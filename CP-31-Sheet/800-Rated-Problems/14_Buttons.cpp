#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main() {
    int t ;
    cin >> t ;
    while(t--){
        long long a , b , c ;
        cin >> a >> b >> c ;
        if(c % 2 == 1){
            if(b>a){
                cout << "Second" << endl ;
            }
            else{
                cout << "First" << endl ;
            }
        }
        else{
            if(a>b){
                cout << "First" << endl ;
            }
            else{
                cout << "Second" << endl ;
            }
        }
    }
    
    return 0;
}


// T.C - O(1)
// S.C - O(1)
