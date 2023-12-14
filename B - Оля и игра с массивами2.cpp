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
    std::cerr << "\033[34m" << #list << ": [" ; \
    for (auto& e : list) {                     \
        std::cerr << e << ", " ;                \
    }                                          \
    std::cerr << "\b\b]\033[0m" << endl

void solve() {
    int n;
    cin >> n;
    VI mm1;
    VI mm2;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int m1 = inf, m2 = 0;     //m1最小值，m2次小值
        while(m--) {
            int t;
            cin >> t;
            if (t <= m1) {
                m2 = m1;
                m1 = t;
            }
            else if (t <= m2) {
                m2 = t;
            }
        }
        mm1.pb(m1);
        mm2.pb(m2);
    }
    sort(mm1.begin(), mm1.end(), greater<int>());
    sort(mm2.begin(), mm2.end(), greater<int>());
    int ans = mm1.back();
    for (int i = 0; i < mm2.size() - 1; i++) {
        ans += mm2[i];
    }
    cout << ans << "\n";
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
