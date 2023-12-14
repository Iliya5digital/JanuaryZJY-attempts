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

#define otto auto

void solve(int cs) {
    int n, k;
    cin >> n >> k;
    VI a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (k >= 3) cout << "0\n";
    else if (k == 1) {
        int mn = a[0];
        for (int i = 1; i < n; i++) {
            mn = min({mn, a[i], a[i] - a[i - 1]});
        }
        cout << mn << endl;
    }
    else {
        int mn = llinf;
        for (int i = 0; i < n; i++) {
            mn = min(mn, a[i]);
            for (int j = i + 1; j < n; j++) {
                int t = (a[j] - a[i]);
                mn = min(mn, t);
                auto p = lower_bound(a.begin(), a.end(), t);
                mn = min(mn, *p - t);
                if (p != a.begin()) mn = min(mn, t - (*(p - 1)));
            }
        }
        cout << mn << endl;
    }
}   

signed main() {
    IO;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int T, TT = 1;
    T = 1; 
    cin >> T;
    while (T--) {
        solve(TT++);
    }
    return 0;
}
