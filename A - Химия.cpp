#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define endl '\n'
#define VI vector<int>
#define loop for (int i = 0; i < n; ++i)
#define print(a) cout << a << endl;

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

void solve(int cs) {
    VI a(26);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        a[c - 'a']++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++) if (a[i] & 1) cnt++;
    cout << (k + 1 >= cnt ? "YES\n" : "NO\n"); 
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
