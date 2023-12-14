#include <bits/stdc++.h>

//#include "LocalDebug.h"

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

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int f;
    if (s[0] == '<') {
        f = 1;
    }
    else {
        f = 0;
    }
    int ans = 0, t = 0;
    for (int i = 1; i < n; i++) {
        if (f) {
            if (s[i] == '<') {
                t++;
            }
            else {
                ans = max(ans, t);
                f = 0;
                t = 0;
            }
        }
        else {
            if (s[i] == '>') {
                t++;
            }
            else {
                ans = max(ans, t);
                f = 1;
                t = 0;
            }
        }
    }

    ans = max(ans, t);

    cout << ans + 2 << endl;
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
