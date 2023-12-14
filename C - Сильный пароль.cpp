#include <bits/stdc++.h>

//#include "LocalDebug.h"

using namespace std;

#define int long long
#define pb push_back
#define VI vector<int>

const int inf = 0x3f3f3f3f;
const long long llinf = (long long)0x3f3f3f3f3f3f3f3f;
const long long MOD = (long long)1e9 + 7LL;
const size_t N = (size_t)1e6 + 5;

#define IO                       \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);             \
    std::cout.tie(0)

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    vector<array<int, 10>> nxt(n + 1);
    nxt[n].fill(n + 1);
    for(int i = n - 1; i >= 0; i--) {
        nxt[i] = nxt[i + 1];
        nxt[i][s[i] - '0'] = i + 1;
    }

    int m;
    cin >> m;
    string ls, rs;
    cin >> ls >> rs;
    
    int p = 0;
    for (int i = 0; i < m; i++) {
        int l = ls[i] - '0';
        int r = rs[i] - '0';
        int t = 0;
        for (int j = l; j <= r; j++) {
            t = max(t, nxt[p][j]);
        }
        p = t;

        if (p == n + 1) break;
    }

    cout << ((p == n + 1) ? "YES\n" : "NO\n");
}   

signed main() {
    IO;
    int T;
    T = 1; 
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
