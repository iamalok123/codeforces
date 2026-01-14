#include <bits/stdc++.h>

using namespace std;

vector<pair<pair<int,int>,pair<int,int>>> ops;

array<vector<int>,2> arr;
vector<pair<int,int>> pos;

void Swap(int a, int b, int c, int d) {
    swap(arr[a][b], arr[c][d]);
    ops.push_back(make_pair(make_pair(a,b), make_pair(c,d)));
    pos[arr[a][b] - 1] = make_pair(a,b);
    pos[arr[c][d] - 1] = make_pair(c,d);
}

void solve() {
    int n;
    cin >> n;
    ops.clear();
    arr[0].resize(n);
    arr[1].resize(n);
    pos.resize(2*n);
    for(int j = 0; j < 2; j++)
    for(int i = 0; i < n; i++) {
        cin >> arr[j][i];
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            pos[arr[i][j]-1] = (make_pair(i,j));
        }
    }

    for(int i = 0; i < 2*n; i++) {
        auto cur = pos[i];
        if(cur.first != i % 2) {
            Swap(cur.first,cur.second,1 - cur.first, cur.second);
            cur.first = 1 - cur.first;
        }
        while(cur.second > i / 2) {
            Swap(cur.first,cur.second, cur.first,cur.second - 1);
            cur.second--;
        }
    }

    assert(ops.size() <= 1709);

    cout << ops.size() << '\n';

    for(auto x : ops) {
        if(x.first.first == x.second.first) {
            cout << x.first.first + 1 << ' ' << max(x.first.second,x.second.second) << '\n';
        }
        else{
            cout << 3 << ' ' << x.second.second+1 << '\n';
        }
    }
}

int main() {
    #ifdef PRADY
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t T = clock();
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

#ifdef PRADY
    cout << "\nTime taken: " << ((float)(clock() - T)) / CLOCKS_PER_SEC << " seconds";
#endif
    return 0;
}

