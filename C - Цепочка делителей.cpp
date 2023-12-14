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

int qpow(int a, int b) {
    int ans = 1 % MOD;
    for (; b; b >>= 1) {
        if (b & 1) {
            ans *= a % MOD;
        }
        a *= a % MOD;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    VI a;
    for (int i = 2; i <= n;) {
        if (n % i == 0) i *= 2;
        else {
            a.pb(n);
            i /= 2;
            n -= i;
        }
    }

    while (n) {
        a.pb(n);
        n /= 2;
    }

    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
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
