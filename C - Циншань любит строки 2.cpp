#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define endl '\n'
#define VI vector<int>
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

void solve(int cs) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n & 1) {cout << "-1\n"; return;} int c1 = count(s.begin(), s.end(), '1'); int c2 = n - c1; if (c1 != c2) {cout << "-1\n"; return;}

    VI ans;
    string t = "01";
    int l = 0, r = n - 1;
    while (l <= r) {
        if (s[l] != s[r]) {l++; r--; continue;}
        else {
            if (s[l] == '0') {
                s.insert(r + 1, t);
                ans.pb(r + 1);
                r += 2;
            }
            else {
                s.insert(l, t);
                ans.pb(l);
                r += 2;
            }
            l++; r--;
        }
    }
    print(ans.size());
    for (auto p : ans) {
        cout << p << " ";
    }
    cout << endl;
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
