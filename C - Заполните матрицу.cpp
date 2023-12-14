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
    int n, m;
    cin >> n >> m;
    if (m == 1) {
        for (int i = 0; i <= n; i++) {
            cout << "0\n";
        }
        return;
    }
    if (n == 1) {
        cout << "2\n";
        for (int i = 0; i < m; i++) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    cout << min(n + 1, m) << endl;
    for (int i = 0; i < n; i++) {
        int t = min(i, m - 2);
        for (int j = 0; j < m; j++) {
            cout << (j - t + m + 1) % m << " ";
        } 
        cout << endl;
    }
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
