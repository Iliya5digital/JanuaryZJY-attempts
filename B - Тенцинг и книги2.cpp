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
    int n, k;
    cin >> n >> k;
    VI a(n);
    VI b(n);
    VI c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int kn = 0;
    for (int i = 0; i < n; i++) {
        int x = k | a[i];
        if (x != k) break;
        kn |= a[i];
    }
    for (int i = 0; i < n; i++) {
        int x = k | b[i];
        if (x != k) break;
        kn |= b[i];
    }
    for (int i = 0; i < n; i++) {
        int x = k | c[i];
        if (x != k) break;
        kn |= c[i];
    }

    cout << (kn == k ? "YES\n" : "NO\n");
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
