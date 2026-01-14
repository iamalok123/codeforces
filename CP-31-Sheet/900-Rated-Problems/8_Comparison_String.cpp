#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s ;
        cin >> s ;

        int current_substring_length = 1 ;
        int longest_substring_length = 1 ;

        for(int i=1 ; i<n ; i++){
            if(s[i-1] == s[i]){
                current_substring_length ++ ;
            }
            else{
                longest_substring_length = max(longest_substring_length, current_substring_length);
                current_substring_length = 1 ;
            }
        }
        longest_substring_length = max(longest_substring_length, current_substring_length);
        cout << longest_substring_length + 1 << endl ;
    }
    return 0;
}
// T.C = O(n)
// S.C = O(1)