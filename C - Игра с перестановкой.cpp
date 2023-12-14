#include <bits/stdc++.h>

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

#define debug(a) std::cerr << "\033[34m" << #a << ':' << a << "\033[0m" << std::endl

#define debugList(list)                        \
    std::cerr << "\033[34m" << #list << ": ["; \
    for (auto& e : list) {                     \
        std::cerr << e << ", ";                \
    }                                          \
    std::cerr << "\b\b]\033[0m" << endl

void solve() {
    int n;
    cin >> n;
    VI f(n);
    VI a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x = inf, y = inf;
    for (int i = 0; i < n; i++) {
        if (y < a[i]) {
            f[i] = 1;
            continue;
        }
        if (a[i] > x) {
            f[i] = 0;
            y = min(y, a[i]);
        }
        else {
            f[i] = 1;
            x = a[i];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) if (f[i] == 0) ans++;

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

