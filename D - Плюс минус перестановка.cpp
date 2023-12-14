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
    int n, x, y;
    cin >> n >> x >> y;
    int lcm = x * y / __gcd(x, y);
    int numx = n / x - n / lcm;
    int numy = n / y - n / lcm;
    int ans1 = numx * n - numx * (numx - 1) / 2;
    int ans2 = numy + numy * (numy - 1) / 2;
    int ans = ans1 - ans2;
    cout << ans << endl;
}   

//n*a1+n（n-1）d/2

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
