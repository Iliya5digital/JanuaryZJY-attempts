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
    int l, r;
    cin >> l >> r;
    if (l == r) {
        for (int i = 2; i * i <= l; i++) {
            if (l % i == 0) {
                cout << l - i << " " << i << endl;
                return;
            }
        }
        cout << "-1\n";
        return;
    }
    else {
        if (r % 2) r--;
        if (r == 2) {
            cout << "-1\n";
            return;
        }
        else printf("%d 2\n", r - 2);
    }
}   

signed main() {
    int T;
    T = 1; 
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
