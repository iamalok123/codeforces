// Only This code is successfully accepted in codeforces 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;  
        vector<int> arr(n);
        vector<int> positions ;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if(arr[i] == 1) {
                positions.push_back(i); 
            }
        }

        int ans = positions.back() - positions.front() + 1; 

        if(ans <= x){
            cout << "YES" << endl ;
        }else{
            cout << "NO" << endl ;
        }
    }

    return 0;
}
