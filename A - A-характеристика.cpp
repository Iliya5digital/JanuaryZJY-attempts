#include <bits/stdc++.h>
//#define LOCAL
#ifdef LOCAL
#include "LocalDebug.h"
#endif

using namespace std;

#define int long long
#define pb push_back

const int inf = 0x3f3f3f3f;
const long long llinf = (long long)0x3f3f3f3f3f3f3f3f;
const long long MOD = (long long)1e9 + 7LL;
const size_t N = (size_t)1e6 + 5;

#define IO                       \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);             \
    std::cout.tie(0)

int C(int x) {
    return x * (x - 1) / 2;
}

void solve() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        if (C(i) + C(n - i) == k) {
            cout << "YES\n";
            for (int j = 0; j < i; j++) {
                cout << "1 ";
            }
            for (int j = i; j < n; j++) {
                cout << "-1 ";
            }
            cout << endl;
            return;
        }
    }

    cout << "NO\n";
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
