#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define endl '\n'
#define VI vector<int>
#define pii pair<int, int>
#define rep(i, j, k) for (int i = j; i <= k; ++i)
#define per(i, j, k) for (int i = j; i >= k; --i)
#define print(a) cout << a << endl;

const int inf = 0x3f3f3f3f;
const long long llinf = (long long)0x3f3f3f3f3f3f3f3f;
const long long MOD = (long long)1e9 + 7LL;
const size_t N = (size_t)1e6 + 5;

#define IO                       \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);             \
    std::cout.tie(0)

#define debug(a) std::cerr << "\033[34m" << #a << ':' << a << "\033[0m" << endl

#define debugList(list)                        \
    std::cerr << "\033[34m" << #list << ": ["; \
    for (auto& e : list) {                     \
        std::cerr << e << ", ";                \
    }                                          \
    std::cerr << "\b\b]\033[0m" << endl

int f[40];

void solve(int cs) {
    int n, q;
    cin >> n >> q;
    VI a(n + 5);
    VI x;
    rep(i, 1, n) {
        cin >> a[i];
    }
    int p = inf;
    for (int i = 1, t; i <= q; i++) {
        cin >> t;
        if (p > t) {
            x.pb(t);
            p = t;
        }
    }
    for (auto sb : x) {
        rep (i, 1, n) {
            if (a[i] % f[sb] == 0) a[i] += f[sb - 1];
        }
    }

    rep(i, 1, n) {
        cout << a[i] << " ";
    }
    cout << endl;
}   

signed main() {
    IO;
    f[0] = 1;
    rep(i, 1, 39) f[i] = 2 * f[i - 1];
    int T, TT = 1;
    T = 1; 
    cin >> T;
    while (T--) {
        solve(TT++);
    }
    return 0;
}
