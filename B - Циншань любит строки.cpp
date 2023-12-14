#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define endl '\n'
#define VI vector<int>
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

void solve(int cs) {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int f = 1;
    set<int> st;
    rep (i, 1, n - 1) {
        if (s[i] == s[i - 1]) {
            f = 0;
            st.insert(s[i - 1] - '0');
        }
    }
    if (f) {
        cout << "YES\n";
        return;
    }
    f = 0;
    rep (i, 1, m - 1) {
        if (t[i] == t[i - 1]) {
            f = 1;
        }
    }
    if (f || t[0] != t[m - 1] || st.size() > 1) {
        cout << "NO\n";
        return;
    }
    if (*st.rbegin() != (t[0] - '0')) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}   

signed main() {
    IO;
    int T, TT = 1;
    T = 1; 
    cin >> T;
    while (T--) {
        solve(TT++);
    }
    return 0;
}
