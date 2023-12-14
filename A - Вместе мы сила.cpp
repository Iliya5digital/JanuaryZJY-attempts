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
    VI a(n);
    set<int> f;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        f.insert(a[i]);
    }
    if(f.size() == 1) {
        cout << "-1\n";
        return;
    }
    sort(a.begin(), a.end());
    VI c;
    c.pb(a.back());
    a.pop_back();
    while(1) {
        if (a.back() == c[0]) {
            c.pb(a.back());
            a.pop_back();
        }
        else break;
    }

    cout << a.size() << " " << c.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << endl;
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
