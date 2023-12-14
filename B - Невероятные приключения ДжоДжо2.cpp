#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back

const int inf = 0x3f3f3f3f;
const long long llinf = (long long)0x3f3f3f3f3f3f3f3f;
const long long MOD = (long long)1e9 + 7LL;
const size_t N = (size_t)1e6 + 5;

#define IO                       \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);             \
    std::cout.tie(0)

#define debug(a) std::cerr << "\033[34m" << #a << ':' << a << "\033[0m" << std::endl
#define testOut(a) std::cerr << "\033[32m" << #a << ':' << a << "\033[0m" << std::endl
#define debugList(list)                        \
    std::cerr << "\033[34m" << #list << ": ["; \
    for (auto& e : list) {                     \
        std::cerr << e << ", ";                \
    }                                          \
    std::cerr << "\b\b]\033[0m" << endl
#define testOutList(list)                        \
    std::cerr << "\033[32m" << #list << ": ["; \
    for (auto& e : list) {                     \
        std::cerr << e << ", ";                \
    }                                          \
    std::cerr << "\b\b]\033[0m" << endl


void solve() {
    string s;
    cin >> s;
    int n = s.size();

    string ts = "";
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1') {
            ts += s[i];
        }
        else {
            break;
        }
    }

    s = ts + s;
    int cnt = 0;
    int num = 0;
    for (int i = 0; i < n; i++) {
        while(s[i] == '1' && i < n) {
            cnt++;
            i++;
        }
        num = max(num, cnt);
        cnt = 0;
    }

    if (num == n) {
        cout << n * n << endl;
        return;
    }

    if (num & 1) {
        int ans = ((num + 1) / 2) * ((num + 1) / 2);
        cout << ans << endl;
    }
    else { 
        int ans = (num / 2) * (num / 2 + 1);
        cout << ans << endl;
    }
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
