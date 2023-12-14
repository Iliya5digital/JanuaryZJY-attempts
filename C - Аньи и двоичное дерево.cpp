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

struct node {
    int f, l, r;
    char op;
};

node g[N];

int dfs(int x) {
    int ll, rr;
    if (g[x].l == 0 && g[x].r == 0) {
        return 0;
    }
    if (g[x].l == 0) {
        ll = 1919810;
    }
    else {
        ll = dfs(g[x].l);
    }
    if (g[x].r == 0) {
        rr = 1919810;
    }
    else {
        rr = dfs(g[x].r);
    }
    if (g[x].op != 'R') ++rr;
    if (g[x].op != 'L') ++ll;
    return (ll < rr ? ll : rr);
}

void solve(int cs) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        char o;
        cin >> o;
        g[i].op = o;
    }
    for (int i = 1; i <= n; i++) {
        int ll, rr;
        cin >> ll >> rr;
        g[i].l = ll;
        g[i].r = rr;
        g[ll].f = i;
        g[rr].f = i;
    }

    int ans = dfs(1);
    cout << ans << endl;
    for (int i = 0; i < n; i++) {
        g[i].l = 0;
        g[i].r = 0;
        g[i].op = 0;
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
