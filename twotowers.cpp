#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string s, t;
        cin >> n >> m >> s >> t;
        bool possible = true;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) {  // two adjacent blocks have the same color
                possible = false;
                break;
            }
        }
        for (int i = 1; i < m; i++) {
            if (t[i] == t[i-1]) {  // two adjacent blocks have the same color
                possible = false;
                break;
            }
        }
        if ((s[0] == t[m-2] || s[0] == t[m-1]) || (s[n-1] == t[1] || s[n-1] == t[0])) {
            // first and last blocks are the same color as the second and second-to-last blocks of the other tower
            possible = false;
        }
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
