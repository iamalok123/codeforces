#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ; 
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<long long> a(n) ;
        for(long long i=0 ; i<n ; i++){
            cin >> a[i] ;
        }
        long long zero_count = 0 ;
        long long one_count = 0 ;

        for(long long i=0 ; i<n ; i++){
            if(a[i] == 1){
                one_count++ ;
            }
            if(a[i] == 0){
                zero_count++ ;
            }
        }
        long long possible_ways = pow(2,zero_count)*one_count ;
        cout << possible_ways << endl ;
    }
}