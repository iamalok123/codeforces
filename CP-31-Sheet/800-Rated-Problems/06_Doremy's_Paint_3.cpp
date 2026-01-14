#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        long long a[n] ;
        map<long long , long long> freq_map ;
        for(int i=0 ; i<n ; i++){
            cin >> a[i] ;
        }
        for(int i=0 ; i<n ; i++){
            freq_map[a[i]]++ ;
        }
        if(freq_map.size() > 2){
            cout << "No" << endl ;
        }
        else{
            long long freq_1 = freq_map.begin()->second ;
            long long freq_2 = freq_map.rbegin()->second ;
            if(freq_1 == freq_2){
                cout << "Yes" << endl ;
            }
            else if(n%2 == 1 && abs(freq_1 - freq_2) == 1){
                cout << "Yes" << endl ;
            }
            else{
                cout << "No" << endl ;
            }
        }
    }
    return 0 ;
} 