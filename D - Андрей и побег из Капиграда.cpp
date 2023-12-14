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
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        v.pb({x, b});
    }
    sort(v.begin(), v.end());
    vector<int> l, r;
    for (int i = 0; i < v.size();) {
        int L = v[i].first, R = v[i].second;
        while (i < v.size() && v[i].first <= R) {
            R = max(R, v[i].second);
            i++;
        }
        l.push_back(L);
        r.push_back(R);
    }  
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        int p = upper_bound(l.begin(), l.end(), x) - l.begin() - 1;
        if (p < 0 || r[p] <= x) {
            cout << x << " ";
        }
        else {
            cout << r[p] << " "; 
        }
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
