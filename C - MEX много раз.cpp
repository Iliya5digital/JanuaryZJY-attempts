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
    int n, k;
    cin >> n >> k;
    k %= (n + 1);
    VI f(n + 10);
    deque<int> ans;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans.pb(x);
        f[x]++;
    }

    // while(!ans.empty()) {
    //     cout << ans.front() << " ";
    //     ans.pop_front();
    // }

    for (int i = 0; i <= n; i++) {
        if (!f[i]) ans.push_front(i);
    }

    for (int i = 0; i < k; i++) {
        int t;
        t = ans.back();
        ans.push_front(t);
        ans.pop_back();
    }

    ans.pop_front();
    while(!ans.empty()) {
        cout << ans.front() << " ";
        ans.pop_front();
    }

    cout << "\n";
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

