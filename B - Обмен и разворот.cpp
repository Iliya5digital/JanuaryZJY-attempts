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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (k % 2 == 0) {
        sort(s.begin(), s.end());
        cout << s << endl;
        return;
    }

    string t1 = "", t2 = "";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            t1 += s[i];
        }
        else {
            t2 += s[i];
        }
    }
    sort(t1.begin(), t1.end());
    sort(t2.begin(), t2.end());
    if (n & 1) {
        for (int i = 0; i < n / 2; i++) {
            cout << t1[i] << t2[i];
        }
        cout << t1[n / 2] << endl;
    }
    else {
        for (int i = 0; i < n / 2; i++) {
            cout << t1[i] << t2[i];
        }
        cout << endl;
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
