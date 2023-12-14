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
    VI o(n + 10);
    VI f(n + 10);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        o[x] = i;
    }

    for (int i = 2; i <= n; i++) {
        if (o[i - 1] < o[i]) {
            f[i]++;
        }
    }

    int num = 0, point = 1;
    while (n >= point) {
        if (!f[point]) {
            while (f[point + 1]) {
                point++;
            }
            num++;
        }
        point++;
    }
    cout << num - 1 << "\n";
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


