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

#define otto auto

void solve(int cs) {
    int a, b, x1, x2, y1, y2;
    cin >> a >> b >> x1 >> y1 >> x2 >> y2;
    set<pii > aa;
    set<pii > bb;
    aa.insert(make_pair(x1 + a, y1 + b));
    aa.insert(make_pair(x1 - a, y1 + b));
    aa.insert(make_pair(x1 + a, y1 - b));
    aa.insert(make_pair(x1 - a, y1 - b));
    aa.insert(make_pair(x1 + b, y1 + a));
    aa.insert(make_pair(x1 - b, y1 + a));
    aa.insert(make_pair(x1 + b, y1 - a));
    aa.insert(make_pair(x1 - b, y1 - a));

    bb.insert(make_pair(x2 + a, y2 + b));
    bb.insert(make_pair(x2 - a, y2 + b));
    bb.insert(make_pair(x2 + a, y2 - b));
    bb.insert(make_pair(x2 - a, y2 - b));
    bb.insert(make_pair(x2 + b, y2 + a));
    bb.insert(make_pair(x2 - b, y2 + a));
    bb.insert(make_pair(x2 + b, y2 - a));
    bb.insert(make_pair(x2 - b, y2 - a));

    int ans = 0;
    for (auto i : aa) {
        for (auto j : bb) {
            if (i == j) ans++;
        }
    }
    cout << ans << endl;
}   

signed main() {
    IO;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int T, TT = 1;
    T = 1; 
    cin >> T;
    while (T--) {
        solve(TT++);
    }
    return 0;
}
