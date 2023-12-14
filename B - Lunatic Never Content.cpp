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

void solve() {
    
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int f = 1;
    for (int i = 1; i <= n; i++) {
        if (a[i] != a[n - i + 1]) {
            f = 0;
        }
    }

    if (f) {
        cout << "0\n";
        return;
    }

    vector<int> x;
    for (int i = 1; i <= n / 2; i++) {
        x.pb(abs(a[n - i + 1] - a[i]));
    }

    int ans = 0;
    if (x.size() == 1) {
        ans = x[0];
    }

    for (int i = 1; i < x.size(); i++) {
        ans = __gcd(x[i], x[i - 1]);
        x[i] = ans;
    }

    cout << ans << endl;
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
