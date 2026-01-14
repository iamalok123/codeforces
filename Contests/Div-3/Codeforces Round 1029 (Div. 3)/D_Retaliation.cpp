// Post contest Discussion with TLE Eliminators -

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while(tc--) {
		ll n; cin >> n;
		vector<ll> a(n);
		for(auto &x : a) cin >> x;

		if(2*a[0] - a[1] < 0 || (2*a[0] - a[1]) % (n+1) != 0) {
			cout << "NO\n";
			continue;
		}

		ll x2 = (2*a[0] - a[1]) / (n+1);
		ll x1 = a[0] - n*x2;

		if(x1 < 0) {
			cout << "NO\n";
			continue;
		}

		bool pos = true;

		for(ll i = 1; i <= n; i++) {
			if(a[i-1] - i*x1 - (n-i+1)*x2 != 0) pos = false;
		}

		if(pos) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}