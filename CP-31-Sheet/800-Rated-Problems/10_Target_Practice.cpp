#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int score[10][10] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        char a[10][10];
        for (int i = 0; i < 10; ++i) {
            string s ; 
            cin >> s;
            for (int j = 0; j < 10; ++j) {
                a[i][j] = s[j];
            }
        }

        int total_score = 0;

        // Iterate through each cell
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (a[i][j] == 'X') {
                    total_score += score[i][j];
                }
            }
        }

        cout << total_score << endl;
    }
    return 0;
}

// T.C = O(n^2)
// S.C = O(n^2)