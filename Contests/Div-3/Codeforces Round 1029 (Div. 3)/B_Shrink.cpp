// // Submitted wrong but not accepted

// #include <bits/stdc++.h>
// using namespace std;


// int main() {
//     int t;
//     cin >> t;  
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> ans(n);
//         int left = 1, right = n;
    
//         for (int i = 0; i < n; ++i) {
//             if (i % 2 != 1) {
//                 ans[i] = left++;
//             } else {
//                 ans[i] = right-- ;
//             }
//         }

//         for (int idx : ans) {
//             cout << idx << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// ---------------------------------------------------------------------------------



// Postcontest Discussion with TLE Eliminators -


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> ans(n);
		for(int i = 0; i < n; i++) ans[i] = i + 1;
		swap(ans[1], ans[n-1]);
		for(auto &x : ans) cout << x << " ";
		cout << "\n";
	}

	return 0;
}