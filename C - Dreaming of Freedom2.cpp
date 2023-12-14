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

int num;

void solve() {
    int n, m;
    cin >> n >> m;
    if (n == 1 || m == 1) {
        cout << "YES\n";
        return;
    }
    if (n <= m || n % m == 0) { 
        cout << "NO\n";
        return;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if ((i <= m) || (n / i <= m)) {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
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
