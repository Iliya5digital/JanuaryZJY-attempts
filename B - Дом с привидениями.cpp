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

char str[100100];

void solve(int cs) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (auto c : s) cnt += (c - '0');
    reverse(s.begin(), s.end());
    int ans = 0, now = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            ans += (i - now);
            now++;
            cout << ans << ' ';
        }   
    }
    while(cnt--) cout << "-1 ";
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
