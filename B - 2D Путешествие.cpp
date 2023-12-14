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

int n, k;
int x[N];
int y[N];
int f(int a,int b){
    if(a <= k && b <= k)
        return 0;
    return abs(x[a] - x[b]) + abs(y[a] - y[b]);
}

void solve() {
    int a, b;
    cin >> n >> k >> a >> b;
    
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }
    if (a <= k && b <= k) {
        cout << 0 << endl;
        return;
    }
    int d1 = llinf, d2 = llinf, d3 = llinf;
    for (int i = 1; i <= k; i++) {
        d1 = min(d1, f(a, i));
    }
    for (int i = 1; i <= k; i++) {
        d2 = min(d2, f(b, i));
    }
    d3 = min(d1+d2, f(a, b));
    cout << d3 << endl;
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
