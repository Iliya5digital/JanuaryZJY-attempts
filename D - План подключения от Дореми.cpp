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

struct cmp {
    bool operator()(pii x, pii y) {
        return x.first < y.first;
    }
};

void solve(int cs) {
    int n, c;
    cin >> n >> c;
    priority_queue<pii, vector<pii>, cmp> q;
    int sum;
    cin >> sum;
    rep (i, 2, n) {
        int x;
        cin >> x;
        q.push(make_pair(x - i * c, x));
    }
    while (!q.empty()) {
        auto x = q.top();
        if (x.first + sum >= 0) {
            sum += x.second;
            q.pop();
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
