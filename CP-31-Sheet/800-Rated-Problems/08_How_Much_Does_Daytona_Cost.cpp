#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t ;
    cin >> t ;
    while(t--){
        long long n , k ;
        cin >> n >> k ;
        long long a[n] ;
        for(int i=0 ; i<n ; i++){
            cin >> a[i] ;
        }
        long long is_substring_exist = 0 ;
        for(int i=0 ; i<n ; i++){
            if(a[i] == k){
                is_substring_exist = 1 ;
                break ;
            }
        }
        if(is_substring_exist){
            cout << "YES" << endl ;
        }
        else{
            cout << "NO" << endl ;
        }
    }
    return 0 ;
}

